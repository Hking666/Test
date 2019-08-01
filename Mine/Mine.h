#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define ROW 7
#define COL 7
#define mine  4 * (ROW - 2)*(COL - 2) / 10//埋雷个数，控制比列

void SetMine(char mine_board[ROW][COL]);//埋雷函数
void CountMine(char mine_board[ROW][COL]);//给安全位置标数字
void Show(char show_board[ROW][COL]);//打印函数
void Expand(char Tmine_board[ROW][COL], char show_board[ROW][COL], int x, int y);//把选中位置挨着的安全区域标识出来，在showboard上显示出来
int Judge(char show_board[ROW][COL]);//判断是否赢了
void PlayGame(char mine_board[ROW][COL], char show_board[ROW][COL]);
void play();