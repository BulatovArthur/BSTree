#include <iostream>
#include "bstree.hpp"

using namespace std;
using namespace BSTree;

Tree::Tree() : root(nullptr) {};

bool Tree::Check() {
        if (root == nullptr)
                return false;
        else
                return true;
}

void Tree::Add(int m_data, Node *&m_root) {
        if (nullptr == m_root)
                m_root = new Node{m_data, nullptr, nullptr};
        if (m_data < m_root->data) {
                if (m_root->left != nullptr)
                        Add(m_data, m_root->left);
                else 
                        m_root->left = new Node{m_data, nullptr, nullptr};
        }
        if (m_data > m_root->data) {
                if (m_root->right != nullptr)
                        Add(m_data, m_root->right);
                else
                        m_root->right = new Node{m_data, nullptr, nullptr};
        }
}

void Tree::Clear(Node *&m_root) {
        if (m_root != nullptr) {
                Clear(m_root->left);
                Clear(m_root->right);
                delete m_root;
                m_root = nullptr;
        }
}

void Tree::Insert(int m_data) {
        Add(m_data, root);
}

void Tree::Print(Node *m_root, int space) {
        if (m_root == nullptr)
                return;
        int count = 1;
        space += count;
        Print(m_root->right, space);
        cout << endl;
        for (int i = count; i < space; i++)
                cout << "   ";
        cout << "--" << m_root->data << endl;
        Print(m_root->left, space);
}

void Tree::Print() {
        Print(root, 0);
}

Tree::~Tree() {
        Clear(root);
}
