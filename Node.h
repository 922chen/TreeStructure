/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.h
 * Author: snoop
 *
 * Created on 2018年4月11日, 下午6:27
 */

#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

typedef struct node
{
    int data;
    int index;
    struct node *LChild;
    struct node *RChild;
    struct node *Parent;
}Node;

Node *m_pRoot;
long int n_Size;

void createRootNode();//创建树
Node *destroyTree(); //销毁树


Node *insertNodeOnIndex(int nodeIndex,int driection,Node *pNode); //根据节点索引插入节点
Node *insertNodeOnData(int data,int driection,Node *pNode); //根据节点数据插入节点

Node *deleteNodeOnIndex(int index); //根据节点的索引删除
Node *deleteNodeOnData(int data); //根据节点的数据删除
Node *del_Node(Node *pNode);


Node *searchNodeOnIndex(int index,Node *pNode); //根据索引查询节点
Node *searchNodeOnData(int data,Node *pNode); //根据内容查询节点

void PreTraversal(Node *pNode); //前序
void InTraversal(Node *pNode); //中序
void NexTraversal(Node *pNode); //后序

#endif /* NODE_H */

