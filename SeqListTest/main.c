#include"SeqList.h"
//void SeqListInit(pSeqList psl);//��ʼ��
//void SeqListDestory(pSeqList sql);// ����
//void checkCapacity(pSeqList psl); // ˳��������
//void SeqListPushFront(pSeqList psl, SLDataType data); //ͷ��
//void SeqListPushBack(pSeqList psl, SLDataType Data);//β��
//void SeqListPopBack(pSeqList psl); // ͷɾ
//void SeqListPopBack(pSeqList psl); // βɾ
//int SeqListFind(pSeqList sql, SLDataType x); // ����
//
//void SeqListInsert(pSeqList psl, int pos, SLDataType data);// ��posλ�ò���data
//void SeqListErase(SeqList*psl, int pos); // ɾ��posλ���ϵ�Ԫ�� 
//void SeqListRemove(pSeqList psl, SLDataType data); // ɾ��˳���ֵΪdata�Ľڵ�
//void SeqListModify(pSeqList psl, int pos, SLDataType data);  // �޸�posλ��������Ϊdata
//void SeqListPrint(pSeqList psl);  // ��ӡ˳���
//void SeqListBubbleSort(pSeqList psl); // ˳���ð������
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
		printf("������ %d �ڵ�\n", ret);
	}
	else
	{

		printf("���������ڣ���\n");
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