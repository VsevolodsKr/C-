#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n,m,rez;
  cin>>n>>m;
  for(int k=n+1;k>0;k++){
    if(k%m==0){
      rez=k;
      break;
      }
  }
  cout<<rez;
  return 0;
}