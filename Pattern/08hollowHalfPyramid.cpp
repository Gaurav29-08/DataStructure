// 1 
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5

#include<iostream>
using namespace std;
int main(){
  for(int i=0;i<5;i++){
    for(int j=0;j<i+1;j++){
      if(j==0||j==i||i==5-1){
        cout<<j+1<<" ";
      }
      else{
        cout<<"  "; 
      }
      

    }
    cout<<endl;
  }


}