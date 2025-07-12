#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> v;

    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        v.push_back(val);
    }

    v.sort();

    v.unique();

    for(int i : v){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}