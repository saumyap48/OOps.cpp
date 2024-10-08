#include<iostream>
using namespace std;
class Scooty{
public:
    int topspeed;
    float mileage;
private:
    int bootspace;
};
class Bike : public Scooty{
public:
  int gears;
};
int main(){
  Bike b1;
  b1.topspeed=100;
  b1.mileage=12.5;
  b1.gears=6;
  //cannot access gears 
  cout << "Top Speed: " << b1.topspeed << endl;
  cout << "Mileage: " << b1.mileage << endl;
  cout << "Gears: " << b1.gears << endl;
}