#include"xiaohuihui.h"

Stack CreateStack()   //������ջ
{
    Stack S;
    S=(Stack)malloc(sizeof(struct SNode));
    S->Next=NULL;

    return S;
}

int IsEmpty(Stack S)   //�ж϶�ջS�Ƿ�Ϊ��
{
    return (S->Next==NULL) ;
}

void Push(Stack S,int item)   //��Ԫ��itemѹ���ջ
{
    Stack p;
    p=(Stack)malloc(sizeof(struct SNode));
    p->Data=item;
    p->Next=S->Next;
    S->Next=p;
}

int Pop(Stack S)   //��ջ��������ջ��Ԫ��
{
     Stack p;
     int Top=0;

     if(IsEmpty(S))
     {
         printf("��ջ��")��
         return NULL;
     }
     else
     {
         p=S->Next;
         S->Next=p->Next;
        Top=p->Data;
         free(p);
         return Top;
     }

}
