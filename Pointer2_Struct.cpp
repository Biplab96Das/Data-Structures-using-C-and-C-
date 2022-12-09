#include<iostream>
using namespace std;
//Pointer to Structure 
struct Rectangle 
{
    int length;
    int breadth;
};
int main()
{
 Rectangle *p=(struct Rectangle *)malloc(sizeof(struct Rectangle));//Unlike C,C++ doesn't
 //require to declare struct before Rectangle variable
 (*p).length=12;//Accessing through pointer and dot
 (*p).breadth=12;
 cout<<"Area= "<<(*p).length*(*p).breadth<<endl;
 p->length=10;//Accessing using dereference
 p->breadth=5;
 cout<<"Area= "<<p->length*p->breadth<<endl;
 return 0;  
}
