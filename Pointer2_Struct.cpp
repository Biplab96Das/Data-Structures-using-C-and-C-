#include<iostream>
using namespace std;
//Pointer to Structure 
struct Rectangle 
{
    int length;
    int breadth;
};
int main()
{         //*Store structure in stack*
 Rectangle r={10,5};//Accessing Rectangle using normal variable
 cout<<"Area= "<<r.length*r.breadth<<endl;
 Rectangle *q=&r;
 (*q).length=4;
 q->breadth=6;
 cout<<"Area= "<<(*q).breadth*q->length<<endl;
         //*Store structure in Heap*   
 Rectangle *p=new Rectangle;//OR (struct Rectangle *)malloc(sizeof(struct Rectangle));//Unlike C,C++ doesn't
 //require to declare struct before Rectangle variable
 (*p).length=12;//Accessing through pointer and dot
 (*p).breadth=12;
 cout<<"Area= "<<(*p).length*(*p).breadth<<endl;
 p->length=10;//Accessing using dereference operator
 p->breadth=5;
 cout<<"Area= "<<p->length*p->breadth<<endl;
 return 0;  
}
