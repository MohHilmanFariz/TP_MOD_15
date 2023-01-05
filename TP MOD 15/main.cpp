#include "tree.h"
#include <iostream>

using namespace std;

int main()
{
    int x[9] = {5, 3, 9, 10, 4, 7, 1, 8, 6};
    cout << "=======================================================" << endl;
    adrnode root = newNode_1301213393(x[0]);
    for (int i = 0; i < 9; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < 9; i++) {
        insertNode_1301213393(root, newNode_1301213393(x[i]));
    }

    cout << endl << "Pre Order\t\t: ";
    printPreOrder_1301213393(root);
    cout << endl << endl;
    cout << "Descendent of Node 9\t: ";
    printDescendant_1301213393(findNode_1301213393(root, 9));
    cout << endl << endl;
    cout << "Sum of BST Info\t\t: " << sumNode_1301213393(root) << endl;
    cout << "Number of Leaves\t: " << countLeaves_1301213393(root) << endl;
    cout << "Height of Tree\t\t: " << heightTree_1301213393(root) << endl;
    cout << "=======================================================" << endl;
    return 0;
}
