#include<iostream>
using namespace std;
int main()
{
    int age_of_person;
    cout<<"Enter first person age : ";
    cin>>age_of_person;
    if(age_of_person>=18)
    {
        cout<<"The person is eligebal for voting .";
    }

    else 
    {
        cout<<"The person is not eligebal for voting ." ;
    }
}