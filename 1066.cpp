#include <iostream>

using namespace std;
int main() {

int a,b,c,d,e,cont1=0,cont2=0,cont3=0,cont4=0;      //cont1=positivos cont2=negativos cont3=pares cont4=impares
cin >> a >> b >> c >> d >> e;
   {

    if(a>0)
        cont1=cont1 + 1;
        else if (a<0)
            cont2=cont2 + 1;

   if (a%2==0)
        cont3= cont3 + 1;
        else
            cont4= cont4 +1;
    if(b>0)
        cont1=cont1 + 1;
        else if (b<0)
            cont2=cont2 + 1;
    if (b%2==0)
        cont3= cont3 + 1;
        else
            cont4= cont4 +1;
    if(c>0)
        cont1=cont1 + 1;
        else if (c<0)
            cont2=cont2 + 1;
    if (c%2==0)
        cont3= cont3 + 1;
        else
            cont4= cont4 +1;
    if(d>0)
        cont1=cont1 + 1;
        else if (d<0)
            cont2=cont2 + 1;
    if (d%2==0)
        cont3= cont3 + 1;
        else
            cont4= cont4 +1;
    if(e>0)
        cont1=cont1 + 1;
        else if (e<0)
            cont2=cont2 + 1;
     if (e%2==0)
        cont3= cont3 + 1;
        else
            cont4= cont4 +1;
   }

   cout << cont3 << " valor(es) par(es)" << endl << cont4 << " valor(es) impar(es)" << endl << cont1 << " valor(es) positivo(s)" << endl << cont2 << " valor(es) negativo(s)" << endl;
   return 0;
}
