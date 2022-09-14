#include <iostream>
#include "stack.h"
using namespace std;


stack::stack(int x = 10) {
    topNum = 0;
    stackSize = x;
    n = new int(x);
}
stack::~stack() {
    delete n;
}
int stack::size() {
    return topNum;
}
bool stack::empty() {
    if (topNum == 0) return true;
    else return false;
}
bool stack::push(int x) {
    if (topNum == stackSize) return false;
    n[topNum++] = x;
    return true;
}
int stack::pop() {
    return (!empty()) ? n[--topNum] : -1;
}
int stack::top(){
    if(empty()) return -1;
    else return n[topNum-1];
}

