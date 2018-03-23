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
                void Print(Node *m_root, int space);
                void Add(int m_data, Node *&m_root);
                void Clear(Node *&m_root);
                void Transversal(Node *m_root);
                void Straight(Node *m_root);
                void Reverse(Node *m_root);
        public:
                Tree();
                bool Check();
                void Print();
                void Insert(int m_data);
                void Transversal();
                void Straight();
                void Reverse();
                ~Tree();
        };
}





