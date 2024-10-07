#include<bits/stdc++.h>
using namespace std;
class Vector{
  public:
   int size;
   int capacity;
   int* arr;

   Vector(){
    size=0;
    capacity=1;
    arr=new int[1];
}
void add(int element){
  if(size==capacity){
    capacity*=2;
    int* arr2=new int[capacity];
    for(int i=0; i<size; i++){
      arr2[i]=arr[i];
    }
    arr=arr2;
  }
  arr[size++]=element;
}

void print(){
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int get(int idx){
  if(size==0){
    cout<<"array is element"<<endl;
    return -1;
  }
  if(idx>=size || idx<0){
    cout<<"invalid Index"<<endl;
    return -1;
  }
  return arr[idx];
}
void remove(){
  if(size==0){
    cout<<"Array is empty"<<endl;
  }
  size--;
}
};

int main(){
  Vector v;
  v.add(10);
  v.print();
  v.add(15);
  v.print();
  v.add(7);
  v.print();
  v.remove();
  v.print();

}