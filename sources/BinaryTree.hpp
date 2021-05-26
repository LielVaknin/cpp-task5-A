#pragma once

#include <map>

namespace ariel {

    template<typename T>
    class BinaryTree {
        struct Node {
            T value;
            Node *left;
            Node *right;

            explicit Node(T val) : value(val), left(nullptr), right(nullptr) {}
        };
        Node *root;

    public:
        BinaryTree() {
            this->root = nullptr;
        }

        ~BinaryTree() {}

        BinaryTree<T> &add_root(T val) {
            return *this;
        }

        BinaryTree<T> &add_left(T val_exists, T val_to_add) {
            return *this;
        }

        BinaryTree<T> &add_right(T val_exists, T val_to_add) {
            return *this;
        }

        friend std::ostream &operator<<(std::ostream &os, const BinaryTree<T> &bt) {
            return os;
        }

        class iterator {
            Node *pointer_to_current_node;
        public:
            iterator(Node *ptr = nullptr)
                    : pointer_to_current_node(ptr) {}

            T &operator*() const {
                return pointer_to_current_node->value;
            }

            T *operator->() const {
                return &(pointer_to_current_node->value);
            }

            iterator &operator++() {
                pointer_to_current_node = pointer_to_current_node->left;
                return *this;
            }

            const iterator operator++(int) {
                iterator tmp = *this;
                pointer_to_current_node = pointer_to_current_node->left;
                return tmp;
            }

            bool operator==(const iterator &rhs) const {
                return pointer_to_current_node == rhs.pointer_to_current_node;
            }

            bool operator!=(const iterator &rhs) const {
                return pointer_to_current_node != rhs.pointer_to_current_node;
            }
        };

        iterator begin_preorder() {
            return iterator(this->root);
        }

        iterator end_preorder() {
            return iterator(nullptr);
        }

        iterator begin_inorder() {
            return iterator(this->root);
        }

        iterator end_inorder() {
            return iterator(nullptr);
        }

        iterator begin_postorder() {
            return iterator(this->root);
        }

        iterator end_postorder() {
            return iterator(nullptr);
        }

        iterator begin() {
            return iterator(this->root);
        }

        iterator end() {
            return iterator(nullptr);
        }
    };
}


