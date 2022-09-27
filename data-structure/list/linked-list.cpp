#include <iostream>
#include "./linked-list.h"
using namespace std;
int list::size() {
    return sizeList;
}
void list::display() {
    NODE* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
        cout << tmp->data << " ";
    }
    cout << "\n";
}
int list::get(int idx) {
    NODE* tmp = head;
    int i = 0;
    while (tmp->next != NULL) {
        tmp = tmp->next;
        if (i == idx) {
            return tmp->data;
        }
        i++;
    }
    return -1;
}
void list::remove(int idx) {
    NODE* tmp = head;
    int i = 0;
    while (tmp->next != NULL) {
        if (i == idx) {
            tmp->next = tmp->next->next;
            break;
        }
        tmp = tmp->next;
        i++;
    }
    sizeList--;
}
void list::insert(int idx, int x) {
    int i = 0;
    NODE* tmp = head;
    NODE* newNode = new NODE();
    newNode->data = x;
    while (tmp->next != NULL) {
        if(i == idx) {
            newNode->next = tmp->next;
            tmp->next = newNode;
            break;
        }
        tmp = tmp->next;
        i++;
    }
}
void list::append(int x) {
    NODE* newNode = new NODE();
    newNode->data = x;
    newNode->next = NULL;
    
    if (sizeList ==0) head->next = newNode;
    else {
        NODE* tmp = head;
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
    sizeList = sizeList + 1;
    
}