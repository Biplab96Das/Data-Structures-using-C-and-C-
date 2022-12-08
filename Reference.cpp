#include<iostream>
//Reference is like nickname of a variable,used for parameter passing
using namespace std;
int main()
{
 int a=10;
 int &r=a;
 cout<<"a= "<<r<<endl;
 int b=30;
 r=b;
 cout<<"a= "<<a<<endl;
 return 0;  
}