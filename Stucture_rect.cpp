#include<iostream>
#include<math.h>
using namespace std;
struct Rectangle
{
  int length;
  int breadth;/* data */
}r1,r2={20,5};//Global Variable
struct Rectangle r3,r4={2,15};//Global Variable
int main()
{
  struct Rectangle r5,r6={5,15};//Local to main()
  r1.length=10;
  r1.breadth=5;
  r3={15,10};
  r5={10,10};
  cout<<"Size of r1,r2,r3,r4,r5,r6 are same and it's equal to "<<sizeof(r1)<<endl;
  //Rectangle 1
  int area1=r1.breadth*r1.breadth;
  int perimeter1=2*(r1.length+r1.breadth);
  cout<<"Area and perimeter of rectangle 1= "<<area1<<","<<perimeter1<<" respectively"<<endl;
 //Rectangle 2
  int area2=r2.breadth*r2.breadth;
  int perimeter2=2*(r2.length+r2.breadth);
  cout<<"Area and perimeter of rectangle 2= "<<area2<<","<<perimeter2<<" respectively"<<endl;
 //Rectangle 3
  int area3=r3.breadth*r3.breadth;
  int perimeter3=2*(r3.length+r3.breadth);
  cout<<"Area and perimeter of rectangle 3= "<<area3<<","<<perimeter3<<" respectively"<<endl; 
 //Rectangle 4
  int area4=r4.breadth*r4.breadth;
  int perimeter4=2*(r4.length+r4.breadth);
  cout<<"Area and perimeter of rectangle 4= "<<area4<<","<<perimeter4<<" respectively"<<endl; 
 //Rectangle 5
  int area5=r5.breadth*r5.breadth;
  int perimeter5=2*(r5.length+r5.breadth);
  cout<<"Area and perimeter of rectangle 5= "<<area5<<","<<perimeter5<<" respectively"<<endl; 
 //Rectangle 6
  int area6=r6.breadth*r6.breadth;
  int perimeter6=2*(r6.length+r6.breadth);
  cout<<"Area and perimeter of rectangle 6= "<<area6<<","<<perimeter6<<" respectively"<<endl; 
  return 0;   
}
