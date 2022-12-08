#include<iostream>
using namespace std;
struct Rectangle 
{
    int length;
    int breadth;
};
int main()
{
 struct Rectangle *p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
 (*p).length=12;//Accessing through pointer and dot
 (*p).breadth=12;
 cout<<"Area= "<<(*p).length*(*p).breadth<<endl;
 p->length=10;//Accessing using dereference
 p->breadth=5;
 cout<<"Area= "<<p->length*p->breadth<<endl;
 return 0;  
}