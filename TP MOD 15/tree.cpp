#include "tree.h"

adrnode newNode_1301213393(infotype x){
    adrnode emptyNode = new node;
    info(emptyNode) = x;
    right(emptyNode) = NULL;
    left(emptyNode) = NULL;
    return emptyNode;
}

adrnode findNode_1301213393(adrnode root, infotype x) {
    if (root == NULL || info(root) == x) {
        return root;
    } else if (info(root) < x) {
        return findNode_1301213393(right(root), x);
    } else {
        return findNode_1301213393(left(root), x);
    }
}

void insertNode_1301213393(adrnode &root, adrnode p){
    if(root == NULL){
        root = p;
    }else{
        if(info(p) < info(root)){
        if(left(root) == NULL){
            left(root) = p;
        }insertNode_1301213393(left(root), p);
    }
    if(info(p) > info(root)){
        if(right(root) == NULL){
            right(root) = p;
        }else{
            insertNode_1301213393(right(root), p);
            }
        }
    }
}

void printPreOrder_1301213393(adrnode root){
    if(root != NULL){
        cout << info(root) << " ";
        printPreOrder_1301213393(left(root));
        printPreOrder_1301213393(right(root));
    }
}

void printDescendant_1301213393(adrnode root) {
    if(root != NULL) {
        cout << info(root) << " ";
        printDescendant_1301213393(left(root));
        printDescendant_1301213393(right(root));
    }
}

int sumNode_1301213393(adrnode root){
    if(root == NULL){
        return 0;
    }else{
        return info(root) + sumNode_1301213393(left(root)) + sumNode_1301213393(right(root));
    }
}

int countLeaves_1301213393(adrnode root){
    if(root == NULL){
        return 0;
    }
    if(left(root) == NULL && right(root) == NULL){
        return 1;
    }
    return  countLeaves_1301213393(left(root)) + countLeaves_1301213393(right(root));
}

int heightTree_1301213393(adrnode root){
    int leftHeight;
    int rightHeight;
    if(root == NULL){
        return -1;
    }else{
        leftHeight = heightTree_1301213393(left(root));
        rightHeight = heightTree_1301213393(right(root));
    }
    return max (leftHeight, rightHeight) +1;
}
