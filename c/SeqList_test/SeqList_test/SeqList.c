#include "SeqList.h"

void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->Size = 0;
	ps->mapacity = 0;
}


//β��
void SeqListPushBack(SL* ps, SLDataSize x)
{
	if (ps->Size == ps->mapacity)//����,����
	{
		SLDataSize* tmp = (SLDataSize*)realloc(ps->a, ps->mapacity * 2 * sizeof(SLDataSize));
		if (tmp == NULL)
		{
			return 0;
		}
		 
}
//ͷ��
void SeqListPushFront(SL* ps, SLDataSize x);
{
	
}
//βɾ
void SeqListPopBack(SL* ps);
{

}
//ͷɾ
void SeqListPopFront(SL* ps);
{

}