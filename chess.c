#ifndef _CHESS_H_
#define _CHESS_H_
#include<stdio.h>
#include<windows.h>
#define PLAYER_STYLE 'X'
#define COMPUT_STYLE 'O'
#pragma warning (disable : 4996)
#define ROW 3
#define COL 8
void ShowMU();
void Game();
void InitBoard(char board[][COL], int row, int col);
void ShowBoard(char board[][COL], int row, int col);
int GetRandom(int start, int end);
void playerMove(char board[][COL], int row, int col);
char Judge(char board[][COL], int row, int col);
void computerMove(char board[][COL], int row, int col);

#endif

#include"chess.h"

void ShowMU(){

	printf("****************************************************\n");
	printf("**************1、继续游戏  2、结束游戏**************\n");
	printf("****************************************************\n");


}
// char (*board)[COL]
void InitBoard(char board[][COL], int row, int col){ // 初始化数组，二维数组传参，降维成char (*board)[COL]

	int i = 0;
	for (; i < row; i++){
		int j = 0;
		for (; j < col; j++){
		
			board[i][j] = ' ';
		}

	}


}

void ShowBoard(char board[][COL], int row, int col){

	printf("  | 1 | 2 | 3 \n");
	
	int i = 1;
	for (; i <= 3; i++){
		
		printf("--------------\n");
		printf("%d | %c | %c | %c \n", i, board[i-1][0], board[i-1][1], board[i-1][2]);
	}

}


int GetRandom( int start , int end){

	return rand() % (end - start + 1) + start; // 产生 [start , end] 之间的随机数；
}

void playerMove(char board[][COL], int row, int col){ // 玩家输入
	
	while (1){
	
		int x = 0;
		int y = 0;

		printf("Please Enter Pos<x y> :");
		scanf("%d %d",&x,&y);

		if (x >= 1 && y <= 3 && y >= 1 && x <= 3){ //验证用户输入棋盘位置合法
			if (board[x - 1][y - 1] == ' '){
			
				board[x - 1][y - 1] = PLAYER_STYLE;
				
				break;
			}
			else{

				printf("你的落子位置已被占用，请重新输入！\n");// 输入位置被占用
				break;
			}
		
		}
		else{
			printf("ERROR！ENTER AGAIN!\n");
		}

	 
	
	}

}

// return 'E' 平局  ‘X’ 玩家赢  ‘O’ 电脑赢   ‘N’ 下一步
char Judge(char board[][COL], int row, int col){

	int i = 0;
	for ( ; i < row; i++){  // 判断棋盘 行 有无三子相连

		if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]){
		
			return board[i][0];
		}
	
	}

	for ( i = 0 ; i < col; i++){// 判断棋盘 列 有无三子相连

		if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]){

			return board[0][i];
		}

	}
	// 判断棋盘 对角线 有无三子相连

	if (board[0][0] != ' ' &&  board[0][0] == board[1][1] && board[1][1] == board[2][2]){ 
	
		return board[0][0];
	
	}
	if (board[0][2] != ' ' &&  board[0][2] == board[1][1] && board[1][1] == board[2][0]){
	
		return board[0][2];
	
	}

	// // 判断棋盘 有无 空格
 	for (i = 0; i <= row; i++){
	
		int j = 0;
		for (j = 0; j <= col; j++){
		
			if (board[i][j] == ' '){
			
				return 'N';
			
			}
		}
	
	}
	
	// 没人赢，且棋盘不为空，则为 平局！！！
	return 'E';

}

void computerMove(char board[][COL], int row, int col){

	
	while ( 1 ){

		int x = GetRandom(1,3);
		int y = GetRandom(1,3);

		if (board[x - 1][y - 1] == ' '){

			board[x - 1][y - 1] = COMPUT_STYLE;

			break;
		}
		else{

			printf("ERROR!!! TRY ENTER AGAIN!\n");

		}
	
	
	}


}

void Game(){

	printf("Game Start !\n");

	char board[ROW][COL];
	//memset(board," ",sizeof(board))  对一段空间以字节为单位初始化。将 board数组每个字节初始化为空格
	InitBoard(board,ROW,COL);
	ShowBoard(board, ROW, COL);
	srand((unsigned int)time(NULL)); // 生成随机数种子
	char result = 0;
	while (1){
	
		playerMove(board, ROW,  COL);
		ShowBoard(board, ROW, COL);
	    result = Judge(board, ROW, COL);
		
		if (result != 'N'){
		
			break;
		}
			system("CLS");
		computerMove(board, ROW, COL);
		ShowBoard(board, ROW, COL);
		result = Judge(board, ROW, COL);
		if (result != 'N'){

			break;
		}

	
	}
	switch (result){
	case'X':
		printf("玩家赢！！！\n");
		break;
	case'O':
		printf("电脑赢！！！\n");
		break;
	case'E':
		printf("平局！！！\n");
		break;
	default:
		printf("BUG? \n");
		break;

	}


}

#include"chess.h"

int main( )
{
	int select = 0;
	int quit = 0;
	while (!quit){
	

		ShowMU();
		scanf("%d",&select);
		switch ( select )
		{
		case 1:
			Game();
			break;
		case 2:
			printf("SEE YOU LALA\n");
			quit = !quit;
			break;
		default:
			printf("YOUR ENTER IS ERROR ! PLEASE SLECT AGAIN !\n");
			
		}
	}
	system("pause");
	return 0;

}
