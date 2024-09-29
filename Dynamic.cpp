#include<bits/stdc++.h>
using namespace std;
class student{
     public:
     string name;
     int age;
     int rollnumber;
     string section; 
};
int main(){
  student *S=new student;
  S->name="Rohit";
  S->age=10;
  S->rollnumber=21;
  S->section="A";
  
  cout<<S->name<<" ";
  cout<<S->age<<" ";
  cout<<S->rollnumber<<" ";
  cout<<S->section<<" ";
}