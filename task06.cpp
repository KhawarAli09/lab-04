#include<iostream>
using namespace std;
int main()
{
 string  signal ;
 cout<<"Enter signal light : ";
 cin>>signal;
  if(signal == "green")
 {
    cout<<"Traffic is ready for going .";
  }
 else if(signal=="red")
 {
    cout<<"Traffic stop in this signal .";
 }
 else
 {
    cout<<"Traffic go on word .";
 }
}