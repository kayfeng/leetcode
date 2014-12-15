//min stack
#include <iostream>
#include <cstdlib>
#include <stack>
using namespace std;
/*class MinStack {
private:
    vector<int> stack;
    vector<int> minStack;
    int index;
    int mindex;
public:
    MinStack()
    {
        vector<int> stack(100,0);
        vector<int> minStack(100,0);
        for(int i=0;i<10;i++)
        {
                stack[i]=0;
                minStack[i]=0;
        }
                index =0;
                mindex=0;
    }
    void push(int x) {
        if(mindex==0)
        {
           minStack[mindex]=x;
           mindex++;         
                    }
        else if(x<=minStack[mindex-1]){
            minStack[mindex]=x;
            mindex++;
        }
        stack[index]=x;
        index++;
    }

    void pop() {
        if(stack[index-1]==minStack[mindex-1]){
            minStack[mindex]=0;
            mindex--;
        }
        stack[index]=0;
        index--;
    }

    int top() {
        return stack[index-1];
    }

    int getMin() {
        return minStack[mindex-1];
    }
};*/
class MinStack {
    stack<int> s;
    stack<int> ms;
public:
    void push(int x) {
        s.push(x);
        if(ms.empty() || x<=ms.top()) 
            ms.push(x);
    }

    void pop() {
        if(s.empty()) return;
        if(s.top()==ms.top()) ms.pop();
        s.pop();
    }

    int top() {
        if(!s.empty())
        return s.top();
    }

    int getMin() {
        if(!ms.empty())
        return ms.top();
    }
};
int main(){
    
    MinStack ms1; 
    ms1.push(5);
    cout<<ms1.top()<<endl;
    ms1.push(10);
    cout<<ms1.top()<<endl;
    ms1.pop();
    cout<<ms1.top()<<endl;
    ms1.push(-1);
    cout<<ms1.top()<<endl;
    ms1.push(-8);
    ms1.pop();
    cout<<ms1.top()<<endl;
    cout<<ms1.getMin();
    system("pause");
    return 0;
    
    }
