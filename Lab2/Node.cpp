//
// Created by Илья Рожков on 30.09.2021.
//

#include "Node.h"

TreeElem::TreeElem() {
    octi;
    count_fig = 0;
    t_left = nullptr;
    t_right = nullptr;
}

TreeElem::TreeElem(Pentagon& octagon) {
    octi = octagon;
    count_fig = 1;
    t_left = nullptr;
    t_right = nullptr;
}

void TreeElemDel(TreeElem *elem) {
    delete elem->t_left;
    delete elem->t_right;
    delete elem;
}

TreeElem::~TreeElem() {
    delete t_left;
    delete t_right;
    std::cout << "элемент дерева удалён" << std::endl;
}