#pragma once
#define MAX_SIZE 10 
#include<string.h>
typedef int SLDataType;
typedef struct SeqList
{
    SLDataType a[MAX_SIZE];
    int size;
}SL;

//增删查改——接口函数
void SeqListInit(SL s1);
