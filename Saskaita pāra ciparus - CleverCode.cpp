#include <iostream>
using namespace std;
int main(){
  int n,skaits=0;
  cin>>n;
  int A[n];
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  for(int i=0;i<n;i++){
    if(A[i]%2==0)
      skaits++;
  }
  cout<<skaits;
  return 0;
}