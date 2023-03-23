#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int a,b,c, x1,x2;
  cin>>a>>b>>c;
  if(pow(b,2) - 4*a*c<0)
  cout<<"nav";
  else{
    x1 = (-b+(sqrt(pow(b,2) - 4*a*c)))/(2*a);
    x2 = (-b-(sqrt(pow(b,2) - 4*a*c)))/(2*a);
    if(x1==x2)
      cout<<x1;
    else
      cout<<min(x1,x2)<<"\n"<<max(x1,x2);
  }
}