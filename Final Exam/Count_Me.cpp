#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);

        map<string,int> mp;
        stringstream ss(s);
        string word;

        string max_w;
        int max_count = 0;

        while(ss >> word){
            mp[word]++;

            if(mp[word] > max_count){
                max_count = mp[word];
                max_w = word;
            }
        }

        cout << max_w << " " << max_count << endl;
    }
    return 0;
}