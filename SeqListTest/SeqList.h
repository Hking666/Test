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



void SeqListInit(pSeqList psl);//初始化
void SeqListDestory(pSeqList sql);// 销毁
void checkCapacity(pSeqList psl); // 顺序表的扩容
void SeqListPushFront(pSeqList psl, SLDataType data); //头插
void SeqListPushBack(pSeqList psl, SLDataType Data);//尾插
void SeqListPopBack(pSeqList psl); // 头删
void SeqListPopBack(pSeqList psl); // 尾删
int SeqListFind(pSeqList sql, SLDataType x); // 查找

void SeqListInsert(pSeqList psl, int pos, SLDataType data);// 向pos位置插入data
void SeqListErase(SeqList*psl, int pos); // 删除pos位置上的元素 
void SeqListRemove(pSeqList psl, SLDataType data); // 删除顺序表值为data的节点
void SeqListModify(pSeqList psl, int pos, SLDataType data);  // 修改pos位置上数据为data
void SeqListPrint(pSeqList psl);  // 打印顺序表
void SeqListBubbleSort(pSeqList psl); // 顺序表冒泡排序

#endif