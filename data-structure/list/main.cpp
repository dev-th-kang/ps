#include <iostream>
#include "./linked-list.h"
using namespace std;

int main() {
    list l;
    int idx,x;
    while(1){
        cout << "1. append(x) 2. insert(idx,x) 3. remove(idx) 4. get(idx) 5. display 6.size 0.exit\n";
        cout << ">>";
        int sw;
        cin >> sw;
        switch (sw) {
        case 1:
            cout << "what x >> ";
            cin >> x;
            l.append(x);
            break;
        case 2:
            cout << "what idx,x >> ";
            cin >> idx >> x;
            l.insert(idx,x);
            break;
        case 3:
            cout << "what idx >> ";
            cin >> idx;
            l.remove(idx);
            break;
        case 4:
            cout << "what idx >> ";
            cin >> idx;
            cout <<"get number : "<<l.get(idx)<<"\n";
            break;
        case 5:
            l.display();
            break;
        case 6:
            cout << "size : " << l.size() << "\n";
            break;
        case 0:
            exit(1);
            break;
        default:
            cout << "plz again input\n";
            break;
        }
    
    }
}