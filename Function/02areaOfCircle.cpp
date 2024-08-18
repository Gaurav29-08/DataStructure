#include<iostream>
using namespace std;

float areaOfCircle(float radius){
  float area = 3.14 * radius*radius;
  return area;
}




int main(){
  float radius;
  cout<<"enter the radius"<<endl;
  cin>>radius;

  float Area = areaOfCircle(radius);
  cout<<"Area of Circle is : "<<Area<<endl;

}