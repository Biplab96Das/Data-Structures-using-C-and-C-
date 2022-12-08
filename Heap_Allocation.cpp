#include<iostream>//For C++
#include<stdio.h>//For C
#include<stdlib.h>//For Malloc function.
using namespace std;
int main()
{
  int *p=(int *)malloc(sizeof(int)*5);//Heap Allaocation using pointer in C
  p[0]=0;p[1]=-1;p[2]=-2;p[3]=3;p[4]=-4;
  int *Point=new int[5];//Heap Allocation in C++ using pointer in C++
  Point[0]=0;Point[1]=-1;Point[2]=-2;Point[3]=3;Point[3]=3;Point[4]=-4;
  for(int i=0;i<5;++i)
     cout<<p[i]<<" ";
  cout<<"\n";
  for(int i=0;i<5;++i)
     cout<<Point[i]<<" ";
  cout<<"\n";
  free(p);//In C we can free-up Heap space after our program is finished
  delete [ ] Point;// In C++ we can free-up Heap space after our program is finished    
  return 0;
}
