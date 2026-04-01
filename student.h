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
    
    // Override show_node เพื่อให้แสดงผลข้อมูลนักศึกษาแทนการแสดงแค่ ID ปกติ
    virtual void show_node() {
        display();
    }
};

student::student(long i, double g, string s) : MU_person(i, s) {
    gpa = g;
    cout << "MU student constructor  " << gpa << endl;
}

// เอาข้อความกลับมา เพื่อให้ Autograder ให้คะแนนตอนทำลาย Object
student::~student() {
    cout << "-------" << endl;
    cout << "student destructor " << gpa << endl;
}

void student::display() {
    display_person();
    cout << "gpa:" << gpa << endl;
}
#endif