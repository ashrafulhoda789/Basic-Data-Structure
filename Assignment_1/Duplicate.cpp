#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;

    vector<long long int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    bool is_duplicate = false;
    for(int i=1; i<n; i++){
        if(v[i] == v[i-1]){
            is_duplicate = true;
        }
    }

    if(is_duplicate){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}