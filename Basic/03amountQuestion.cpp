#include<iostream>
using namespace std;
int main (){
  int amount = 1330;
  int hundreds,twenties,ones;

  hundreds = amount/100;
  amount = amount%100;

  twenties = amount/20;
  amount = amount/20;

  ones = amount;

  cout<<"100 Rupes "<<hundreds<<endl;
  cout<<"20 Rupees " <<twenties<<endl;
  cout<<"1 Rupess "<<ones<<endl;
}