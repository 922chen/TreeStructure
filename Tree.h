/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tree.h
 * Author: snoop
 *
 * Created on 2018年4月11日, 下午7:22
 */

#ifndef TREE_H
#define TREE_H

#include "Node.h"
void createTree();//创建树
bool destroyTreeRoot(); //销毁树

Node *deleteTreeNodeOnIndex(int nodeindex); //根据节点的索引删除
Node *deleteTreeNodeOnData(int nodedata); //根据节点的数据删除

Node *insertTreeNodeOnIndex(int nodeIndex,int driection,Node *pNode); //根据节点索引插入节点
Node *insertTreeNodeOnData(int nodedata,int driection,Node *pNode); //根据节点数据插入节点

Node *searchTreeNodeOnIndex(int nodeindex,Node *pNode); //根据索引查询节点
Node *searchTreeNodeOnData(int nodedata,Node *pNode); //根据数据查询节点

void TreeForPreTraversal(Node *pNode); //前序
void TreeForInTraversal(Node *pNode); //中序
void TreeForNexTraversal(Node *pNode); //后序



#endif /* TREE_H */

