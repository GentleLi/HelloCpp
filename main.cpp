#include <iostream>
#include <cstring>
#include "file.h"
#include "shape.h"
#include "time_util.h"

using namespace std;

int main() {
    Triangle triangle;
    strcpy(triangle.name, "三角形");
    triangle.height = 6;
    triangle.base = 8;
    float area = triangle.getArea();
    cout << "area : " << area << endl;
    triangle.toString();
    cout << "内存占用：" << sizeof(triangle) << endl;

    Circle circle;
    strcpy(circle.name, "圆形");
    circle.radius = 3;
    circle.shapeType = CIRCLE;
    circle.toString();

    Time time = {2021, 3, 18, 9, 48, 32};
    time.getTimeStr();

    return 0;
}


