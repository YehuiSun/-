#include"xiaohuihui.h"

/*
bool IsEmpty(BinTree BT)   //�б�������Ƿ�Ϊ��
{

}
*/
void PreTraversalRec(BinTree BT)   //�ݹ��������������
{
    if(BT)
    {
        printf("%d ",BT->Data);
        PreTraversalRec(BT->Left);
        PreTraversalRec(BT->Right);
    }
}


void InTraversalRec(BinTree BT)   //�ݹ��������������
{
    if(BT)
    {
        PreTraversalRec(BT->Left);
        printf("%d ",BT->Data);
        PreTraversalRec(BT->Right);
    }
}

void PostTraversalRec(BinTree BT)   //�ݹ�������������
{
    if(BT)
    {
        PreTraversalRec(BT->Left);
        PreTraversalRec(BT->Right);
        printf("%d ",BT->Data);
    }
}

/*
void LevelTraversal(BinTree BT)   //�������������
{

}

BinTree CreatBinTree()   //����������
{

}
*/
