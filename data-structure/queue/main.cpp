#include <iostream>
#include "linearQueue.h"
using namespace std;

int main() {
    int n;
    cout << "Queue size : ";
    cin >> n;

    //create stack
    queue q(n);
    while (1) {
        string command;
        cout << "cmd :: ";
        cin >> command;
        if (command == "push") {
            int x;
            cin >> x;
            if (q.push(x)) cout << "Push (" << x << ") was successful\n";
            else cout << "Fail\n";

        }
        else if (command == "pop") {
            int n = q.pop();
            if (n == -1) cout << "Fail" << "\n";
            else cout << "pop " << n << "\n";

        }
        else if (command == "empty") {
            if(q.empty()) cout << "1\n";
            else cout << "0\n";

        }
        else if (command == "size") {
            cout << "size : " << q.size() << "\n";

        }
        else if (command == "front") {
            int n = q.front();
            if(n == -1) cout << "empty~~!!" << "\n";
            else cout << "top : " <<n  << "\n";
        }
        else if (command == "rear") {
            int n = q.rear();
            if(n == -1) cout << "empty~~!!" << "\n";
            else cout << "top : " <<n  << "\n";

        }
        else if (command == "exit") {
            return 0;
        }
    }

}