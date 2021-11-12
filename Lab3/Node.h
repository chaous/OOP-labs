//
// Created by Илья Рожков on 30.09.2021.
//

#ifndef LAB1_NODE_H
#define LAB1_NODE_H
#include "figure.h"
#include "pentagon.h"
#include <memory>

#define sptr(T) std::shared_ptr<T>

class TreeElem{
public:
    TreeElem();
    TreeElem(const Pentagon octagon);

    Pentagon get_octagon();
    int get_count_fig();
    sptr(TreeElem) get_left();
    sptr(TreeElem) get_right();

    void set_octagon(Pentagon octi);
    void set_count_fig(const int count);
    void set_left(sptr(TreeElem) to_left);
    void set_right(sptr(TreeElem) to_right);

    virtual ~TreeElem();
private:
    sptr(Pentagon) octi;
    int count_fig;
    sptr(TreeElem) t_left;
    sptr(TreeElem) t_right;
};


#endif //LAB1_NODE_H
