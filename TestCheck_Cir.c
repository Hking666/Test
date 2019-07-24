bool check_cir_fun_2(LinkList pNode) {
	Node *pn1, *pn2;
	pn1 = pNode;
	pn2 = pNode;

	while (pn1->next && pn2->next)
	{
		pn1 = pn1->next;

		if (pn2->next->next)
			pn2 = pn2->next->next;
		else
			pn2 = pn2->next;

		if (pn1 == pn2)
			return true;

	}


	return false;
}

void randomCir(LinkList *pNode, int i) {
	Node * pn = (*pNode)->next;
	srand((unsigned)time(NULL));//置随机数种子

	int k = rand() % i;//在 0-i内随机找一个位置
	int n = 0;
	while (pn->next && n<k)
	{
		n++;
		pn = pn->next;
	}

	pn->next = (*pNode)->next->next;//随机一节点与第二个节点接上，形成闭合环路
}

void randomNode(LinkList *pNode, int i)
{
	srand((unsigned)time(NULL));//置随机数种子
	for (int k = 0; k<i; k++)
		addNode(*pNode, rand() % i);
}

//用头插法
void addNode(LinkList linkList, int id)
{
	Node * n = (Node *)malloc(sizeof(Node));
	n->id = id;
	n->next = linkList->next;
	linkList->next = n;
}
//链表的初始化操作
void initLinkList(Node ** linkList)
{
	(*linkList) = (Node *)malloc(sizeof(Node));
	(*linkList)->next = NULL;
}
