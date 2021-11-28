//
// Created by Илья Рожков on 30.09.2021.
//

#ifndef LAB1_NODE_H
#define LAB1_NODE_H
#include "figure.h"
#include "pentagon.h"
#include <memory>

class TreeElem{
public:
    TreeElem();
    TreeElem(const Pentagon octagon);

    const Pentagon& get_octagon() const;
    int get_count_fig() const;
    TreeElem* get_left() const;
    TreeElem* get_right() const;

    void set_octagon(const Pentagon& octagon);
    void set_count_fig(const int count);
    void set_left(TreeElem* to_left);
    void set_right(TreeElem* to_right);

    virtual ~TreeElem();
private:
    Pentagon octi;
    int count_fig;
    TreeElem* t_left;
    TreeElem* t_right;
};



#endif //LAB1_NODE_H
