#pragma once
#define MAX_SIZE 10
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
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
//��ӡ
void SeqListPrint(SL* ps);
//���ڴ�
void SeqListCapacityCheck(SL* ps);
//β��
void SeqListPushBack(SL* ps, SLDataSize x);
//ͷ��
void SeqListPushFront(SL* ps, SLDataSize x);
//βɾ
void SeqListPopBack(SL* ps);
//ͷɾ
void SeqListPopFront(SL* ps);
//ָ����
void SeqList
//ָ��ɾ