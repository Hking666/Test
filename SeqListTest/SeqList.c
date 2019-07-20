#include"SeqList.h"


// 初始化
void SeqListInit(pSeqList psl)
{
	assert(psl);  // psl ！= NULL 继续执行 
	psl->array = (SLDataType*)malloc(sizeof(SLDataType)*LIST_SIZE);
		
		if (NULL == psl->array)  // 内存声请失败
		{
			printf("申请内存空间失败！\n");
			return -1;
		}
		psl->size = 0;
		psl->capacity = LIST_SIZE;

}


// 销毁
void SeqListDestory(pSeqList sql)
{
	assert(sql);
	sql->capacity = 0;
	sql->size = 0;
	free(sql->array);// 一旦我们使用完毕堆上内存一定要归还给操作系统，否则会出现内存泄漏的问题
	sql->array = NULL;    //free掉这段空间之后arr变成了一个野指针，为此我们最好避免
}

//对顺序表进行扩容
void checkCapacity(pSeqList psl)
{
	assert(psl); //判空
	if (psl->size < psl->array)
	{
		return 0;
	}

	//当空间不足时我们就将空间扩充增加 ADD_SIZE 
	SLDataType *newPsl = (SLDataType*)malloc(sizeof(SLDataType)*(psl->capacity + ADD_SIZE));
	assert(newPsl); // 判断申请空间是否为空
	//当新的大空间申请成功之后就需要将原来的数据都搬移到新空间中
	int  i = 0;
	for (i; i < psl->size; i++) 
	{
		newPsl[i] = psl->array[i];
	}

	// 原来psl->array指向的空间已经无用，需要通过手动释放还给空间。
	free(psl->array);

	//重新让psl->arry 指向 新开辟的空间
	psl->array = newPsl; 
}

 //尾插
void SeqListPushBack(pSeqList psl, SLDataType data)
{
	assert(psl);
	checkCapacity;  // 判断空间是否足够，不够进行扩容，足够直接返回

	psl->array[psl->size] = data;
	psl->size++;

}

// 头插
void SeqListPushFront(pSeqList psl,SLDataType data)
{
	assert(psl);
	checkCapacity(psl);  // 判断空间是否足够，不够进行扩容，足够直接返回
	int i = psl->size;
	for (i; i > 0;i--)
	{
		psl->array[i] = psl->array[i- 1];// 从后往前，每个数挪一位
	}

	psl->array[i] = data;
	psl->size++;
}

// 尾删
void SeqListPopBack(pSeqList psl )  
{
	assert(psl);
	if (0 == psl->size) // 如果有效数据为0，则直接退出
	{
		return -1;
	}
	psl->size--;

}

// 头删
void SeqListPopFront(pSeqList psl)
{
	assert(psl);
	if (0 == psl->size) // 如果有效数据为0，则直接退出
	{
		return -1;
	}
	int i = 0;
	for (i; i <psl->size-1; i++) 
	{
		psl->array[i] = psl->array[i+1];// 从前往后，每个数挪一位
	}
	
	psl->size--;
}

void SeqListInsert(pSeqList psl, int pos, SLDataType data)// 向pos位置插入data
{
	assert(psl);
	if (pos >= 0 && pos <psl->size){

		int i = psl->size;
			for (i; i > pos;i--)
			{
				psl->array[i] = psl->array[i - 1];
			}

		psl->array[i] = data;
		psl->size++;

	}
	else
	{
		printf("插入错误！！\n");
	}
	
}

// 查找
int SeqListFind(pSeqList psl, SLDataType data)
{
	assert(psl);
	int i = 0;
	for (i; i < psl->size; i++)
	{
		if (psl->array[i] == data)
		{
			return i;
		}
	}
	
	return -1;

}


void SeqListErase(SeqList*psl, int pos) // 删除pos位置上的元素
{
	assert(psl);
	if (pos >= 0 && pos <psl->size){

		int i = pos;
		for (i; i < psl->size-1; i++)
		{
			psl->array[i] = psl->array[i + 1];
		}

		psl->size--;

	}
	else
	{
		printf("删除位置错误！！\n");
	}


}

// 移除表中数据为data的元素
void SeqListRemove(pSeqList psl , SLDataType data)
{
	assert(psl);
	int i = 0;
	int count = 0;
	int flag = 0;
	for (i; i < psl->size; i++)
	{
		if (psl->array[i] == data)
		{
			count++;
			flag = 1;
		}
		else
		{
			psl->array[i - count] = psl->array[i];  // 用后面不相同的元素替换掉与data相同的元素
		}

	}

	if (0 == flag)
	{
		printf("该元素不存在\n");
	}
	psl->size -= count;  // 减去被移除的元素
}


void SeqListModify(pSeqList psl, int pos, SLDataType data)  // 修改
{
	assert(psl);
	if (pos >= 0 && pos <psl->size){

		psl->array[pos] = data;

	}
	else
	{
		printf("修改位置错误！！\n");
	}

}
 
void SeqListPrint(pSeqList psl)  // 打印顺序表
{ 
	assert(psl);
	int i = 0;
	for (i; i < psl->size;i++)
	{
		printf("->%d", psl->array[i]);
	}

	printf("\n");
}


void SeqListBubbleSort(pSeqList psl) // 顺序表冒泡排序
{
	assert(psl);
	int i = 0;
	int j = 0;
	for (i; i < psl->size - 1;i++)
	{
		for (j; j < psl->size - 1 - i;j++)
		{
			if (psl->array[j]>psl->array[j + 1])
			{
			
				psl->array[j] ^= psl->array[j + 1];
				psl->array[j+ 1] ^= psl->array[j ];
				psl->array[j] ^= psl->array[j + 1];
			}
				

		}


	}

}

