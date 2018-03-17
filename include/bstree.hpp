#include <iostream>

using namespace std;

namespace BSTree {
        struct Node {
                int   data;
                Node *left;
                Node *right;
        };
        class Tree {
                Node *root;
        public:
                Tree();
                void Add(int m_data, Node *&m_root);
                void Clear(Node *&m_root);
                void Print_Tree(Node *m_root, int space);
                void Print();             
                void Insert(int m_data);
                ~Tree();
        };
}

