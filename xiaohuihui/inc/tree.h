#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

typedef struct TreeNode *BinTree;
typedef BinTree Position;
struct TreeNode
{
    int Data;
    BinTree Left;
    BinTree Right;
};

/*
bool IsEmpty(BinTree BT);   //�б�������Ƿ�Ϊ��
void PreTraversal(BinTree BT);   //�������������
void InTraversal(BinTree BT);   //�������������
void PostTraversal(BinTree BT);   //�������������
void LevelTraversal(BinTree BT);   //�������������
BinTree CreatBinTree();   //����������
*/

#endif // TREE_H_INCLUDED
