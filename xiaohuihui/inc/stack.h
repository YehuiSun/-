#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef struct SNode *Stack;
struct SNode
{
    int Data;
    Stack Next;
};


Stack CreateStack();   //������ջ
int IsEmpty(Stack S);   //�ж϶�ջS�Ƿ�Ϊ��

void Push(Stack S,int item);   //��Ԫ��itemѹ���ջ
int Pop(Stack S);   //��ջ��������ջ��Ԫ��


#endif // STACK_H_INCLUDED
