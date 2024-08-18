// 1 
// 1 2
// 1 2 3 
// 1 2 3 4
// 1 2 3 4 5


#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  //outer loop 
  for(int r=1;r<n;r++){
    for(int c=1;c<r+1;c++){
      cout<<c<<" ";
    }
    cout<<endl;
  }
}