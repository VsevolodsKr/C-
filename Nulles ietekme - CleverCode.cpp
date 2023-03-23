#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n,skNulles=0;
  cin>>n;
  int A[n];
  for(int i=0;i<n;i++){
    cin>>A[i];
    if(A[i]==0)
    skNulles++;
  }
  if(skNulles%2!=0){
    for(int i=0;i<n;i++)
    A[i] *= -1;
  }
  sort(A,A+n);
  for(int i=0;i<n;i++){
    cout<<A[i]<<"\n";
  }
  return 0;
}