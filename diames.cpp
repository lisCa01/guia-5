#include <iostream>

using namespace std;


int main()
{
 
   int aa,mm,dd;
    char m;
 
   
 cout<<"Ingrese el valor de dia , mes y año "<<endl;
    cin>>dd>>m>>mm>>m>>aa;

   
 
          if(dd>31 || mm>12){

              cout<<"no es asi"<<endl;
     
         return 0;
          }
   
       else 
         
 
cout<< "Valor del siguiente dia: "<<dd+1<<"/"<<mm<<"/"<<aa<<endl;

 
    return 0;
}
