#include <iostream>
using namespace std;
#include "student.h"

int main(){
MU_person m;
 m.display_person();

 student m1(6813237,2,"nice");
 m1.display();
	//student m1(6613121,2,"Vivi"),m2(112),m3;
 // student m1(6613118,3.9,"Atom");
//student m2(6613112),m3,*p;
  //m1.display(); // id gpa name
  cout<<endl<<"======="<<endl;
  //m1.display_person(); //id

//  p=new student(6613265,1.7,"Hok");
 // delete p;
  
  return 0;
   }

// Add constructor --> set name 
// modify display() -->id/name/gpa
