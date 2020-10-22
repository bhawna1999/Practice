#include<iostream>
using namespace std;

int fib(int n)
{
   if(n<=1)//Termination condition
   {
      return(n);
    }
    else
	{
       return (fib(n-1)+fib(n-2));//recursive call
    }
}

int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<"Fibonacci series is : ";
    for(int i=0;i<n;i++)
	{
      cout<<" "<<fib(i);
    }
return 0;
}
