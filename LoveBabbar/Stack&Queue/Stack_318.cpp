class MyQueue {
public:
    stack <int> input;
    stack <int> output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if (!output.empty())
        {
            int temp = output.top();
            output.pop();
            return temp;
        }
        else
        {
            while (!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
            int temp = output.top();
            output.pop();
            return temp;
        }
    }
    
    int peek() {
        if (!output.empty())
            return output.top();
        else
        {
            while (!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
            return output.top();
        }
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};
