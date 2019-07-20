#ifndef _SEQLIST_H
#define _SEQLIST_H

#include<stdio.h>
#include<windows.h>
#include<assert.h>
#pragma warning (disable:4996)
#define LIST_SIZE 100
#define ADD_SIZE  20
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType *array;
	int capacity;
	int size;
}SeqList, *pSeqList;



void SeqListInit(pSeqList psl);//��ʼ��
void SeqListDestory(pSeqList sql);// ����
void checkCapacity(pSeqList psl); // ˳��������
void SeqListPushFront(pSeqList psl, SLDataType data); //ͷ��
void SeqListPushBack(pSeqList psl, SLDataType Data);//β��
void SeqListPopBack(pSeqList psl); // ͷɾ
void SeqListPopBack(pSeqList psl); // βɾ
int SeqListFind(pSeqList sql, SLDataType x); // ����

void SeqListInsert(pSeqList psl, int pos, SLDataType data);// ��posλ�ò���data
void SeqListErase(SeqList*psl, int pos); // ɾ��posλ���ϵ�Ԫ�� 
void SeqListRemove(pSeqList psl, SLDataType data); // ɾ��˳���ֵΪdata�Ľڵ�
void SeqListModify(pSeqList psl, int pos, SLDataType data);  // �޸�posλ��������Ϊdata
void SeqListPrint(pSeqList psl);  // ��ӡ˳���
void SeqListBubbleSort(pSeqList psl); // ˳���ð������

#endif