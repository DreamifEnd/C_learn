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

//增减删补
//初始化
void SeqListInit(SL* ps);

//尾增
void SeqListPushBack(SL* ps, SLDataSize x);
//头增
void SeqListPushFront(SL* ps, SLDataSize x);
//尾删
void SeqListPopBack(SL* ps);
//头删
void SeqListPopFront(SL* ps);
