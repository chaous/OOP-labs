//
// Created by Илья Рожков on 30.09.2021.
//

#ifndef LAB1_TBINARYTREE_H
#define LAB1_TBINARYTREE_H
#include "Node.h"
#include "pentagon.h"


// В каждой вершине двоичного дерева хранится фигура и счетчик, отражающий ее количество.
class TBinaryTree {
public:
    TBinaryTree();

    void Push(Pentagon octagon);
    void Pop(Pentagon octagon);
    void Clear();
    bool Empty();
    double Count(double min_area, double max_area);

    friend std::ostream& operator<<(std::ostream& os, const TBinaryTree tree);

    virtual ~TBinaryTree();
private:
    sptr(TreeElem) t_root;
};




#endif //LAB1_TBINARYTREE_H
