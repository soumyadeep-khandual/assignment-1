#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a,b,c,d;
cout<<"enter side length of equilateral triangle\n";
cin>>a;
b=pow(3,0.5);
c=b/4;
d=c*a*a;
cout<<"the area of equilateral triangle = "<<d<<"\n";
return 0;
}
