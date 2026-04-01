#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "MU_Person.h"
using namespace std;

class student : public MU_person {
private:
    double gpa;
public:
    student(long = 111, double = 2.5, string = "Nattawut");
    ~student();
    void display();
};

student::student(long i, double g, string s) : MU_person(i, s) {
    gpa = g;
}

student::~student() {
}

void student::display() {
    display_person();
    cout << "gpa:" << gpa << endl;
}
#endif