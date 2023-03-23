#include <iostream>
using namespace std;
long lkd(long a, long b){
  if (b == 0)
      return a;
  else
      return lkd(b,a%b);
}
int main() {
  long a,b;
  cin>>a>>b;
  cout<<lkd(a,b);
  return 0;
}