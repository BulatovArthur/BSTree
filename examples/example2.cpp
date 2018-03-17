#include <iostream>
#include "bstree.hpp"

using namespace std;
using namespace BSTree;

int Menu(Tree *&tree)
{
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
        while ((ex != "y") && (ex != "yes"))
        {
                cin >> oper;
                switch(oper)
                {
                        case 1:
                                tree->Print();
                                break;
                        case 2:

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
                                if ((ex == "y") || (ex =="yes"))
                                        cout << "Good luck!" << endl;
                                return 0;
                        default:
                                cerr << "Error" << endl;
                  }
        }
}

int main(int argc, char *argv[]) {
        Tree *tree = new Tree;
        for (int i = 1; i < argc; i++)
                tree->Insert(atoi(argv[i]));
        Menu(tree);
        delete tree;
        return 0;
}
