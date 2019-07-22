#pragma once

#include<stdio.h>
#include<windows.h>
#include<assert.h>
#pragma warning (disable:4996)

typedef int SLTDataType;

typedef struct SListNode  // 定义的不是整个链表，而是一个节点
{
	SLTDataType data; // 数据域
	struct SListNode* next; // 指针域

}SListNode;

typedef struct SList   // 定义指向第一个节点的指针--头指针
{
	SListNode* head;

}SList;


void SListInit(SList * plist); // 链表初始化
void SListDestory(SList * plist); // 销毁链表
static SListNode * BuySListNode(SList *plist); //创建节点
void SListPushFront(SList *plist, SLTDataType data); // 头插
void SListPopFront(SList *plist); // 头删
SListNode* SListFind(SList *plist, SLTDataType data); // 查找结点数据
void SListInsertAfter(SListNode *pos, SLTDataType data); // 在pos 位置后面插入节点
void SListEraserAfter(SListNode *pos); // 删除在pos 位置后面节点
void SListRemove(SList *plist, SLTDataType data); // 删除第一个值为data的节点
void SListPrint(SList* psl); // 打印节点数据
void  SListReverse(SList* psl); // 链表逆置
