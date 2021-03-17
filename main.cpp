#include <iostream>
#include <cstring>
#include "person.h"
#include "file.h"
#include "shape.h"
#include "shape_type.h"

using namespace std;

int main() {
    Triangle triangle;
    strcpy(triangle.name, "三角形");
    triangle.shapeType = TRIANGLE;
    triangle.height = 6;
    triangle.base = 8;
    float area = triangle.getArea();
    cout << "area : " << area << endl;
    triangle.toString();
    return 0;
}


