#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int sk1,sk2;
  cin>>sk1>>sk2;
  for(int i=0;i<max(sk1,sk2);i++){
    cout<<min(sk1,sk2)<<"\n";
  }
  return 0;
}