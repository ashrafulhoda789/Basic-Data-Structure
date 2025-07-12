#include<bits/stdc++.h>
using namespace std;

class cmp
{
    public:
     bool operator()(pair<string,long long> l, pair<string,long long> r)
     {
        if (l.first != r.first) {
            return l.first > r.first; 
        } else {
            return l.second < r.second; 
        }
     }
};

int main(){
    priority_queue<pair<string,long long>,vector<pair<string,long long>>,cmp> pq;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string name;
        int roll;
        cin >> name >> roll;
        pq.push({name,roll});
    }

    while(!pq.empty()){
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
    return 0;
}