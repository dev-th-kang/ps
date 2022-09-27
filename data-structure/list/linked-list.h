#ifndef LIST_H
#define LIST_H

class NODE {
public:
    int data;
    NODE* next;
};

class list {
private:
    NODE* head;
    int sizeList;
public:
    list() { head = new NODE(); sizeList = 0; };
    void append(int x);
    void insert(int idx, int x);
    void remove(int idx);
    int get(int idx);
    int size();
    void display();
};

#endif