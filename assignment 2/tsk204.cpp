#include <iostream>
using namespace std;
int main ()
{
int a, b, c, d, e, f, g;
cout<< "enter number of days ";
cin>> a;
b = a/365;
c = b*365;
d = a-c;
e = d/7;
f = e*7;
g = d-f;
cout<< "years = " << b << "\n" << "weeks = " << e << "\n" << "days = " << g << "\n" <<"assuming a year contains 365 days & week contains 7 days" << "\n";
return 0;
}
