#include<iostream>
using namespace std;
void maxOfThreeNumber(int num1, int num2,int num3){
if(num1>num2){
  cout<<"num1 is greater";
}
else if(num2>num3){
  cout<<"num2 is grater";
}
else {
  cout<<"num3 is greater";
}
}

int main(){
  maxOfThreeNumber(8,3,4);

}