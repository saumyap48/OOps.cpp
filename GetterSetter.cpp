#include<bits/stdc++.h>
using namespace std;
class student{
      public:
      string name;
      int age;
      int roll_number;
      string section;
        
     void setname(string n){
      name=n;
     }

     void setage(int a){
      age=a;
     }
     
     void setroll_number(int r){
      roll_number=r;
     }

     void setsection(string se){
      section=se;
     }
     
     void getname(){
        cout<<name<<endl;
     } 

     void getage(){
      cout<<age<<endl;
     }

    void getroll_number(){
      cout<<roll_number<<endl;
     }

    string getsection(){
      return section;
     }
      
 
};
int main(){
  student S1;
  S1.setname("Ripanjali");
  S1.setage(10);
  S1.setroll_number(21);
  S1.setsection("A");
  S1.getname();
  S1.getage();
  S1.getroll_number();
  cout<<S1.getsection();



}