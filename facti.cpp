#include<iostream>
using namespace std;

int main()
{
int n ,i;
cout<<"Enter a number : ";
cin>>n;
int fact;
for( i=1;i<=n;i++)
{
fact = fact * i;
}
cout<<"Factorial is : "<<fact;
return 0 ;

}
