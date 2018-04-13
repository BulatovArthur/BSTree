#include <iostream>

using namespace std;

namespace BSTree {
        struct Node {
                int data;
                Node *left;
                Node *right;
                Node(int val);
        };
        class Tree {
                Node *root;
                void Add(int m_data, Node *&m_root);
                void Print(Node *m_root, int space) const;
                void Clear(Node *&m_root);
                void Transversal(Node *m_root) const;
                void Straight(Node *m_root) const;
                void Reverse(Node *m_root) const;
                bool Compare(int m_item, Node *&m_root) const;
                void Deleting(int m_item, Node *&m_root);
                void Saving(Node *m_root, int space, string m_address) const;
        public:
                Tree();
                bool Check() const;
                void Print() const;
                void Add(int m_data);
                void Transversal() const;
                void Straight() const;
                void Reverse() const;
                bool Compare(int m_item);
                void Deleting(int m_item);
                void Saving() const;
                ~Tree();
        };
}











