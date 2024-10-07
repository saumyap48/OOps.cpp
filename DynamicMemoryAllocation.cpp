#include<bits/stdc++.h>
using namespace std;
class Cricketer{
  public:
       string name;
       int runs;
       float avg;
Cricketer (string name, int runs, float avg){
  this->name=name;
  this->runs=runs;
  this->avg=avg;
}
};
int main(){
     Cricketer c1("virat kohli",25000,55.2);
     Cricketer* c2=new Cricketer("Rohit sharma",18000,47.8);
     cout<<c1.name<<" "<<c1.runs<<endl;
     cout<<c2->name<<" "<<c2->runs<<endl;
}