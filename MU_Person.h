#ifndef MU_PERSON_H
#define MU_PERSON_H
#include <iostream>
#include <string>
#include "Thai_person.h"
#include "NODE.h"
using namespace std;

class MU_person : public Thai_person, public NODE {
public:
    MU_person(long = 112, string = "Prapaporn");
    virtual void display_person();
    ~MU_person();
};

MU_person::MU_person(long x, string n) : Thai_person(n), NODE(x) {
}

MU_person::~MU_person() {
}

void MU_person::display_person() {
    cout << "show info of person" << endl;
    cout << "id:" << data << endl;
    display_thai(); // จะไปเรียก name จาก Thai_person
}
#endif