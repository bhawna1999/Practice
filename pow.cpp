#include<iostream> 
using namespace std; 
int power(int x, int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    else
        return x * power(x, y / 2) * power(x, y / 2); 
} 

int main() 
{ 
	int num,pow;
    cout<<"Enter the Number : ";
    cin>> num;
    cout<<"Enter the Power : ";
    cin>>pow;
    cout <<"Result is : " <<power(num, pow); 
    return 0; 
}
