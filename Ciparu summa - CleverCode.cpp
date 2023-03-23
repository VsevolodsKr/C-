#include <iostream>
using namespace std;
int main(){
int sk,cip,sum=0;
cin>>sk;
while(sk>0){    
cip=sk%10;    
sum=sum+cip;    
sk=sk/10;    
} 
  cout<<sum;
  return 0;
}