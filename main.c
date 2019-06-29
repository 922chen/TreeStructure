/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: snoop
 *
 * Created on 2018年4月11日, 下午6:27
 */

#include "Tree.h"

int main(int argc, char** argv) {

    Node *node1,*node2,*node3,*node4,*node5,*node6;
    
    node1=(struct node*)malloc(sizeof(struct node));
    node1->data=1;
    node1->index=1;
    
    node2=(struct node*)malloc(sizeof(struct node));
    node2->data=2;
    node2->index=2;
    
    node3=(struct node*)malloc(sizeof(struct node));
    node3->data=3;
    node3->index=3;
    
    node4=(struct node*)malloc(sizeof(struct node));
    node4->data=4;
    node4->index=4;
    
    node5=(struct node*)malloc(sizeof(struct node));
    node5->data=5;
    node5->index=5;
    
    node6=(struct node*)malloc(sizeof(struct node));
    node6->data=6;
    node6->index=6;
    
    createTreeRoot();
    
    insertTreeNodeOnIndex(0,0,node1);
    insertTreeNodeOnIndex(0,1,node2);
    insertTreeNodeOnIndex(1,0,node3);
    insertTreeNodeOnIndex(1,1,node4);
    insertTreeNodeOnIndex(2,0,node5);
    insertTreeNodeOnIndex(2,1,node6);
    
    
    TreeForNexTraversal(m_pRoot);
    printf("\n");
    if(deleteTreeNodeOnIndex(1));
    TreeForNexTraversal(m_pRoot);
    
    if(!destroyTreeRoot())
        printf("dome");
    
    
    return (EXIT_SUCCESS);
}

