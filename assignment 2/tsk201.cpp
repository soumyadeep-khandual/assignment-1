#include <iostream>
using namespace std;
int main ()
{
float a, b, c;
cout<< "enter length in centimetre \n";
cin>> a;
b = a/100;
c = b/1000;
cout<< "length in metre = " << b << "\n" << "length in kilometre = "<< c << "\n";
return 0;
}
