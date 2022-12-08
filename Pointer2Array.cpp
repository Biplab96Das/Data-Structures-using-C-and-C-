#include<iostream>
using namespace std;
int main()
{
  int A[5]={2,5,-3,-9,6};
  int *p=A;
  for(int i=0;i<5;i++)
    cout<<p[i]<<" ";
  cout<<"\n";  
  for(int x:A)
    cout<<x<<" ";  
  return 0;
}