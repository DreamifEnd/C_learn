#pragma once
#define MAX_SIZE 10
#include<string.h>
#include<stdio.h>
typedef int SLDataSize;
typedef struct SeqList
{
	SLDataSize* a;
	int Size;
	int mapacity;
}SL;

//����ɾ��
//��ʼ��
void SeqListInit(SL* ps);

//β��
void SeqListPushBack(SL* ps, SLDataSize x);
//ͷ��
void SeqListPushFront(SL* ps, SLDataSize x);
//βɾ
void SeqListPopBack(SL* ps);
//ͷɾ
void SeqListPopFront(SL* ps);
