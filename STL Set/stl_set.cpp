#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        s.insert(val); //logN
    }

    //ascending order sorted
    for(auto it = s.begin(); it!=s.end(); it++){
        cout << *it << endl;
    }

    //descending order
    // for(auto it = s.rbegin(); it!= s.rend(); it++){
    //     cout << *it << endl;
    // }

    if(s.count(4)){ //logN
        cout << "Ache";
    }
    else cout << "Nai";
    return 0;
}