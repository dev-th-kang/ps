#include <iostream>
#include "linearQueue.h"
using namespace std;


queue::queue(int x = 10) {
    f = r = 0;
    queueSize = x;
    n = new int(x);
}
queue::~queue() {
    delete n;
}
int queue::size() {
    return f-r;
}
bool queue::empty() {
    if (size() == 0) return true;
    else return false;
}
bool queue::push(int x) {
    if (r == queueSize) return false;
    n[r++] = x;
    return true;
}
int queue::front() {
    if (empty()) return -1;
    return n[f];
}
int queue::rear() {
    if (empty()) return -1;
    return n[r-1];
}
int queue::pop() {
    return (!empty()) ? n[f++] : -1;
}
