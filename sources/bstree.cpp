#include <iostream>
#include "bstree.hpp"

using namespace std;
using namespace BSTree;

Tree::Tree() { root = nullptr; }

void Tree::Add(int m_data, Node *&m_root) {
        if (nullptr == m_root) {
                m_root = new Node;
                m_root->data = m_data;
                m_root->left = m_root->right = nullptr;
        }
        if (m_data < m_root->data) {
                if (m_root->left != nullptr)
                        Add(m_data, m_root->left);
                else {
                        m_root->left = new Node;
                        m_root->left->left = m_root->left->right = nullptr;
                        m_root->left->data = m_data;
                }
        }
        if (m_data > m_root->data) {
                if (m_root->right != nullptr)
                        Add(m_data, m_root->right);
                else {
                        m_root->right = new Node;
                        m_root->right->left = m_root->right->right = nullptr;
                        m_root->right->data = m_data;
                }
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

Tree::~Tree() {
        Clear(root);
}
