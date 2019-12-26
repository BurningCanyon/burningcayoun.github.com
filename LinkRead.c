typedef struct _node
{
    int data;   //데이터를 담을 공간
    struct _node * next;    //연결에 사용될 도구
} Node;

int main(void)
{
   Node * head = NULL;  //리스트의 머리를 가리키는 포인터 변수
   Node * tale = NULL;  //리스트의 꼬리를 가리키는 포인터 변수
   Node * cur = NULL;   //저장된 데이터의 조희에 사용되는 포인터 변수

   Node * newNode = NULL;
   int readData;

   //데이터를 입력받는 과정//
   while(1)
   {
       printf("자연수 입력:");
       scanf("%d",&readData);
       if(readData < 1)
       break;

       //노드의 추가과정
       newNode = (Node*)malloc(sizeof(Node));   //노드의 생성
       newNode->data = readData;    //노드에 데이터를 저장
       newNode->next = NULL;    //노드의  next를 NULL로 초기화

       if(head == NULL)
       {
           head = newNode;
       }
       else
       {
           tail->next = newNode;
       }
   }
   printf("\n");

   //입력받는 데이터의 출력과정//
   printf("입력받은 데이터의 전체출력");
   if(head == Null)
   {
       printf("저장된 자연수가 존재하지 않습니다. \n");
   }
   else
   {
       cur = head;
       printf("%d", cur->data); //첫번째 데이터 출력

       while(cur->next != NULL) //두번째이후 데이터 출력
       {
           cur = cur->next;
           printf("%d",cur->data);
       }
   }
   printf("\n\n");

   //메모리 해제과정//
   if(head == NULL)
   {
       return 0;    //해제할 노드가 존재하지 않는다.
   }
   else
   {
       Node * delNode = head;
       Node * delNextNode = head->next;

       printf("%d을(를) 시작합니다. \n", head->data);
       free(delNode);   //첫번째 노드 삭제
       
       while(delNextNode != NULL)
       {
           delNode = delNextNode;
           delNextNode = delNextNode->next;

           printf("%d을(를) 삭제합니다 \n", delNode->data);
           free(delNode);

       }
   }

   return 0;
}