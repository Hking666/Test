#include"SLTDataType.h"

void SListInit(SList * plist) // 链表初始化
{
	assert(plist);
	plist->head = (SListNode *)malloc(sizeof(SListNode)); // 头指针指向SListNode
	if (plist != NULL)
	{
	 
		plist->head = NULL;
	
	}
	else
	{
		printf("空间申请失败！\n");
	}
	
}


void SListDestory(SList * plist) // 销毁链表
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


static SListNode * BuySListNode(SLTDataType data) //创建节点
{
	SListNode * ptr = (SListNode *)malloc(sizeof(SListNode));
	if (ptr == NULL)
	{
		printf("创建节点失败！\n");
		return NULL;
	}
	ptr->data = data;
	ptr->next = NULL;

	return ptr;

}


void SListPushFront(SList *plist, SLTDataType data)// 头插
{
	assert(plist);
	SListNode *node =  BuySListNode( data);
	if (node != NULL)
	{
		node->next = plist->head;
		plist->head = node;
	}
	

}


void SListPopFront(SList *plist) // 头删
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

SListNode* SListFind(SList *plist, SLTDataType data) // 查找结点
{
	assert(plist);
	SListNode *ptr = plist->head;    // 定义指向节点的指针
	for (ptr; ptr ;ptr= ptr->next)
	{
		if (ptr->data == data)
		{
			return ptr;
		}
	
	}
	return NULL;
}


void SListInsertAfter(SListNode *pos, SLTDataType data)// 在pos 位置后面插入节点
{
	assert(pos);
	SListNode *ptr =  BuySListNode( data);
	if (ptr != NULL)
	{
		ptr->next = pos->next;
		pos->next = ptr;
	}


}

void SListEraserAfter(SListNode *pos) // 删除在pos 位置后面节点
{
	assert(pos);
	SListNode * ptr = pos->next;
	pos->next = ptr->next;
	free(ptr);
	ptr = NULL;

}


void SListRemove(SList *plist, SLTDataType data) // 删除第一个值为data的节点
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
				printf("该节点不存在!\n");
			}
				
			
			

		

	}

   

}


void SListPrint(SList* psl)// 修改该节点数据 // 修改该节点数据
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

void  SListReverse(SList* psl) // 链表逆置
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