#include"xiaohuihui.h"

int LinkListLength(LinkList L)   //�������
{
    LinkList p=L;   //����ָ��
    int j=0;   //ѭ������
    while(p)   //��������
    {
        p=p->Next;
        j++;
    }
    return j;    //���ر�
}

LinkList LinkListFindK(int K,LinkList L)   //��������ĵ�K��Ԫ��
{
     LinkList p=L;   //����ָ��
     int i=0;
     while(p!=NULL && i<K)   //���Pָ�벻Ϊ�գ����һ�û�з��ʵ���K��Ԫ��
    {
        p=p->Next;
        i++;
    }

    if(i==K)   return p;
    else  return NULL;
}

LinkList LinkListFindX(int X,LinkList L)   //����������ֵΪX��Ԫ��
{
     LinkList p=L;   //����ָ��
     while(p!=NULL && p->Data!=X)   //���Pָ�벻Ϊ�գ����һ�û�з��ʵ���K��Ԫ��
    {
        p=p->Next;
    }
    return p;
}

LinkList LinkListInsert(int X,int i,LinkList L)   //�ڵ�i-1���ڵ�����һ��XԪ��
{
    LinkList p,q;

    if(i>LinkListLength(L))
    {
        printf("�����ַ���Ϸ�");
        return  NULL;
    }

    if(i==1)   //����������������ڵ�Ϊ�½ڵ�
    {
        q=(LinkList)malloc(sizeof(struct LinkNode));
        q->Data=X;
        q->Next=NULL;
        return q;
    }

    p=LinkListFindK(i-1,L);   //�ҵ���i-1���ڵ�

    if(p==NULL)
    {
        printf("����i����");
        return NULL;
    }
    else
    {
        q=(LinkList)malloc(sizeof(struct LinkNode));
        q->Data=X;
        q->Next=p->Next;
        p->Next=q;

        return L;
    }
}

LinkList LinkListDelete(int i,LinkList L)   //ɾ������ĵ�i�����
{
    LinkList p,q;

    if(i==1)   //���ɾ����һ���ڵ�
    {
        p=L;
        if(L!=NULL)   L=L->Next;
        else   return NULL;
        free(p);
        return L;
    }

    p=LinkListFindK(i-1,L);

    if(p==NULL)
    {
        printf("��%d���ڵ㲻����",i-1);
        return NULL;
    }
    else if(p->Next==NULL)
    {
        printf("��%d���ڵ㲻����",i);
        return NULL;
    }
    else
    {
        q=p->Next;
        p->Next=q->Next;
        free(q);
        return  L;
    }
}
