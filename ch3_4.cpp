#include "cxxlib.hpp"

// 3.4 Queue via Stacks: Implement a MyQueue class which implements a queue using two stacks.

class MyQueue {
private:
    size_t sz;
    stack<int> in, out;
public:
    MyQueue():sz(0){};
    void push(int);
    void pop();
    int front();
    bool empty();
    size_t size();
};

size_t MyQueue::size() {
    return sz;
}

void MyQueue::push(int x) {
    in.push(x);
    sz ++;
}

int MyQueue::front() {
    if (this->empty())
        return -1;
    
    if (out.empty()) {
        while (!in.empty()) {
            out.push(in.top());
            in.pop();
        }
    } 
    
    int res = out.top();
    return res;
}

void MyQueue::pop() {
    if (this->empty())
        return;
    
    if (out.empty()) {
        while (!in.empty()) {
            out.push(in.top());
            in.pop();
        }
    } 
    
    out.pop();
    sz--;
}

bool MyQueue::empty() {
    return sz == 0;
}

int main() {
    MyQueue* mq = new MyQueue();
    for (int i = 0; i < 10; ++i) {
        mq->push(i);
    }
    while (!mq->empty()) {
        cout << mq->front() << " ";
        mq->pop();
    }
    cout << endl;
}