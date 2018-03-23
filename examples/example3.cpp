#include <iostream>
#include "bstree.hpp"

using namespace std;
using namespace BSTree;

void Menu(Tree*& tree) {
    cout << "Operation:" << endl;
    cout << "1. The tree" << endl;
    cout << "2. Nodes of a tree" << endl;
    cout << "3. Add the node" << endl;
    cout << "4. Delete the node" << endl;
    cout << "5. Save the tree" << endl;
    cout << "6. Load the tree" << endl;
    cout << "7. Check the node" << endl;
    cout << "8. Finish" << endl;
    int oper;
    string ex;
    while ((ex != "y") && (ex != "yes")) {
        cin >> oper;
        switch (oper) {
        case 1:
            if (tree->Check())
                tree->Print();
            else
                cout << "Tree is empty" << endl;
            break;
        case 2:
            if (tree->Check()) {
                cout << "a. Transversal" << endl;
                cout << "b. Straight" << endl;
                cout << "c. Reverse" << endl;
                char option;
                cin >> option;
                switch (option) {
                case 'a':
                    tree->Transversal();
                    cout << endl;
                    break;
                case 'b':
                    tree->Straight();
                    cout << endl;
                    break;
                case 'c':
                    tree->Reverse();
                    cout << endl;
                    break;
                }
            }
            else
                cout << "Tree is empty" << endl;
            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:
            cout << "Are you sure?" << endl;
            cin >> ex;
            if ((ex == "y") || (ex == "yes"))
                cout << "Good luck!" << endl;
            break;
        default:
            cerr << "Error" << endl;
        }
    }
}

int main(int argc, char* argv[])
{
    Tree* tree = new Tree;
    for (int i = 1; i < argc; i++)
        tree->Insert(atoi(argv[i]));
    Menu(tree);
    delete tree;
    return 0;
}
