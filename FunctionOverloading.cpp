#include<iostream>
using namespace std;
class Loading{
public:
void sum(string a,string b){
  cout<<a+b<<endl;
}
void sum(int a,int b,int c){
  cout<<a+b+c<<endl;
}
};
//return type must be same
int main(){
   Loading a;
   a.sum("Raghav","larry");
   a.sum(60,30,150);
}