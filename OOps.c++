#include<iostream>
using namespace std;

class student
{
     public:
     string name;
     int age;
     int roll_number;
     string grade;
};
int main(){
  student S1;
  S1.name="Rohit";
  S1.age=10;
  S1.roll_number=21;
  S1.grade="A+";
  cout<<S1.name<<endl;
  cout<<S1.age<<endl;
  cout<<S1.roll_number<<endl;
  cout<<S1.grade<<endl;
}
