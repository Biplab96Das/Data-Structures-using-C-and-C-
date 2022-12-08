#include<iostream>
//Pointer Size is 8 bytes for any data-types(any primitive or user-defined data type)
using namespace std;
struct rectangle
{
   int length;
   int breadth;
};
int main()
{
   int *p1;
   char *p2;
   float *p3;
   double *p4;
   struct rectangle *p5;
   cout<<"sizeof(p1)= "<<sizeof(p1)<<"\n";
   cout<<"sizeof(p2)= "<<sizeof(p2)<<endl;
   cout<<"sizeof(p3)= "<<sizeof(p3)<<"\n";
   cout<<"sizeof(p4)= "<<sizeof(p4)<<endl;
   cout<<"sizeof(p5)= "<<sizeof(p5)<<"\n";
 return 0;  
}