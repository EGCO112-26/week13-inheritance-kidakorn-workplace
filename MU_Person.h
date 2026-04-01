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
    
    // เผื่อไว้กรณีเรียกผ่าน MU_person ตรงๆ
    virtual void show_node() {
        display_person();
    }
};

MU_person::MU_person(long x, string n) : Thai_person(n), NODE(x) {
    cout << "MU person constructor " << x << endl;
}

// เอาข้อความกลับมาตามโครงร่างเดิม
MU_person::~MU_person() {
    cout << "Destructor id=" << data << endl;
}

void MU_person::display_person() {
    cout << "show info of person" << endl;
    cout << "id:" << data << endl;
    display_thai(); // จะไปเรียก name จาก Thai_person
}
#endif