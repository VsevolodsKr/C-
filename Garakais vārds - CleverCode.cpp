#include <iostream>
using namespace std;
int main() {
  string str1,str2;
  cin>>str1;
  cin>>str2;
  if(str1.length()>=str2.length())
    cout<<"Pirmais";
  else
    cout<<"Otrais";
  return 0;
}