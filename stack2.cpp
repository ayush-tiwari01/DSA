#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

bool isbalanced(string expr)
{
    stack<char> temp;
    for (int i = 0; i < expr.length(); i++) {
        if (temp.empty()) {
             
            temp.push(expr[i]);
        }
        else if ((temp.top() == '(' && expr[i] == ')')
                 || (temp.top() == '{' && expr[i] == '}')
                 || (temp.top() == '[' && expr[i] == ']')) {
             
            temp.pop();
        }
        else {
            temp.push(expr[i]);
        }
    }
    if (temp.empty()) {
         
        return true;
    }
    return false;
}

int main()
{
    string expr = "{()}[]";
    if(isbalanced(expr))
    cout<<"balanced";
    else 
    cout<<"Unbalanced";
    return 0;
}