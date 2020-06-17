#include <iostream>


using namespace std;



bool abisiesto(int ainicial)

{
 if((ainicial%4==0) && (ainicial%100!=0) or (ainicial%400==0))
  
 return true;
 
 else 
 
  return false;

}



int main()

{
 
int ainicial,afinal;

 
cin>>ainicial;      
cin>>afinal;


 for(ainicial;ainicial<=afinal;ainicial++)

 {
  if(abisiesto(ainicial))
  
 cout<<"El año "<<ainicial<<" si es bisiesto"<<endl;
 
 else
  
 cout<<"El año " <<ainicial<<" no es bisiesto"<<endl;
 
 
 }
  

 return 0;

 
}
