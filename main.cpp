#include<bits/stdc++.h>

using namespace std;

int main() {
  double x,y;
  cin>>x>>y;
  
  if(0<x && 0<y){
    cout<<"Q1"<<endl;
  }else if(0<x && y<0){
    cout<<"Q4"<<endl;
  }else if(x<0 && y<0){
     cout<<"Q3"<<endl;
  }else if(x<0 && 0<y){
    cout<<"Q2"<<endl;
  }else if(x == 0 && 0<y || x == 0 && y<0){
    cout<<"Eixo Y"<<endl;
  }else if(y == 0 && 0<x || y == 0 && x<0){
    cout<<"Eixo X"<<endl;
  }else{
    cout<<"Origem"<<endl;
  }

  return 0;
}
