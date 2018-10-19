#include "Node.h"

void createTreeRoot()
{
    m_pRoot=(struct node*)malloc(sizeof(struct node));
    m_pRoot->data=0;
    m_pRoot->index=0;
    m_pRoot->LChild=m_pRoot->Parent=m_pRoot->RChild=NULL;
    n_Size++;
}

Node *destroyTree()
{
    Node *del_Node(m_pRoot);
}

Node *insertNodeOnIndex(int nodeIndex,int driection,Node *pNode)
{
    Node *node,*tmp=NULL;
    tmp=searchNodeOnIndex(nodeIndex,m_pRoot);
   
    
    if(tmp==NULL)
        return NULL;
    
    node=(struct node*)malloc(sizeof(struct node));
    node->data=pNode->data;
    node->index=pNode->index;
    node->Parent=tmp;
    node->LChild=node->RChild=NULL;
    
    if(driection==0){
        tmp->LChild=node;
        n_Size++;
        return node;
    }
    
    if(driection==1){
        tmp->RChild=node;
        n_Size++;
        return node;
    }
    
    return NULL;
    
}

Node *insertNodeOnData(int data,int driection,Node *pNode)
{
    Node *node,*tmp=NULL;
    tmp=searchNodeOnData(data,m_pRoot);
   
    
    if(tmp==NULL)
        return NULL;
    
    node=(struct node*)malloc(sizeof(struct node));
    node->data=pNode->data;
    node->data=pNode->index;
    node->Parent=tmp;
    node->LChild=node->RChild=NULL;
    
    if(driection==0){
        tmp->LChild=node;
        n_Size++;
        return node;
    }
    
    if(driection==1){
        tmp->RChild=node;
        n_Size++;
        return node;
    }
    
    return NULL;
}
/******************************************************/

Node *deleteNodeOnIndex(int index)
{
    Node *tmp=searchNodeOnIndex(index,m_pRoot);
    
    if(tmp!=NULL){
        return del_Node(tmp);
    }
    
    return NULL;
}

Node *deleteNodeOnData(int data)
{
    Node *tmp=searchNodeOnData(data,m_pRoot);
    
    if(tmp!=NULL){
        return del_Node(tmp);
    }
    
    return NULL;
}

Node *del_Node(Node *pNode)
{
    
    Node *node, *tmp;
    node=tmp=pNode;
    
    
    if(tmp->LChild!=NULL){
        
        del_Node(tmp->LChild);
    }
    
    if(tmp->RChild!=NULL){
       
        del_Node(tmp->RChild);
    }
    
    if(node!=NULL){
        if(node->Parent->LChild==pNode){
            node->Parent->LChild=NULL;
        }
        
        if(node->Parent->RChild==pNode){
            node->Parent->RChild=NULL;
        }
    }
    
    
    
    if(node)
        return node;
    else
        return NULL;
}



/******************************************************/

Node *searchNodeOnIndex(int index,Node *pNode)
{
     Node *tmp=pNode;
    Node *target=NULL;
    
    if(tmp==NULL)
        return NULL;
    
    if(tmp->data==index)
        return tmp;
    
    if(tmp->LChild!=NULL){
        if(tmp->LChild->data==index){
            return tmp->LChild;
        }else{
 
            target=searchNodeOnIndex(index,tmp->LChild);
            
            if(target!=NULL){
                return target;
            }
            
        }
    }
    
      if(tmp->RChild!=NULL){
        if(tmp->RChild->data==index){
            return tmp->RChild;
        }else{
            target=searchNodeOnIndex(index,tmp->RChild);
            
            if(target!=NULL){
                return target;
            }
            
        }
    }
    return NULL;
}

Node *searchNodeOnData(int data,Node *pNode)
{
    Node *tmp=pNode;
    Node *target=NULL;
    
    if(tmp==NULL)
        return NULL;
    
    if(tmp->data==data)
        return tmp;
    
    if(tmp->LChild!=NULL){
        if(tmp->LChild->data==data){
            return tmp->LChild;
        }else{
 
            target=searchNodeOnIndex(data,tmp->LChild);
            
            if(target!=NULL){
                return target;
            }
            
        }
    }
    
      if(tmp->RChild!=NULL){
        if(tmp->RChild->data==data){
            return tmp->RChild;
        }else{
            target=searchNodeOnIndex(data,tmp->RChild);
            
            if(target!=NULL){
                return target;
            }
            
        }
    }
    return NULL;
}

/*********************************************************/

void PreTraversal(Node *pNode)
{
     Node *cursor=pNode;
    
    if(cursor==NULL)
        return;
     if(cursor){
         printf("%d %d\n",cursor->index,cursor->data);
        
        
            PreTraversal(cursor->LChild);
       
            PreTraversal(cursor->RChild);
     }
        
    
}
void InTraversal(Node *pNode)
{

    Node *cursor=pNode;
    
    if(cursor==NULL)
        return;
    
    if(cursor){
        NexTraversal(cursor->LChild);
        printf("%d %d\n",cursor->index,cursor->data);
        NexTraversal(cursor->RChild);
    
    }
      
        
        
    
}
void NexTraversal(Node *pNode)
{
    Node *cursor=pNode;
    
    if(cursor==NULL)
        return;
    
    if(cursor){
        NexTraversal(cursor->LChild);
        NexTraversal(cursor->RChild);
        printf("%d %d\n",cursor->index,cursor->data);
    }
    
}