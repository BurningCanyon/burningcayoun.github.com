//데이터 초기화
typedef struct -CLL
{
    Node * tail;
    Node * cur;
    Node * before;
    int numOfdata;
} Clist;

//노드 초기화
void LInser~(list * plist, Data data)
{
    Node * newNode = (Node*)malloc(sizeof(node));
    if(plist ->tail ==NULL)
    {
        plist->tail = newnode;
        newNode -> next = new Node;
    }
    else
    {
        newNode->next = plist -> tail->next;
        plist->tail->next = newNode;
        plist->tail = newNode;  //LInsertFront함수와의 유일한 차이점
    }
    (plist->numOData)++
}
//데이터 조회
int LFirst(List * plist, Data*pdata)
{
    if(plist->tail == NULL)             //저장된 노드가 없다면
    {
        return FALSE;
    }

    plist->before = plist -> tail;          //before가 꼬리를 가리키게 한다
    plist->cur = plist->cur->next;          //cur이 다음 노드를 가르키게 한다.

    *pdata  = plist->cur->data;             //cur이 가리키는 노드를 데이터 반환
    return TRUE;
}
//데이터 삭제
LData LRemove(List* plist)
{
    node * rpos = plist->cur;
    LData rdata = rpos->data;

    plist->before->next = plist->cur->next; //핵심연산1
    plist->cur = plist->before  //핵심연산2

    free(rpos);
    (plist->numOfData)--;
    return rdata;
}