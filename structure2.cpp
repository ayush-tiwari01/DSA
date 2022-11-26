#include<iostream>
using namespace std;
struct distance
{
    int inches;
    int feet;
    int result;
}d1,d2;;

int main(){
    
    cout<<"enter the feet"<<endl;
    cin>>d1.feet;
     cout<<"enter the feet"<<endl;
    cin>>d2.feet;
    cout<<"enter the inches"<<endl;
    cin>>d1.inches;
     cout<<"enter the inches"<<endl;
    cin>>d2.inches;
  int sum,a,b,sum1;
  sum = d1.inches+d2.inches;
//   printf("%d\n",sum);
  a=sum%12;
  b=sum/12;
sum1=d1.feet+d2.feet+b;
//   printf("%d",sum1);
 printf("sum is %d feet %d inch",a,sum1);
}