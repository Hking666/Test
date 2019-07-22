#pragma once

#include<stdio.h>
#include<windows.h>
#include<assert.h>
#pragma warning (disable:4996)

typedef int SLTDataType;

typedef struct SListNode  // ����Ĳ���������������һ���ڵ�
{
	SLTDataType data; // ������
	struct SListNode* next; // ָ����

}SListNode;

typedef struct SList   // ����ָ���һ���ڵ��ָ��--ͷָ��
{
	SListNode* head;

}SList;


void SListInit(SList * plist); // �����ʼ��
void SListDestory(SList * plist); // ��������
static SListNode * BuySListNode(SList *plist); //�����ڵ�
void SListPushFront(SList *plist, SLTDataType data); // ͷ��
void SListPopFront(SList *plist); // ͷɾ
SListNode* SListFind(SList *plist, SLTDataType data); // ���ҽ������
void SListInsertAfter(SListNode *pos, SLTDataType data); // ��pos λ�ú������ڵ�
void SListEraserAfter(SListNode *pos); // ɾ����pos λ�ú���ڵ�
void SListRemove(SList *plist, SLTDataType data); // ɾ����һ��ֵΪdata�Ľڵ�
void SListPrint(SList* psl); // ��ӡ�ڵ�����
void  SListReverse(SList* psl); // ��������
