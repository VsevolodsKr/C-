#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int i=1, sum=0,n;
  cin>>n;
    while(pow(5,i)<= n){
      sum += n/(pow(5,i));
      i++;
    }
  cout<<sum;
  return 0;
}