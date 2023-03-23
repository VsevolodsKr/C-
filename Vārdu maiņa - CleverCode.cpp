#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int sk;
  string str1,str2;
  cin>>str1>>str2>>sk;
  string A[sk];
  for(int i=0;i<sk;i++){
    cin>>A[i];
  }
  for(int i=0;i<sk;i++){
    if(A[i] == str1)
      A[i] = str2;
  }
  sort(A,A+sk);
  for(int i=0;i<sk;i++){
    cout<<A[i]<<"\n";
  }
  return 0;
}