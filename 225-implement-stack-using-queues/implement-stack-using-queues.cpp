class MyStack {
public:
    int topIndex;
    int stack[1000];

    MyStack() {
        topIndex = -1;
    }
    
    void push(int x) {
        topIndex++;
        stack[topIndex] = x;
    }
    
    int pop() {
        int val = stack[topIndex];
        topIndex--;
        return val;
    }
    
    int top() {
        return stack[topIndex];
    }
    
    bool empty() {
        if(topIndex == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};