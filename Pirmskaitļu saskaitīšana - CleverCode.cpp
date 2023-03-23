#include <iostream>
using namespace std;
int isprime(int num){
   if (num <= 1)
      return 0;
   for (int i = 2; i <= num/2; i++){
      if (num % i == 0){ 
        return 0; 
        }
   }
   return 1;
}
int countPrimes(int strt,int end){
   int count=0;
   for(int i=strt;i<=end;i++){
      if(isprime(i)==1){ 
        count++; 
      }
   }
   return count;
}
int main(){
  int start,end;
  cin>>start>>end;
  cout<<countPrimes(start, end);
  return 0;
}