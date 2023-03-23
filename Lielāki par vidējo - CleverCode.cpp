#include <iostream>
using namespace std;
int main() {
  int n,avg,sum=0,sk=0;
  cin>>n;
  int A[n];
  for(int i=0;i<n;i++){
    cin>>A[i];
    sum+=A[i];
  }
  avg = sum/n;
  for(int i=0;i<n;i++){
    if(A[i]>avg)
      sk++;
  }
  cout<<sk;
  return 0;
}