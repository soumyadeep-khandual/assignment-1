#include <iostream>
using namespace std;
int main ()
{
float a, b, c;
cout<< "enter temperature in celcius \n";
cin>> a;
b = a*9/5 + 32;
cout<< "temperature in farenhiet = " << b << "\n";

cout<< "enter temperature in farenheit \n";
cin>> a;
b = a-32;
c = b*5/9;
cout<< "temperature in celcius = " << c << "\n";

return 0;
}
