#include<iostream>
using namespace std;
int main(){
  int n,rez=1;
  cin>>n;
  for(int i=1;i<=n;i++){
    rez *= i;
    }
  cout<<rez;
  return 0;
}