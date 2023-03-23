#include<iostream>
using namespace std;
int Garums(unsigned long x){
  int cik=0;
  do{
    cik++;
    x=x/10;
  }while(x!=0);
  return cik;
}

bool DER(unsigned long x){
  bool der=true;
  int c;
  do{
    c=x%10;
    x=x/10;
    if(!(c==0 || c==2 || c==7)) der=false;
  }while(der==true && x!=0);
  if(c==0) der=false;
  return der;
}

int main(){
    unsigned long n, nn;
    int cip=0;
    bool irSkaitlis=true;
    cin>>n;
    nn=n;
    do{
      cip = Garums(n);
      irSkaitlis = DER(n);
      if(irSkaitlis == true && n%nn!=0) irSkaitlis=false;
      n++;
    }while(cip<20 && irSkaitlis==false);
    if(irSkaitlis==false)
    cout<<"NAV";
    else
    cout<<n-1;
    return 0;
}