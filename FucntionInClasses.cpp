#include<bits/stdc++.h>
using namespace std ;
class Car{
public:
   string name;
   int price;
   int seats;
   string type;
};
void print(Car C){
   cout<<C.name<<" "<<C.price<<" "<<C.seats<<" "<<C.type<<" "<<endl;
}

int main(){
  Car c1;
  c1.name="Honda city";
  c1.price=150000;
  c1.seats=4;
  c1.type="sedan";

  Car c2;
  c2.name="BMW";
  c2.price=8000000;
  c2.seats=4;
  c2.type="5 series";


  print(c1);
  print(c2);

}

