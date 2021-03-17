//
// Created by Administrator on 2021/3/17.
//
#include <iostream>
#include <cstdio>
#include "shape_type.h"

using namespace std;

#ifndef HELLOCPP_SHAPE_H
#define HELLOCPP_SHAPE_H

class Shape {
public:
    char name[20];
    ShapeType shapeType = TRIANGLE;
    float area;

    float getArea();

    void toString();

    void setType(ShapeType type);

};

float Shape::getArea() {
    area = 30;
    return area;
}

void Shape::toString() {
    printf("name : %s , area : %f", name, getArea());
}

void Shape::setType(ShapeType type) {
    this->shapeType = type;
}


class Triangle : public Shape {
public:
    float base;
    float height;

    void toString();

    float getArea();
};

float Triangle::getArea() {
    area = (base * height) / 2;
    return area;
}

void Triangle::toString() {
    printf("name : %s , area : %f\n", name, getArea());
}

#endif //HELLOCPP_SHAPE_H
