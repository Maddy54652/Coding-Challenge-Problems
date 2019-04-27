#include<iostream>

using namespace std;

void printRoom(int length,int width);

int main(){
  int length,width;
  char x;
  cin>>length;
  cin>>x;
  cin>>width;
  printRoom(length,width);
  return 0;
}

void printRoom(int length,int width){
  int i=0;
  int j=0;

  for(;i<length;i++){
    for(j = 0;j<width;j++){
      cout<<"*";
    }
    cout<<"\n";
  }
  return;
}
