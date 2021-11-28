//
// Created by Илья Рожков on 30.09.2021.
//

#ifndef LAB1_NODE_H
#define LAB1_NODE_H
#include "figure.h"
#include "pentagon.h"
#include <memory>

#define SPTR(T) std::shared_ptr<T>
#define MakeSPTR(T) std::make_shared<T>

class TreeElem{
public:
    TreeElem();
    TreeElem(const Pentagon octagon);

    const Pentagon& get_octagon() const;
    int get_count_fig() const;
    SPTR(TreeElem) get_left() const;
    SPTR(TreeElem) get_right() const;

    void set_octagon(const Pentagon& octagon);
    void set_count_fig(const int count);
    void set_left(SPTR(TreeElem) to_left);
    void set_right(SPTR(TreeElem) to_right);

    virtual ~TreeElem();
private:
    SPTR(Pentagon) octi;
    int count_fig;
    SPTR(TreeElem) t_left;
    SPTR(TreeElem) t_right;
};



#endif //LAB1_NODE_H
