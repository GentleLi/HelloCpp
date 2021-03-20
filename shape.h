//
// Created by Administrator on 2021/3/17.
//
#include <iostream>
#include <cstdio>
#include "shape_type.h"

#define PI 3.14159265//宏定义

using namespace std;


#ifndef HELLOCPP_SHAPE_H
#define HELLOCPP_SHAPE_H

class Shape {
public:
    char name[20]{};
    ShapeType shapeType = TRIANGLE;
    float area{};

    virtual float getArea();

    virtual void toString();

    void setType(ShapeType type);

};

float Shape::getArea() {
    area = 30;
    return area;
}

void Shape::toString() {
    printf("name : %s , area : %f\n", name, getArea());
}

void Shape::setType(ShapeType type) {
    this->shapeType = type;
}


class Triangle : public Shape {
public:
    float base{};
    float height{};

    void toString() override;

    float getArea() override;
};

float Triangle::getArea() {
    area = (base * height) / 2;
    return area;
}

void Triangle::toString() {
    printf("name : %s , area : %f\n", name, getArea());
}


class Circle : public Shape {
public:

    float radius{};

//    void toString() override;
    float getArea() override;

};

//void Circle::toString() {
//    printf("name : %s , area : %f\n", name, getArea());
//}
//
float Circle::getArea() {
    area = PI * radius * radius;
    return area;
}

#endif //HELLOCPP_SHAPE_H
