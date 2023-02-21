//
// Created by kochu on 20.02.2023.
//
#ifndef UNTITLED28_LAB1_CLASS_SQUARE_H
#define UNTITLED28_LAB1_CLASS_SQUARE_H

#include "lab1_class_point.h"

class Square {
public:
    Point* p1;
    Point* p2;

    Square(Point *p1, Point *p2) : p1(p1), p2(p2) {}

    Square* moveByPointer(Point* p) {
        this->p1->x1 = p->x1;
        this->p1->y1 = p->y1;
        this->p2->x1 = p->x1;
        this->p2->y1 = p->y1;

        return this;
    }
    Square* moveByRef(Point &p) {
        this->p1->x1 = p.x1 + p1->x1;
        this->p1->y1 = p.y1 + p1->y1;
        this->p2->x1 = p.x1 + p2->x1;
        this->p2->y1 = p.y1 + p2->y1;

        return this;
    }
};
#endif //UNTITLED28_LAB1_CLASS_SQUARE_H
