#include <iostream>
using namespace std;
int main() {
  int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,sk1=0,sk2=0;
  cin>>x1>>x2>>x3>>x4>>x5>>x6>>x7>>x8>>x9>>x10;
  int A[] = {x1,x2,x3,x4,x5,x6,x7,x8,x9,x10};
  for(int i=0;i<10;i++){
    if(A[0]<A[i])
      sk1++;
    if(A[9]>A[i])
      sk2++;
  }
  cout<<x1+x10<<" "<<sk1<<" "<<sk2;
  return 0;
}