#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
float a,b,c,d,e,f,g,h,i,j,z;
cout<<"enter the principle amount\n";
cin>>a;
cout<<"enter the intrest rate\n";
cin>>z;
cout<<"enter the time duration in years\n";
cin>>c;
cout<<"enter the number of times the intrest is compaunded per year\n";
cin>>d;
b=z/100;
e=b/d;
f=c*d;
g=1+e;
h=pow(g,f);
i=a*h;
j=i-a;
cout<<"compound intrest = "<<j<<"\n"<<"amount = "<<i<<"\n";
return 0;
}
