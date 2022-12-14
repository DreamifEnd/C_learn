#include "SeqList.h"
void SeqListInit(SL s1)
{
    memset(s1.a,0,sizeof(SLDataType)*MAX_SIZE);
    s1.size = 0;
}