#ifndef STACK_H
#define STACK_H


class stack {
private:
    int* n;
    int  topNum;
    int  stackSize;
public:
    stack();
    stack(int x);
    ~stack();
    bool push(int x);
    int pop();
    bool empty();
    int size();
    int top();
};

#endif
