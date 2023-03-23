#include <cmath>
#include <iostream>
using namespace std;
int main() {
   int skaitlis,skaitlis1,skaititajs,n=0,rezultats = 0,pakape;
   cin >> skaitlis;
   skaitlis1 = skaitlis;
   while (skaitlis1 != 0) {
      skaitlis1 /= 10;
      n++;
   }
   skaitlis1 = skaitlis;
   while (skaitlis1 != 0) {
      skaititajs = skaitlis1 % 10;
      pakape = round(pow(skaititajs, n));
      rezultats += pakape;
      skaitlis1 /= 10;
   }
   if (rezultats == skaitlis)
      cout<<"IR";
   else
      cout<<"NAV";
   return 0;
}
