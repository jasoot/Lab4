#include <math.h>
#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
int main()
{
double a,b,p,d,s;
cout<<"Enter the lengths ofthe sides a and b "<<endl;
srand(time(0));
a=rand()%10+1;
cout<<"a="<<a;
b=rand()%10+1;
cout<<"b="<<b<<endl;
p=(a+b)*2;
d=sqrt(a*a+b*b);
s=a*b;
cout<<"results"<<endl;
cout <<"p="<<p<<endl;
cout <<"d="<<d<<endl;
cout<<"s="<<s<<endl;
return 0;
}
