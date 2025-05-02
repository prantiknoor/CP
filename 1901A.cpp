#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x, v=0, prev=0, current;
        cin >> n >> x;
        for (int i = 0; i < n; i++) {
            cin >> current;
            if(v < (current - prev)) {
                v = (current - prev);
            }
            prev = current;
        }
        if(v < (x-current)*2) {
            v = (x-current)*2;
        }
        cout << v << endl;
    }
 
    return 0;
}