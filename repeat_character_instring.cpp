#include<iostream>
using namespace std;
char getmax_occurance(string s){
    //count character
    int arr[26]={0};
    int number=0;
    for(int i=0;i<s.length();i++){
      char ch=s[i];
      number = ch-'a';
      arr[number]++;
    }
    //find maximum occurance character
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return ans+'a';
}
int main(){
    string s;
    cin>>s;
    //char c =getmax_occurance(s);
    cout<<getmax_occurance(s);
}