#include"SLTDataType.h"

void SListInit(SList * plist) // �����ʼ��
{
	assert(plist);
	plist->head = (SListNode *)malloc(sizeof(SListNode)); // ͷָ��ָ��SListNode
	if (plist != NULL)
	{
	 
		plist->head = NULL;
	
	}
	else
	{
		printf("�ռ�����ʧ�ܣ�\n");
	}
	
}


void SListDestory(SList * plist) // ��������
{
	assert(plist);
	SList * p = plist->head;
	while (plist->head != NULL)
	{
		plist->head = plist->head->next;
		free(p);
		p = plist->head;
	}
	plist->head = NULL;


}


static SListNode * BuySListNode(SLTDataType data) //�����ڵ�
{
	SListNode * ptr = (SListNode *)malloc(sizeof(SListNode));
	if (ptr == NULL)
	{
		printf("�����ڵ�ʧ�ܣ�\n");
		return NULL;
	}
	ptr->data = data;
	ptr->next = NULL;

	return ptr;

}


void SListPushFront(SList *plist, SLTDataType data)// ͷ��
{
	assert(plist);
	SListNode *node =  BuySListNode( data);
	if (node != NULL)
	{
		node->next = plist->head;
		plist->head = node;
	}
	

}


void SListPopFront(SList *plist) // ͷɾ
{
	assert(plist);
	if (plist->head != NULL)
	{
		SList *ptr = plist->head;
		plist->head = plist->head->next;
		free(ptr);
		ptr = NULL;
	}

}

SListNode* SListFind(SList *plist, SLTDataType data) // ���ҽ��
{
	assert(plist);
	SListNode *ptr = plist->head;    // ����ָ��ڵ��ָ��
	for (ptr; ptr ;ptr= ptr->next)
	{
		if (ptr->data == data)
		{
			return ptr;
		}
	
	}
	return NULL;
}


void SListInsertAfter(SListNode *pos, SLTDataType data)// ��pos λ�ú������ڵ�
{
	assert(pos);
	SListNode *ptr =  BuySListNode( data);
	if (ptr != NULL)
	{
		ptr->next = pos->next;
		pos->next = ptr;
	}


}

void SListEraserAfter(SListNode *pos) // ɾ����pos λ�ú���ڵ�
{
	assert(pos);
	SListNode * ptr = pos->next;
	pos->next = ptr->next;
	free(ptr);
	ptr = NULL;

}


void SListRemove(SList *plist, SLTDataType data) // ɾ����һ��ֵΪdata�Ľڵ�
{ 
	assert(plist);
	int flag = 0;
	SListNode* src = plist->head;
	SListNode* ptr = src->next;
	if (plist->head != NULL)
	{
		
			if (src->data == data)	
			{	
				SListPopFront(plist);
				flag = 1;
			}
			else
			{
			
				for (ptr; ptr; ptr = ptr->next)
				{
					if (ptr->data == data)
					{
						flag = 1;
						src->next = ptr->next;
						free(ptr);
						ptr = NULL;
						break;
					}

			
				}
				
			
			}
			
			if ( 0 == flag )
			{
				printf("�ýڵ㲻����!\n");
			}
				
			
			

		

	}

   

}


void SListPrint(SList* psl)// �޸ĸýڵ����� // �޸ĸýڵ�����
{
	assert(psl);
	SListNode * ptr = psl->head;
	if (ptr != NULL)
	{
		for (ptr; ptr; ptr = ptr->next)
		{
			printf("->%d", ptr->data);
		}
	
		printf("\n");
	}


}

void  SListReverse(SList* psl) // ��������
{

	SListNode * ptr = psl->head;
	SListNode * src = ptr->next;
	if (psl->head != NULL)
	{
		while (src != NULL)
		{
		    ptr->next =  src->next;
			SListPushFront(psl, src->data);
			src = ptr->next;
		}

	
	}
	

}