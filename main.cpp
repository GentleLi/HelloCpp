#include <iostream>
#include <cstring>
#include "person.h"

using namespace std;

struct Book {
    char title[50];
    float price;
};

typedef struct Human {
    char name[30];
    int age;
} Person;


void printBook(Book book);

void printBook2(struct Book *book);

void printPerson(Person p);

int main() {
    Book bookOne, bookTwo;
    strcpy(bookOne.title, "C++教程");
    strcpy(bookTwo.title, "数据结构");
    bookOne.price = 80.0f;
    bookTwo.price = 75.0f;
    printBook(bookOne);
    printBook(bookTwo);

    Book book3;
    strcpy(book3.title, "Java思想");
    book3.price = 108;
    printBook2(&book3);

    Person p1, p2;
    strcpy(p1.name, "Jack");
    strcpy(p2.name, "Rose");
    p1.age = 20;
    p2.age = 18;
    printPerson(p1);
    printPerson(p2);

    Staff staff;
    strcpy(staff.name, "Tom");
    staff.age = 20;
    staff.setSalary(180000);
    staff.toString();
    staff.talk("Bytedance");

    return 0;
}

void printPerson(Person p) {
    cout << "name : " << p.name << " , age : " << p.age << endl;
}

void printBook(Book book) {
    cout << "标题：" << book.title << " , 价格：" << book.price << endl;
}

void printBook2(struct Book *book) {
    cout << "标题：" << book->title << " , 价格：" << book->price << endl;
}
