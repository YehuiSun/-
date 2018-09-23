#include "xiaohuihui.h"

List ListMakeEmpty()   //��ʼ��һ����˳���
{
    List PtrL;   //����һ��˳���ָ��
    PtrL=(List)malloc(sizeof(struct LNode));   //�����ڴ�ռ�
    PtrL->Last=-1;   //��˳���Ϊ��ʱ��ĩλ��ַָΪ-1
    return PtrL;   //���ظ�˳����ָ��
}

int ListFindK(int K,List L)   //�����±�ΪK��Ԫ��
{
     return L->Data[K] ;
}

int ListFindX(int X,List L)   //����Ԫ��X���±�
{
    int i=0;   //����ѭ������
    while(i<=L->Last && L->Data[i]!=X)   //����Ԫ�ز������һ�������� ������Kʱ
        i++;
    if(i > L->Last)    return -1;
    else  return i;
}

void ListInsert(int X,int i,List L)   //��iǰ����һ����Ԫ��X
{
    int j=0;   //ѭ������

    if(L->Last == MAXSIZE_LIST)   //������
    {
        printf("˳�������");
        return;
    }

    if(i<0 || i>L->Last+2)   //�������ַ�ĺϷ���
    {
        printf("�����ַ���Ϸ�");
        return;
    }

    for(j=L->Last;j>i;j--)   //�ڳ�����ռ�
    {
        L->Data[j+1]= L->Data[j];
    }

     L->Data[i]=X;   //����Ԫ��X
     L->Last++;   //��β��ַ+1

     return;   //���ؿ�
}
void ListDelete(int i,List L)   //ɾ����i��Ԫ��
{
     int j=0;   //ѭ������

    if(i<0 || i>L->Last+1)   //�������ַ�ĺϷ���
    {
        printf("�����ַ���Ϸ�");
        return;
    }

    for(j=i;j<L->Last;j++)   //�ڳ�����ռ�
    {
        L->Data[j-1]= L->Data[j];
    }

    L->Last--;   //��β��ַ-1
    return;
}
int ListLength(List L)   //�������Ա�ĳ���
{
    return L->Last+1;
}
