#include"SLTDataType.h"

//void SListInit(SList * plist); // �����ʼ��
//void SListDestory(SList * plist); // ��������
//static SListNode * BuySListNode(SList *plist); //�����ڵ�
//void SListPushFront(SList *plist, SLTDataType data); // ͷ��
//void SListPopFront(SList *plist); // ͷɾ
//SListNode* SListFind(SList *plist, SLTDataType data); // ���ҽ������
//void SListInsertAfter(SListNode *pos, SLTDataType data); // ��pos λ�ú������ڵ�
//void SListEraserAfter(SListNode *pos); // ɾ����pos λ�ú���ڵ�
//void SListRemove(SList *plist, SLTDataType data); // ɾ����һ��ֵΪdata�Ľڵ�
//void SListPrint(SList* psl); // ��ӡ�ڵ�����

int main()
{

	

    SList test ;
	
	SListInit(&test);
	SListPushFront(&test, 12); // ͷ��
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