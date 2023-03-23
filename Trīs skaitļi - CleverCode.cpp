#include <iostream>
using namespace std;
int main(){
  long sk1,sk2,sk3;
  cin>>sk1>>sk2>>sk3;
  if(sk1+sk2>0 || sk2+sk3>0 || sk1+sk3>0)
    cout<<"VAR\n";
  else
    cout<<"NEVAR\n";
  if(sk1+sk2==0 || sk2+sk3==0 || sk1+sk3==0)
    cout<<"VAR\n";
   else
    cout<<"NEVAR\n";
  if(sk1+sk2<0 || sk2+sk3<0 || sk1+sk3<0)
    cout<<"VAR";
   else
    cout<<"NEVAR";
  return 0;
}