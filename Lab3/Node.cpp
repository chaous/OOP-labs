//
// Created by Илья Рожков on 30.09.2021.
//

#include "Node.h"
#include <memory>


TreeElem::TreeElem() {
    this->octi = nullptr;
    this->set_count_fig(0);
    this->set_left(nullptr);
    this->set_right(nullptr);
}

TreeElem::TreeElem(const Pentagon octagon) {
    this->set_octagon(octagon);
    this->set_count_fig(1);
    this->set_left(nullptr);
    this->set_right(nullptr);
}


Pentagon TreeElem::get_octagon() {
    return *this->octi;
}
int TreeElem::get_count_fig() {
    return this->count_fig;
}
sptr(TreeElem) TreeElem::get_left() {
    return this->t_left;
}
sptr(TreeElem) TreeElem::get_right() {
    return this->t_right;
}


void TreeElem::set_octagon(Pentagon octi){
    this->octi = std::make_shared<Pentagon> (octi);
}
void TreeElem::set_count_fig(const int count) {
    this->count_fig = count;
}
void TreeElem::set_left(sptr(TreeElem) to_left) {
    this->t_left = to_left;
}
void TreeElem::set_right(sptr(TreeElem) to_right) {
    this->t_right = to_right;
}


TreeElem::~TreeElem() {
}