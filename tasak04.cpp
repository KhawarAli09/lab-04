#include<iostream>
using namespace std;
int main()
{
    int first_num, second_num ;
    cout<<"Enter first number : ";
    cin>>first_num;
    cout<<"Enter second number : ";
    cin>>second_num;
    if(first_num>second_num)
    {
        cout<<"The first number is grater .";
    }
    else if(first_num<second_num)
    {
        cout<<"The second number is grater .";
    }
    else 
    {
        cout<<"Both has same number ." ;
    }
}