#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int no, char sname[]) {
  studentId = no;
  strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student ID :"<<studentId<<endl;
  cout<<"Student Name :"<<name<<endl;
}
