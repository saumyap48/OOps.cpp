#include<bits/stdc++.h>
using namespace std;
class Cricketer{
  public:
  string name;
  int runs;
  float avg;
 
 Cricketer(string name,int runs,float avg){
  this->name=name;
  this->runs=runs;
  this->avg=avg;
 }
void print(){
  cout<<name<<" "<<this->runs<<" "<<avg<<endl;
}

};
int main(){
  Cricketer c1("virat kohli",2500, 55.2);
  Cricketer c2("Rohit sharma",18000,47.8);
  
   c1.print();
  c2.print();

}