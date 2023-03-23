#include<iostream>
using namespace std;
int main(){
  int n,m,max,biez=0,max1;
  cin>>n;
  int masivs[n];
  for(int i=0;i<n;i++){
    cin>>m;
    masivs[i] = m;
    }
  max=masivs[0];
  for(int i=0;i<n-1;i++){
    if(max<masivs[i+1])
      max = masivs[i+1];
  }
  max1 = max;
  int biezums[max];
  for(int i=1;i<=max;i++){
    biez=0;
    for(int j=0;j<n;j++){
      if(i==masivs[j])
       biez++;
    }
    biezums[i-1] = biez;
  }
  max = biezums[0];
  for(int i=0;i<max1;i++){
    if(max<biezums[i])
      max = biezums[i];  
  }
  cout<<max;
  return 0;
}