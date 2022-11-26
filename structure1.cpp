#include<iostream>
using namespace std;
struct student
{
    string Address;
    int roll_no;
    int age;
}s[15];
int main(){
    int n,i;
    cout<<"enter the number of students"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the address"<<endl;
        cin>>s[i].Address;
        cout<<"enter the roll no"<<endl;
        cin>>s[i].roll_no;
        cout<<"enter the age"<<endl;
        cin>>s[i].age;
    }
    cout<<"Data of students"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Address of "<<i <<" "<<" is"<<endl;
        cout<<s[i].Address<<endl;
        cout<<"roll no of "<<i <<" "<<" is"<<endl;
        cout<<s[i].roll_no;
        cout<<"age of "<<i <<" "<<" is"<<endl;
        cout<<s[i].age;
    }

}