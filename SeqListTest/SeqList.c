#include"SeqList.h"


// ��ʼ��
void SeqListInit(pSeqList psl)
{
	assert(psl);  // psl ��= NULL ����ִ�� 
	psl->array = (SLDataType*)malloc(sizeof(SLDataType)*LIST_SIZE);
		
		if (NULL == psl->array)  // �ڴ�����ʧ��
		{
			printf("�����ڴ�ռ�ʧ�ܣ�\n");
			return -1;
		}
		psl->size = 0;
		psl->capacity = LIST_SIZE;

}


// ����
void SeqListDestory(pSeqList sql)
{
	assert(sql);
	sql->capacity = 0;
	sql->size = 0;
	free(sql->array);// һ������ʹ����϶����ڴ�һ��Ҫ�黹������ϵͳ�����������ڴ�й©������
	sql->array = NULL;    //free����οռ�֮��arr�����һ��Ұָ�룬Ϊ��������ñ���
}

//��˳����������
void checkCapacity(pSeqList psl)
{
	assert(psl); //�п�
	if (psl->size < psl->array)
	{
		return 0;
	}

	//���ռ䲻��ʱ���Ǿͽ��ռ��������� ADD_SIZE 
	SLDataType *newPsl = (SLDataType*)malloc(sizeof(SLDataType)*(psl->capacity + ADD_SIZE));
	assert(newPsl); // �ж�����ռ��Ƿ�Ϊ��
	//���µĴ�ռ�����ɹ�֮�����Ҫ��ԭ�������ݶ����Ƶ��¿ռ���
	int  i = 0;
	for (i; i < psl->size; i++) 
	{
		newPsl[i] = psl->array[i];
	}

	// ԭ��psl->arrayָ��Ŀռ��Ѿ����ã���Ҫͨ���ֶ��ͷŻ����ռ䡣
	free(psl->array);

	//������psl->arry ָ�� �¿��ٵĿռ�
	psl->array = newPsl; 
}

 //β��
void SeqListPushBack(pSeqList psl, SLDataType data)
{
	assert(psl);
	checkCapacity;  // �жϿռ��Ƿ��㹻�������������ݣ��㹻ֱ�ӷ���

	psl->array[psl->size] = data;
	psl->size++;

}

// ͷ��
void SeqListPushFront(pSeqList psl,SLDataType data)
{
	assert(psl);
	checkCapacity(psl);  // �жϿռ��Ƿ��㹻�������������ݣ��㹻ֱ�ӷ���
	int i = psl->size;
	for (i; i > 0;i--)
	{
		psl->array[i] = psl->array[i- 1];// �Ӻ���ǰ��ÿ����Ųһλ
	}

	psl->array[i] = data;
	psl->size++;
}

// βɾ
void SeqListPopBack(pSeqList psl )  
{
	assert(psl);
	if (0 == psl->size) // �����Ч����Ϊ0����ֱ���˳�
	{
		return -1;
	}
	psl->size--;

}

// ͷɾ
void SeqListPopFront(pSeqList psl)
{
	assert(psl);
	if (0 == psl->size) // �����Ч����Ϊ0����ֱ���˳�
	{
		return -1;
	}
	int i = 0;
	for (i; i <psl->size-1; i++) 
	{
		psl->array[i] = psl->array[i+1];// ��ǰ����ÿ����Ųһλ
	}
	
	psl->size--;
}

void SeqListInsert(pSeqList psl, int pos, SLDataType data)// ��posλ�ò���data
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
		printf("������󣡣�\n");
	}
	
}

// ����
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


void SeqListErase(SeqList*psl, int pos) // ɾ��posλ���ϵ�Ԫ��
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
		printf("ɾ��λ�ô��󣡣�\n");
	}


}

// �Ƴ���������Ϊdata��Ԫ��
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
			psl->array[i - count] = psl->array[i];  // �ú��治��ͬ��Ԫ���滻����data��ͬ��Ԫ��
		}

	}

	if (0 == flag)
	{
		printf("��Ԫ�ز�����\n");
	}
	psl->size -= count;  // ��ȥ���Ƴ���Ԫ��
}


void SeqListModify(pSeqList psl, int pos, SLDataType data)  // �޸�
{
	assert(psl);
	if (pos >= 0 && pos <psl->size){

		psl->array[pos] = data;

	}
	else
	{
		printf("�޸�λ�ô��󣡣�\n");
	}

}
 
void SeqListPrint(pSeqList psl)  // ��ӡ˳���
{ 
	assert(psl);
	int i = 0;
	for (i; i < psl->size;i++)
	{
		printf("->%d", psl->array[i]);
	}

	printf("\n");
}


void SeqListBubbleSort(pSeqList psl) // ˳���ð������
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

