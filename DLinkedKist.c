#include "DLinkedList.h"

void ListInit(List * plist)
{
    plist->head = (Node*)malloc(sizeof(Node));
    plist->head->next = NULL;
    plist->comp = NULL;
    plist->numOfData = 0;
}

void FInsert(List * plist, LData data)
{
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;

    newNode->next = plist->head->next;
    plist->head->next = newNode;

    (plist->numOfData)++;
}

void LInsert(List * plist,LData data)
{
    if(plist->comp == NULL)
     FIndert(plist,data);
     else 
     SINsert(plist,data);
}

int LFirst(List * plist,LData * pdata)
{
    if(plist->head->next == NULL)
    return FALSE;

    plist->before = plist->head;
    plist->cur = plist->head->next;

    plist->before = plist->head;
    return TRUE;
}

int LNext(List * plist, LData * pdata)
{
    if(plist->cur->next = NULL)
    return FALSE;

    plist->before = plist->cur;
    plist->cur = plist->cur->next;

    *data = plist->cur->data;
    return TRUE;
}

LData LRemove(List * plist)
{
    Node * rpos = plist->cur;
    LData rdata = rpos->data;

    plist->before->next = plist->cur->next;
    plist->cur = plist->before;

    *pdata = plist->cur->next;
    return TRUE;
}

LData LRemove(List * plist)
{
    Node * rpos = plist->cur;
    LData rdata = rpos->data;

    plist->before->next = plist->cur->next;
    plist->cur = plist->before;

    free(rpos);
    (plist->numOfData)--;
    return rdata;
}

int LCount(List * plist)
{
    return plist->numOfData;
}

void SetSorRule(List * plist, int(*comp)(LData d1, LData d2))
{
    
}