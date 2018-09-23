#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#define MAXSIZE_LIST 100

typedef struct LNode *List;
struct LNode
{
    int Data[MAXSIZE_LIST];
    int Last;
};

List ListMakeEmpty();   //��ʼ��һ�������Ա�
int ListFindK(int K,List L);   //�����±�ΪK��Ԫ��
int ListFindX(int X,List L);   //����Ԫ��X���±�
void ListInsert(int X,int i,List L);   //��iǰ����һ����Ԫ��X
void ListDelete(int i,List L);   ////ɾ����i��Ԫ��
int ListLength(List L);   //�������Ա�ĳ���

#endif // LIST_H_INCLUDED
