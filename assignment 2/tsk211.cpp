#include <iostream>
using namespace std;
int main ()
{
float a,b,c,d,e,f;
cout<<"enter the principle amount\n";
cin>>a;
cout<<"enter the intrest rate\n";
cin>>b;
cout<<"enter the time duration in years\n";
cin>>c;
d=a*b*c;
e=d/100;

cout<<"simple intrest = "<<e<<"\n";

return 0;
}
