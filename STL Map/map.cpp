#include<bits/stdc++.h>
using namespace std;

int main(){
    
    map<string,int> mp;
    mp["tamim"] = 2;  // logN
    mp["ramim"] = 5;
    mp["shamim"] = 50;
    mp["hamim"] = 0;
    //cout << mp["hamim"] << endl;
    for(auto it = mp.begin(); it!= mp.end(); it++) //O(NlogN)
    {
        cout << it->first << " " << it->second << endl; //logN
    }

    if(mp.count("hamim")){
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}