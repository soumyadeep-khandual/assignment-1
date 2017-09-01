#include <iostream>
using namespace std;
int main()
{
float a,b,c,d, e,f,g,i,j,k,l;
cout<<"maximum mark in the subject\n";
cin>>i;
cout<<"enter the marks obtained in subject 1 \n";
cin>>a;
cout<< "enter the marks obtained in subject 2 \n";
cin>>b;
cout<< "enter the marks obtained in subject 3 \n";
cin>>c;
cout<< "enter the marks obtained in subject 4 \n";
cin>>d;
cout<< "enter the marks obtained in subject 5 \n";
cin>>e;
f=a+b+c+d+e;
g=f/5;
j=5*i;
k=f/j;
l=k*100;
cout<<"total marks obtained = "<<f<<" out of "<<j<<"\n"<<"average mark = "<<g<<"\n"<<"percentage = "<<l<<"%"<<"\n";
return 0;
}
