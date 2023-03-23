#include<iostream>
using namespace std;
  int main(){
    long num1,num2,sum=0,atl,dalitajs=10;
    cin>>num1;
    num2 = num1;
    int cip=0;
    while(num1 != 0){
      num1/=10;
      cip++;
    }
    for(int i=0;i<cip;i++){
      atl = num2 % dalitajs;
      sum += atl;
      dalitajs *= 10;
    }
    cout<<sum;
    return 0;
}