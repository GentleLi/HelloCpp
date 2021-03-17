//
// Created by Administrator on 2021/3/17.
//

#ifndef HELLOCPP_PERSON_H
#define HELLOCPP_PERSON_H

class Staff {
public:
    char name[30];
    int age;

    void setSalary(float money);

    void toString();

    void talk(char *something);

private:
    float salary;
};


void Staff::setSalary(float money) {
    this->salary = money;
}

void Staff::talk(char *something) {
    printf("Hello,I'm %s and I'm very glad to be %2s \n", name, something);
}

void Staff::toString() {
    printf("name : %s , age : %d , salary : %f \n", name, age, salary);
}


class Programmer : public Staff {
public:
    void talk(char *something);

private:
};

void Programmer::talk(char *something) {
    printf("Hello,I'm %s, I am a Android developer, and I'm very glad to be %2s \n", name, something);
}

#endif //HELLOCPP_PERSON_H
