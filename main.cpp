#include <iostream>
#include <cstring>
#include "file.h"
#include "shape.h"

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
    return 0;
}


