#include <iostream>
using namespace std;

template<typename T>
class NODE {
public:
	T data;
	NODE* next;
};

template<typename T> class stack {
	NODE<T>* topNode;
	int sizeNum;
public:
	stack() { topNode = new NODE<T>();  sizeNum = 0; }
	void push(int x);
	void print();
	int top();
	void pop();
	int size();
	bool empty();
};
template<typename T>
void stack<T>::push(int x) {
	NODE<T>* newNODE = new NODE<T>();
	newNODE->data = x;
	newNODE->next = topNode->next;
	topNode->next = newNODE;
	sizeNum++;
}


template<typename T>
void stack<T>::pop() {
	if (topNode->next == NULL) {
		cout << "데이터가 없습니다.\n";
		return;
	}
	int ans = topNode->next->data;
    topNode->next = topNode->next->next;
	cout << "pop:: " << ans << "\n";

	sizeNum--;
}


template<typename T>
int stack<T>::size() {
	return sizeNum;
}


template<typename T>
int stack<T>::top() {
	if (topNode->next == NULL) {
		cout << "데이터가 없습니다.\n";
		return NULL;
	}
	else return topNode->next->data;
}


template<typename T>
bool stack<T>::empty() {
	return topNode->next == NULL? true: false;
}


template<typename T>
void stack<T>::print() {
	NODE<T>* tmp = topNode;
	while (tmp->next != NULL) {
		cout << tmp->next->data << " ";
		tmp = tmp->next;
	}
}

int main() {
	stack<char> s;
	while (1) {
		string command;
		cin >> command;
		if (command == "push") {
			char x;
			cin >> x;
			s.push(x);
		}
		else if (command == "pop") {
			s.pop();
		}
		else if (command == "top") {
			char ans = s.top();
			if (ans != NULL) cout << ans<<"\n";
		}
		else if (command == "size") {

			cout << s.size()<<"\n";
		}
		else if (command == "empty") {

			s.empty()? cout <<"true\n": cout << "false\n";
		}
		else if (command == "print") {
			s.print();
		}
	}
}

/*
일반 배열 스택과는 다르게, 얼마를 담든 제한이 없다는 장점이있다.
다만, 메모리를 할당하고 해제하는 부분에서 일반적인 배열 stack보다
시간이 오래걸릴수도 있다.
*/