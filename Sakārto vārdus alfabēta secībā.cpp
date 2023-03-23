#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int sk;
  cin>>sk;
  string A[sk];
  for(int i=0;i<sk;i++){
    cin>>A[i];
  }
  sort(A,A+sk);
  for(int i=0;i<sk;i++){
    cout<<A[i]<<"\n";
  }
  return 0;
}