#ifndef MU_PERSON_H
#define MU_PERSON_H
#include <iostream>
#include <string>
#include "Thai_person.h"
#include "NODE.h"
using namespace std;

// 1. MU_person inherit มาจาก Thai person และ NODE
class MU_person : public Thai_person, public NODE {
public:
    MU_person(long = 112, string = "Prapaporn");
    virtual void display_person();
    ~MU_person();
};

// ส่งค่าไปให้ Constructor ของคลาสแม่ทั้งสอง (ใช้ x ปริ้นท์แทน เพราะ data เป็น private)
MU_person::MU_person(long x, string n) : Thai_person(n), NODE(x) {
    cout << "MU person constructor " << x << endl;
}

MU_person::~MU_person() {}

// 5. ให้ display_person สามารถ แสดงค่าข้อมูลทุกอย่างได้ด้วย
void MU_person::display_person() {
    display_thai();        // แสดงชื่อจาก Thai_person
    NODE::show_node();     // แสดง ID จาก NODE
}
#endif