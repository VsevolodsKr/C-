#include <iostream>
using namespace std;
int main() {
  int sk1,sk2,summa=0;
  cin>>sk1>>sk2;
  for(int i=sk1;i<=sk2;i++){
   summa += i;
  }
  cout<<summa;
  return 0;
}