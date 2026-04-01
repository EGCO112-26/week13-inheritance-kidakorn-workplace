#include <iostream>
#include <cstdlib>
#include <string>
#include "NODE.h"
#include "LL.h"
#include "student.h"
using namespace std;

int main(int argc, char *argv[]) {
    LL A;
    NODE *t;

    // เปลี่ยนมาขยับทีละ 3 เพราะ 1 คนมี 3 ข้อมูล (id, gpa, name)
    for(int i = 1; i < argc; i += 3) {
        int id = atoi(argv[i]);
        double gpa = atof(argv[i+1]);
        string name = argv[i+2];

        // สร้างเป็น student แทน NODE ธรรมดา
        t = new student(id, gpa, name);
        A.add_node(t);
    }
    
    // จัดหน้าจอให้ตรงกับตัวอย่างผลการทำงาน
    cout << "         \n\n";
    A.show_all();
    cout << " \n\n";
    
    return 0;
}