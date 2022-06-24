#include<iostream>
#include<stack>

using namespace std;


int longestValidParentheses(string s) 
{    
    stack<int> Stack;
    Stack.push(-1);
    int Max = 0;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i] == '(')
        {
            Stack.push(i);
        }
        else
        {
            Stack.pop();
            if(Stack.empty())
            {
                Stack.push(i);
            }
            else
            {
                Max = max(Max,i - Stack.top());
            }
        }
    }
    return Max;
}

int main()
{
cout<<longestValidParentheses("(()")<<endl;
cout<<longestValidParentheses(")()())")<<endl;
cout<<longestValidParentheses("")<<endl;
cout<<longestValidParentheses("()(()")<<endl;
}