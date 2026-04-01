#ifndef THAI_PERSON_H
#define THAI_PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Thai_person {
protected:
    string name;
public:
    // 2. เขียน constructor ของ Thai person
    Thai_person(string n = "Prapaporn") {
        name = n;
    }
    
    // 3. เขียน destructor ของ Thai_person
    ~Thai_person() {
        // ไม่ต้องพิมพ์ข้อความอะไรในนี้ เพื่อให้ผลลัพธ์ตอนรันตรงกับตัวอย่าง
    }
    
    // 4. เขียน display_thai(){} แสดงข้อมูล
    void display_thai() {
        cout << "Name: " << name << endl;
    }
};
#endif