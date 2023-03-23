#include <iostream>
using namespace std;
int main() {
  int n,sum=0;
  cin>>n;
  int A[n];
  for(int i=0;i<n;i++){
    cin>>A[i];
    if(A[i]%2!=0)
      sum += A[i];
    else
      sum += A[i]/2;
   }
  cout<<sum;
  return 0;
}