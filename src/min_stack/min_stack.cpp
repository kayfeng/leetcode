//min stack
#include <iostream>
#include <cstdlib>
using namespace std;
class MinStack {
private:
    int stack[100];
    int minStack[100];
    int index;
    int mindex;
public:
    MinStack()
    {
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
};
int main(){
    
    MinStack ms1; 
    ms1.push(5);
    cout<<ms1.top()<<endl;
    ms1.push(10);
    cout<<ms1.top()<<endl;
    ms1.pop();
    cout<<ms1.top()<<endl;
    ms1.push(7);
    //cout<<ms1.top()<<endl;
    ms1.push(3);
    //ms1.pop();
    cout<<ms1.top()<<endl;
    cout<<ms1.getMin();
    system("pause");
    return 0;
    
    }
