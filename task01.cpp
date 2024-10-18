#include<iostream>
using namespace std;
int main()
{
    float number01, num02 ;
    char symbol;
    cout<<"Enter  first number : ";
    cin>>number01;
    cout<<"Enter second number : ";
    cin>>num02;
    cout <<"ENTER operator";
    cin>>symbol;
    if (symbol== '+')
    {
        cout<<"The sum is equal to:"<<number01+num02; 
    }
    else if (symbol== '-')
    {
        cout<<"The subtract is equal to:"<<number01-num02; 
    }
    else if (symbol== '*')
    {
        cout<<"The multiplication is equal to:"<<number01*num02; 
    }
    else if (symbol== '/')
    {
        cout<<"The division is equal to:"<<number01/num02; 
    }
    
   else
    {
        cout<<"you enter wrong operator "; 
    }
    }