#include"Mine.h"

void SetMine(char mine_board[ROW][COL])//���׺���
{
	srand((unsigned long)time(NULL));
	int sum = mine;
	int x, y;
	while (sum)
	{
		x = rand() % (ROW - 2) + 1;
		y = rand() % (COL - 2) + 1;
		if (mine_board[x][y] == '0')
		{
			sum--;
			mine_board[x][y] = '*';
		}
	}
}
void CountMine(char mine_board[ROW][COL])//����ȫλ�ñ�����
{
	int i, j, p1, p2, sum;
	for (i = 1; i < ROW - 1; i++)
	{
		for (j = 1; j < COL - 1; j++)
		{
			sum = 0;
			if (mine_board[i][j] != '*')
			{
				for (p1 = i - 1; p1 <= i + 1; p1++)
				{
					for (p2 = j - 1; p2 <= j + 1; p2++)
					{
						if (mine_board[p1][p2] == '*')
							sum++;
					}
				}
				mine_board[i][j] = sum + '0';
			}
		}
	}
}
void Show(char show_board[ROW][COL])//��ӡ����
{
	int i, j;
	printf("    1   2   3   4   5   6   7   8   9   10\n");
	printf("--------------------------------------------\n");
	for (i = 1; i < ROW - 1; i++)
	{
		printf("%2d|", i);
		for (j = 1; j < COL - 1; j++)
		{
			printf(" %c |", show_board[i][j]);
		}
		printf("\n");
		printf("--------------------------------------------\n");
	}
}
void Expand(char Tmine_board[ROW][COL], char show_board[ROW][COL], int x, int y)//��ѡ��λ�ð��ŵİ�ȫ�����ʶ��������showboard����ʾ����
{
	if (x < 1 || x>ROW - 2 || y < 1 || y>COL - 2 || Tmine_board[x][y] == '*')
		return;
	else
	{
		show_board[x][y] = Tmine_board[x][y];
		Tmine_board[x][y] = '*';
	}
	Expand(Tmine_board, show_board, x + 1, y);
	Expand(Tmine_board, show_board, x - 1, y);
	Expand(Tmine_board, show_board, x, y + 1);
	Expand(Tmine_board, show_board, x, y - 1);
}
int Judge(char show_board[ROW][COL])//�ж��Ƿ�Ӯ��
{
	int sum = 0;
	for (int i = 1; i < ROW - 1; i++)
	{
		for (int j = 1; j < COL - 1; j++)
		{
			if (show_board[i][j] == '?')
			{
				sum++;
			}
		}
	}
	if (sum == mine)
		return 1;
	else
		return 0;
}
void PlayGame(char mine_board[ROW][COL], char show_board[ROW][COL])
{
	char Tmine_board[ROW][COL];//����һ������������һ�������飬��������ݹ麯��ʹ��
	memset(Tmine_board, '0', sizeof(Tmine_board));
	int i, j;
	for (i = 1; i < ROW - 1; i++)
	{
		for (j = 1; j < COL - 1; j++)
		{
			Tmine_board[i][j] = mine_board[i][j];
		}
	}
	int x, y, key = 1;
	while (key)
	{
		scanf("%d%d", &x, &y);
		if (mine_board[x][y] == '*')
		{
			if (key == 1)
			{
				printf("�˴����ף���������\n");
				Show(show_board);
				key++;
			}
			else
			{
				printf("��Ϸ����\n");
				Show(mine_board);
				key = 0;
			}
		}
		else
		{
			key++;
			Expand(Tmine_board, show_board, x, y);//��ѡ��λ�ð��ŵİ�ȫ�����ʶ��������showboard����ʾ����
			Show(show_board);
			if (Judge(show_board) == 1)//�ж��Ƿ�Ӯ��
			{
				key = 0;
				printf("��Ӯ��\n");
			}
		}
	}
}
void play()
{
	char mine_board[ROW][COL];
	char show_board[ROW][COL];
	memset(show_board, '?', sizeof(show_board));
	memset(mine_board, '0', sizeof(mine_board));
	SetMine(mine_board);//���׺���
	CountMine(mine_board);//����ȫλ�ñ�����
	Show(show_board);//��ӡ����
	PlayGame(mine_board, show_board);
}