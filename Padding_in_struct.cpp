#include<iostream>
using namespace std;
//*Padding* in structure is allocating multiple of no. of bytes of highest sized primitive declaration,
//size is double>=float>=int>=char.
struct Rectangle
{
 int length,breadth;//4+4 bytes here
 char x;//*Padding :allocating 4 bytes but using 1 byte here,total 12 bytes of s.
}s;
struct circle
{
  char a,b,d;
  float c;/*Float is 4 byte but char is 1 byte but Padding allocating 4 bytes of float*2=8 bytes
  instead of 3*1+4=7 bytes<=8 bytes*/
}c;

int main()
{
 cout<<"Size of structure s is "<<sizeof(s)<<" bytes.";
 cout<<"\nSize of structure c is "<<sizeof(c)<<" bytes.";
 return 0;
} 