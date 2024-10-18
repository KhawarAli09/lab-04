#include<iostream>
using namespace std;
int main()
{
    int marks_pers ;
    cout <<"Enter your persentage from 0 to 100 :";
    cin>>marks_pers ;
    if(marks_pers>=90)
    {
        cout<<"Your grade is 'A+' "<<endl;
    }
    else if(marks_pers<90&&marks_pers>=80)
    {
        cout<<"Your grade is 'A' "<<endl;
    }
    else if(marks_pers<80&&marks_pers>=70)
    {
        cout<<"Your grade is 'B' "<<endl;
    }
    else if(marks_pers<70&&marks_pers>=60)
    {
        cout<<"Your grade is 'C' "<<endl;
    }
    else if(marks_pers<60&&marks_pers>=50)
    {
        cout<<"Your grade is 'D' "<<endl;
    }
    else if(marks_pers<50)
    {
        cout<<"Your grade is 'F' "<<endl;
    }
}