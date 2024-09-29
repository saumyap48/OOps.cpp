#include<bits/stdc++.h>
using namespace std;
class customer{
  string name;
  int account_number;
  int balance;
   
  public:
  //default constructor
  customer(){
    name="Rohit";
    account_number=5;
    balance=100;
  } 

  //parameterized constructor
  customer(string a,int b,int c){
    name=a;
    account_number=b;
    balance=c;

  }
  //constructor overloading
  customer(string a,int b){
      name=a;
      account_number=b;
  }
  void display()
  {
    cout<<name<<" "<<account_number<<" "<<balance<<endl;
  }
};
int main(){ 
    customer A1;
    customer A2("Rohit",12,1000);
    customer A4("Rohit",24);
    A1.display();
    A2.display();
    A4.display();
}