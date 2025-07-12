#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long int> v(n+1);

    for(int i=1; i<=n; i++){
        cin >> v[i];
    }

    vector<long long int> pre(n+1);

    pre[1] = v[1];

    for(int i=2; i<=n; i++){
        pre[i] = pre[i-1] + v[i];
    }

    for(int i=n; i>=1; i--){
        cout << pre[i] << " ";
    }
    cout << endl;
    return 0;
}