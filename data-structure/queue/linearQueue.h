#ifndef QUEUE_H
#define QUEUE_H

class queue {
private:
    int* n;
    int  f,r;
    int  queueSize;
public:
    queue();
    queue(int x);
    ~queue();
    bool push(int x);
    int pop();
    bool empty();
    int size();
    int front();
    int rear();
};

#endif