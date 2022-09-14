#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    int n;
    cout << "stack size : ";
    cin >> n;

    //create stack
    stack s(n);
    while (1) {
        string command;
        cout << "cmd :: ";
        cin >> command;
        if (command == "push") {
            int x;
            cin >> x;
            if (s.push(x)) cout << "Push (" << x << ") was successful\n";
            else cout << "Fail\n";

        }
        else if (command == "pop") {
            int n = s.pop();
            if (n == -1) cout << "Fail" << "\n";
            else cout << "pop " << n << "\n";

        }
        else if (command == "empty") {
            if (s.empty()) cout << "1\n";
            else cout << "0\n";

        }
        else if (command == "size") {
            cout << "size : " << s.size() << "\n";

        }
        else if (command == "top") {
            int n = s.top();
            if(n == -1) cout << "empty~~!!" << "\n";
            else cout << "top : " <<n  << "\n";

        }
        else if (command == "exit") {
            return 0;
        }
    }

}