#include "SeqList.h"

void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->Size = 0;
	ps->mapacity = 0;
}


//尾增
void SeqListPushBack(SL* ps, SLDataSize x)
{
	if (ps->Size == ps->mapacity)//满了,扩容
	{
		SLDataSize* tmp = (SLDataSize*)realloc(ps->a, ps->mapacity * 2 * sizeof(SLDataSize));
		if (tmp == NULL)
		{
			return 0;
		}
		 
}
//头增
void SeqListPushFront(SL* ps, SLDataSize x);
{
	
}
//尾删
void SeqListPopBack(SL* ps);
{

}
//头删
void SeqListPopFront(SL* ps);
{

}