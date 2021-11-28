//
// Created by Илья Рожков on 30.09.2021.
//

#include "Node.h"
#include <memory>


TreeElem::TreeElem() {
    octi;
    count_fig = 0;
    t_left = nullptr;
    t_right = nullptr;
}

TreeElem::TreeElem(const Pentagon octagon) {
    octi = octagon;
    count_fig = 1;
    t_left = nullptr;
    t_right = nullptr;
}

const Pentagon& TreeElem::get_octagon() const{
    return octi;
}
int TreeElem::get_count_fig() const{
    return count_fig;
}
TreeElem* TreeElem::get_left() const{
    return t_left;
}
TreeElem* TreeElem::get_right() const{
    return t_right;
}

void TreeElem::set_octagon(const Pentagon& octagon){
    octi = octagon;
}
void TreeElem::set_count_fig(const int count) {
    count_fig = count;
}
void TreeElem::set_left(TreeElem* to_left) {
    t_left = to_left;
}
void TreeElem::set_right(TreeElem* to_right) {
    t_right = to_right;
}

TreeElem::~TreeElem() {
}