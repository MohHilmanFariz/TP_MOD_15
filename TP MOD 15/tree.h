#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <iostream>

using namespace std;

#define info(t) (t)->info
#define right(t) (t)->right
#define left(t) (t)->left

typedef struct node * adrnode;
typedef int infotype;

struct node{
    infotype info;
    adrnode left, right;
};


adrnode newNode_1301213393(infotype x);
adrnode findNode_1301213393(adrnode root, infotype x);
void insertNode_1301213393(adrnode &root, adrnode p);
void printPreOrder_1301213393(adrnode root);
void printDescendant_1301213393(adrnode root);
int sumNode_1301213393(adrnode root);
int countLeaves_1301213393(adrnode root);
int heightTree_1301213393(adrnode root);


#endif // TREE_H_INCLUDED
