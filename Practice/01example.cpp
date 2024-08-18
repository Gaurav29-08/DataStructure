#include<iostream>
using namespace std;    
int main(){
  int row=10;
  int col = 8;

 for(int r=0;r<row;r++){
  for(int c=0;c<col;c++){
    if(r==0||r==row-1){
      cout<<"* ";
    }
    else{
      if(c==0||c==col-1){
        cout<<"* ";
      }
      else{
        cout<<"  ";
      }
    }
  }
  cout<<endl;
 }
}