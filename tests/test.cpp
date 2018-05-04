#include "bstree.hpp"

using namespace BSTree;

int main() {
        Tree m1{5, 2, 4, 6};
        Tree m2 = m1;

        m1.Print();
        cout << endl;
        cout << m2;

        m1.Deleting(2);
        m1.Print();

        m1.Add(8);
        cout << m1;

        m1.Loading("file.txt");
}

