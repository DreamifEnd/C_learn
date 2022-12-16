#include "SeqList.h"

void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->Size = 0;
	ps->mapacity = 0;
}
//检查内存，扩内存
void SeqListCapacityCheck(SL* ps)
{
	if (ps->Size == ps->mapacity)//满了,扩容
	{
		int newmapacity = ps->mapacity == 0 ? 4 : ps->mapacity * 2;
		SLDataSize* tmp = (SLDataSize*)realloc(ps->a, newmapacity * sizeof(SLDataSize));
		if (tmp == NULL)
		{
			printf("Realloc Fail");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->mapacity = newmapacity;
		}
	}
}

//尾插
void SeqListPushBack(SL* ps, SLDataSize x)
{
	SeqListCapacityCheck(ps);
	ps->a[ps->Size] = x;
	ps->Size++;
}
//头插
void SeqListPushFront(SL* ps, SLDataSize x)
{
	int end = ps->Size - 1;
	while (end >= 0)
	{
		ps->a[end+1] = ps->a[end];
		end--;
	}
	*(ps->a) = x;
	ps->Size++;
}
//尾删
void SeqListPopBack(SL* ps)
{
	assert(ps->Size > 0);
	ps->Size--;
}
//头删
void SeqListPopFront(SL* ps)
{
	assert(ps->Size > 0);
	int start = 0;
	while (start < ps->Size - 1)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->Size--;

}
//指定增
void SeqListAssignPush(SL* ps,int x,int y)
{
	SeqListCapacityCheck(ps);
	int end = ps->Size - 1;
	while (end >= x -1)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[x-1] = y;
	ps->Size++;
}
//指定删
void SeqListAssignFront(SL* ps,int x)
{
	SeqListCapacityCheck(ps);
	while (x - 1 <= ps->Size - 1)
	{
		ps->a[x - 1] = ps->a[x];
		x++;
	}
	ps->Size--;

}
//替换
void SeqListCharge(SL* ps, int x,int y)
{
	for (int i = 0; i < ps->Size; i++)
	{
		if (ps->a[i] == x)
			ps->a[i] = y;
	}
}
//打印
void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->Size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}