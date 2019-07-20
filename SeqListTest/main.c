#include"SeqList.h"
//void SeqListInit(pSeqList psl);//初始化
//void SeqListDestory(pSeqList sql);// 销毁
//void checkCapacity(pSeqList psl); // 顺序表的扩容
//void SeqListPushFront(pSeqList psl, SLDataType data); //头插
//void SeqListPushBack(pSeqList psl, SLDataType Data);//尾插
//void SeqListPopBack(pSeqList psl); // 头删
//void SeqListPopBack(pSeqList psl); // 尾删
//int SeqListFind(pSeqList sql, SLDataType x); // 查找
//
//void SeqListInsert(pSeqList psl, int pos, SLDataType data);// 向pos位置插入data
//void SeqListErase(SeqList*psl, int pos); // 删除pos位置上的元素 
//void SeqListRemove(pSeqList psl, SLDataType data); // 删除顺序表值为data的节点
//void SeqListModify(pSeqList psl, int pos, SLDataType data);  // 修改pos位置上数据为data
//void SeqListPrint(pSeqList psl);  // 打印顺序表
//void SeqListBubbleSort(pSeqList psl); // 顺序表冒泡排序
int main()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushFront(&s, 5);
	SeqListPushFront(&s, 4);
	SeqListPushFront(&s, 3);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 7);
	SeqListPushBack(&s, 8);
	SeqListPushFront(&s, 2);
	SeqListPrint(&s);

	SeqListPopBack(&s);
	SeqListPrint(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);
	int ret = SeqListFind(&s, 5);
	if (ret != -1)
	{
		printf("该数在 %d 节点\n", ret);
	}
	else
	{

		printf("该数不存在！！\n");
	}
	
	SeqListInsert(&s, 3,10); 
	SeqListPrint(&s);
	SeqListErase(&s, 0);
	SeqListPrint(&s);

	SeqListModify(&s, 3, 8);
	SeqListPrint(&s);
	SeqListModify(&s, 8, 7);


	SeqListBubbleSort(&s);
	SeqListPrint(&s);
	system("pause"); 
	return 0;
}