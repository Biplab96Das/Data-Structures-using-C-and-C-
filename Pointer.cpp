#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
  int a=20;
  int *p;//declaring p
  p=&a;//initializing p with address of a.
  cout<<"a= "<<a<<endl;
  *p=10;//Dereferencing a=10.
  cout<<"a= "<<a<<endl;//The value of a
  cout<<"&a= "<<&a<<endl;//Address of a
  cout<<"p= "<<p<<endl;//Address of a=p
  cout<<"&p= "<<&p<<endl;//Address of P 
  return 0;
}