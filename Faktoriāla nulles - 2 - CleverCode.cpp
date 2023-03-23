#include <iostream>
using namespace std;
int main() {
  int num, count=0, digit;
  cin>>num;
  long fakt=1;
  for(int i=1;i<=num,i++){
    fakt *= i;
  }
  while(fakt !=0){
    digit = fakt % 10;
    if(digit == 0)
    count++;
    fakt /= 10;
  }
  cout<<fakt;
   return 0;
}