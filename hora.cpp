#include <iostream>

using namespace std;

int main() {
  
  int hh,mm,ss;
  char m;

cout<<"ingrese la hora:"<<endl<<endl;

  cin>>hh>>m>>mm>>m>>ss;

  //la magia
ss=ss+1;
  if(ss==60)
  {ss=0;
mm=mm+1;
    if(mm==60)
   { mm=0;
hh=hh+1;
      if(hh==24)
      {hh=0;
       }
        }
            } 
      
//la otra magia
if(hh<10)cout <<0;
cout<<hh<<":";
if(mm<10)cout<<0;
cout<<mm<<":";
if(ss<10)cout<<0;
cout<<ss<<endl;

return 0;
