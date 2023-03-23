#include<iostream>
using namespace std;
int main(){
  int diena;
  cin>>diena;
  int menesaDienas[] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int menesis;
  while(diena > menesaDienas[menesis]){
    diena -= menesaDienas[menesis];
    menesis++;
  }
  cout<<diena<<" "<<menesis+1;
  return 0;  
}
