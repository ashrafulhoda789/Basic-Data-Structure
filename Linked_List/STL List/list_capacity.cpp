#include<bits/stdc++.h>
using namespace std;

int main(){
    // list<int> l;
    // cout << l.max_size() << endl;

    vector<int> v = {10,20,30};
    list<int> l2(v.begin(),v.end());

    //l2.clear(); // O(N)
    //cout << l2.size() << endl;

    // if(l2.empty()){
    //     cout << "YES" << endl;
    // }else{
    //     cout << "NO" << endl;
    // }

    l2.resize(5,100);
    for(int val : l2){
        cout << val << " ";
    }
    
    return 0;
}