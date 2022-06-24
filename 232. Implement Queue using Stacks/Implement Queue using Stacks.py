#include "stack"
class MyQueue {
public:
    stack<int> Stack1;

    MyQueue() {

    }

    void push(int x) {
        Stack1.push(x);
    }

    int pop() {
        int Out = 0;
        stack<int> Stack2;
        while (!Stack1.empty()){
            Stack2.push(Stack1.top());
            Out = Stack1.top();
            Stack1.pop();
        }
        Stack2.pop();
        while (!Stack2.empty()){
            Stack1.push(Stack2.top());
            Out = Stack2.top();
            Stack2.pop();
        }
        return Out;
    }

    int peek() {
        int Out = 0;
        stack<int> Stack2;
        while (!Stack1.empty()){
            Stack2.push(Stack1.top());
            Out = Stack1.top();
            Stack1.pop();
        }
        while (!Stack2.empty()){
            Stack1.push(Stack2.top());
            Out = Stack2.top();
            Stack2.pop();
        }
        return Out;
    }

    bool empty() {
        return Stack1.empty();
    }
};