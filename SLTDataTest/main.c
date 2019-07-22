#include"SLTDataType.h"

//void SListInit(SList * plist); // 链表初始化
//void SListDestory(SList * plist); // 销毁链表
//static SListNode * BuySListNode(SList *plist); //创建节点
//void SListPushFront(SList *plist, SLTDataType data); // 头插
//void SListPopFront(SList *plist); // 头删
//SListNode* SListFind(SList *plist, SLTDataType data); // 查找结点数据
//void SListInsertAfter(SListNode *pos, SLTDataType data); // 在pos 位置后面插入节点
//void SListEraserAfter(SListNode *pos); // 删除在pos 位置后面节点
//void SListRemove(SList *plist, SLTDataType data); // 删除第一个值为data的节点
//void SListPrint(SList* psl); // 打印节点数据

int main()
{

	

    SList test ;
	
	SListInit(&test);
	SListPushFront(&test, 12); // 头插
	SListPushFront(&test, 82);
	SListPushFront(&test, 48);
	SListPushFront(&test, 85);
	SListPushFront(&test, 28);
	SListPushFront(&test, 48);
	SListPushFront(&test, 48);
	SListPushFront(&test, 18);
	SListPrint(&test);

	SListPopFront(&test);
	SListPopFront(&test);
	SListPopFront(&test);
	SListPrint(&test);

	SListInsertAfter(test.head , 4);
	SListInsertAfter(test.head, 54);
	SListInsertAfter(test.head, 46);
	SListPrint(&test);


	SListEraserAfter(test.head);
	SListEraserAfter(test.head->next->next);
	SListPrint(&test);

	SListRemove(&test,46);
	SListRemove(&test, 28);
	SListRemove(&test, 4615);
	SListRemove(&test, 415);
	SListRemove(&test, 4215);
	SListPrint(&test);

	SListReverse(&test);
	SListPrint(&test);

	system("pause");
}