#ifndef THAI_PERSON_H
#define THAI_PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Thai_person {
protected:
    string name;
public:
    Thai_person(string n = "Prapaporn") {
        name = n;
    }
    // ใส่ virtual เพื่อให้การสืบทอดสมบูรณ์
    virtual ~Thai_person() {
    }
    
    void display_thai() {
        cout << "name:" << name << endl;
    }
};
#endif