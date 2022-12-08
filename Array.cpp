#include<iostream>
using namespace std;
int main()
{
  int A[5];//Array A of size 5 cell,each of integer type is DECLARED
  int B[5]={2,4,6,-10,20};//Array B of size 5 cell,each of integer type is DECLARED AND INIALIZED AS B[0]=2,B[1]=4,..B[4]=20
  for(int x:B)
     cout<<x<<" ";
  return 0;   
}
