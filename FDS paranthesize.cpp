//In any language program mostly syntax error occurs due to unbalancing delimiter such as (),{},[]. 
//Write C++ program using stack to check whether given expression is well parenthesized or not.


#include<iostream>
#include<stack>
#include<string>
using namespace std;
 bool iswellParanthesized(const string &expression){
    stack<char>charStack;

    for(char ch:expression){
        if(ch=='('||ch=='['||ch=='{'){
            charStack.push(ch);
        }
        else if(ch==']'||ch=='}'||ch==')'){
            if(charStack.empty()){
                return false;
            }
           char top=charStack.top();
           charStack.pop();

           if(ch=='('&&top!=')'||ch=='['&&top!=']'||ch=='{'&&top!='}'){
            return false;
           }
        }
    }
    return charStack.empty();
 }
 int main(){
    string expression;
    cout<<"Enter the expression:";
    getline(cin,expression);

    if(iswellParanthesized(expression)){
        cout<<"WELL";
    }
    else{
        cout<<"NOt";
    }
    return 0;

 }
