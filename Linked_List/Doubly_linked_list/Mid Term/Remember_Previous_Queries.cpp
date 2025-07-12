#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;

    list<long long> v;

    while(q--){
        int x;
        long long val;
        cin >> x >> val;

        if(x==0){
            v.push_front(val);
        }else if(x==1){
            v.push_back(val);
        }else if(x==2){
            int length = v.size();
            if (val >= 0 && val < length) {
                auto it = v.begin();
                for (int i = 0; i < val; ++i) {
                    ++it;
                }
                v.erase(it);
            }    
        }

        cout << "L -> ";
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;

        vector<long long> vec(v.begin(),v.end());
        int len = vec.size();
        cout << "R -> ";
        for(int i=len-1; i>=0; i--){
            cout << vec[i] << " ";
        }
        cout << endl;
        
    }
    return 0;
}