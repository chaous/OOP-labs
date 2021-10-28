//
// Created by Илья Рожков on 30.09.2021.
//

#ifndef LAB1_NODE_H
#define LAB1_NODE_H
#include "figure.h"
#include "pentagon.h"

struct TreeElem{
    TreeElem();
    TreeElem(Pentagon& octagon);
    void TreeElemDel(TreeElem *elem);
    virtual ~TreeElem();
    Pentagon octi;
    int count_fig;
    TreeElem* t_left;
    TreeElem* t_right;
};


#endif //LAB1_NODE_H
