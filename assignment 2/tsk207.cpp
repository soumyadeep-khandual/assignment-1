#include<iostream>
using namespace std;
int main ()
{
float a, b, c, d;
cout<<"enter 1st angle in degrees\n";
cin>>a;
cout<<"enter 2nd angle in degrees\n";
cin>>b;
d=a+b;
c=180-d;
if(d<180){
cout<<"the 3rd angle in degrees = "<<c<<"\n";}
else {cout<< "error; sum of 2 angles of a triangle cannot be greater than 180\n";}
return 0;
}
