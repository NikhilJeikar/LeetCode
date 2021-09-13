#include<iostream>
#include<stack>

using namespace std;

bool isValid(string s) 
{
    stack<char> Stack;
    for (char Chr:s)
    {
        if(Stack.size() == 0 && (Chr == ')'||Chr == '}' ||Chr==']')) return false;
        if(Chr == ')')
        {
            
            if(Stack.top() == '(') Stack.pop();
            else return false;
        } 
        else if(Chr == ']')
        {
            if(Stack.top() == '[') Stack.pop();
            else return false;
        }
        else if(Chr == '}')
        {
            if(Stack.top() == '{') Stack.pop();
            else return false;
        }
        else
        {
            Stack.push(Chr);
        }
    }
    if(Stack.size() != 0) return false;
    return true;        
}

int main()
{
cout<<isValid("()")<<endl;
cout<<isValid("()[]{}")<<endl;
cout<<isValid("(]")<<endl;
cout<<isValid("([)]")<<endl;
cout<<isValid(")")<<endl;
}