#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {1,2,3,4,5};
    a.push_back(100);
    cout << (int)&a[4] << " " << (int)&a[5];
    return 0;
}