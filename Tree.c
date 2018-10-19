#include "Tree.h"

void createTree()
{
    createTreeRoot();
    
}

bool destroyTreeRoot()
{
    if(destroyTree())
        return true;
    else
        return false;
}

/*****************************************************/
Node *searchTreeNodeOnIndex(int nodeIndex,Node *pNode) 
{
    
        return searchNodeOnIndex(nodeIndex,pNode);
}

Node *searchTreeNodeOnData(int nodedata,Node *pNode)
{
    return searchNodeOnData(nodedata,pNode);
}
/******************************************************/
Node *insertTreeNodeOnIndex(int nodeIndex,int driection,Node *pNode)
{
    return insertNodeOnIndex(nodeIndex,driection,pNode);
    
}

Node *insertTreeNodeOnData(int nodedata,int driection,Node *pNode)
{
    return insertNodeOnData(nodedata,driection,pNode);
}
/*********************************************************/

Node *deleteTreeNodeOnIndex(int nodeindex)
{
    return deleteNodeOnIndex(nodeindex);
}

Node *deleteTreeNodeOnData(int nodedata)
{
    return deleteNodeOnData(nodedata);
}

/*********************************************************/
void TreeForPreTraversal(Node *pNode)
{
    PreTraversal(pNode);
}
void TreeForInTraversal(Node *pNode)
{
    InTraversal(pNode);
}
void TreeForNexTraversal(Node *pNode)
{
    NexTraversal(pNode);
}
