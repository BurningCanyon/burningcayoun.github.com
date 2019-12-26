#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE 1  //참을 표현하기위한 메크로 정의
#define FALSE 0 //거짓을 표현하기위한 메크로 정의

#define LIST_LEN 100
typedef int LData   //LData에 대한 typedef 선언

typedef struct __ArrayList
{
    LData arr[LIST_LEN];    //리스트의 저장소인 배열
    int numOfData;  //저장된 데이터의 수
    int curPosition;    //데이터 참조위치를 기록
} ArrayList;

typedef ArrayList List;

void Listinit(List * plist);    //초기화
void LInsert(List * plist, LData data); //데이터 저장

int LFirst(List * plist, LData * pdata);   //첫 데이터 참조
int LNext(List * plist, LData * pdata);     //두 번째 이후 데이터 참조

LData LRemove(List * plist);    //참조한데이터 삭제
int LCount(List * plist);   //저장된 데이터의 수 반환

#endif