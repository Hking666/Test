#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define ROW 7
#define COL 7
#define mine  4 * (ROW - 2)*(COL - 2) / 10//���׸��������Ʊ���

void SetMine(char mine_board[ROW][COL]);//���׺���
void CountMine(char mine_board[ROW][COL]);//����ȫλ�ñ�����
void Show(char show_board[ROW][COL]);//��ӡ����
void Expand(char Tmine_board[ROW][COL], char show_board[ROW][COL], int x, int y);//��ѡ��λ�ð��ŵİ�ȫ�����ʶ��������showboard����ʾ����
int Judge(char show_board[ROW][COL]);//�ж��Ƿ�Ӯ��
void PlayGame(char mine_board[ROW][COL], char show_board[ROW][COL]);
void play();