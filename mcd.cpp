#include <iostream>

int imprimirmcd(int num1, int num2,int residuo);
int main() {
 using namespace std;
 int num1,num2,residuo , mcd;
 cout<<"MAXIMO COMUN DIVISOR"<< endl<<endl;
 cout<< "ingrese primer numero:"<< endl;
 cin>>num1;
 cout<<"ingrese segundo numero:"<<endl;
 cin>>num2;
do{
  residuo =num1 % num2;
  if ( residuo !=0)
  {num1=num2;
  num2=residuo;}
  else 
  { mcd=num2;}
}
while (residuo !=0);
cout<<"el MCD es"<<mcd<<endl;
return 0;
}
void imprimirmcd(int mcd)
{
  using namespace std;
  cout<< "el mcd es :"<<mcd<<endl;
}