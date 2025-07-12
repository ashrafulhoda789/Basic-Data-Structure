#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int l,r,sum;
    while(q--){
        cin >> l >> r;
        sum = 0;
        for(int i=l-1; i<=r-1; i++){
            sum += v[i];
        }

        cout << sum << endl;
    }
    return 0;
}
//Got TLE