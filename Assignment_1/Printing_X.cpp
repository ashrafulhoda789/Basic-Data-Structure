#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i && i != n / 2) {        
                cout << "\\";
            } else if (j == n - i - 1 && i != n / 2) { 
                cout << "/";
            } else if (i == n / 2 && j == n / 2) { 
                cout << "X";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
