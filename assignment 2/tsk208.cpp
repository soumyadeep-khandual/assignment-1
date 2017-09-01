#include<iostream>
using namespace std;
int main ()
{
float a, b, c;
cout<<"to measure area of triangle\n"<<"enter base length of triangle\n";
cin>>a;
cout<<"enter height of triangle\n";
cin>>b;
if (a<0){cout<<"error;length cannot ne negative\n";} else if (b<0){cout<<"error;length cannot ne negative\n";}else{
c=0.5*a*b;
cout<<"the area of the given triangle is = "<<c<<"\n";}

return 0;
}
