#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

struct structure1
{
    string name;
    int roll;
    int marks[6];
}s[10];

int main()
{
    int i,n;
    cout<<"ENTER NUMBER OF STUDENTS\n";
    cin>>n;
    cout<<"ENTER DATA OF STUDENTS\n";

    for ( i = 0; i < n; i++)
    {
        
        cout<<"name-";
        cin>>s[i].name;
        cout<<"roll no-";
        cin>>s[i].roll;
        cout<<"marks-";
        for (int j = 0; j < 6; j++)
        {
            cin>>s[i].marks[j];
        }
    }
    cout<<"***********\n";
    for ( i = 0; i < n; i++)
    {
        int min=s[i].marks[0];
        int min2=s[i].marks[0];
        int sum=0;
        for (int j = 0; j < 6; j++)
        {
            if(min>s[i].marks[j])
            {
                min=s[i].marks[j];
                s[i].marks[j]=101;
            }
            if(min2>s[i].marks[j])
            {
                min2=s[i].marks[j];
            }
            sum=s[i].marks[j]+sum;
        }
        if((float(sum-min-min2))/4>=95)
        cout<<s[i].name<<" selected\n";
        else
        cout<<s[i].name<<" try again";

        
    }
    
    
}