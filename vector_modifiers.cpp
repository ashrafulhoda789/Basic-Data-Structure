#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,2,5,2};
    vector<int> v2 = {100,200,300};

    //v2 = v;

    // for(int i=0; i<v2.size(); i++){
    //     cout << v2[i] << " ";
    // }

    // v2.pop_back();
    // v2.pop_back();

    //v2.insert(v2.begin()+5,10);
    v.insert(v.begin()+2,v2.begin(),v2.end());

    //v.erase(v.begin()+2);
    //v.erase(v.begin()+1,v.end()-1);

//It's not under vector
   // replace(v.begin(),v.end()-1,2,100);

    //vector<int>::iterator it = find(v.begin(),v.end(),100);
    //Or
    // auto it = find(v.begin(),v.end(),5);

    // cout << *it << endl;

    // if(it == v.end()){
    //     cout << "Not found"<< endl;
    // }else{
    //     cout << "Found" << endl;
    // }

    // for(int x: v){
    //     cout << x << " ";
    // }

//     cout << v[4] << endl;
//    // cout << v[v.size()-1] << endl;
//     cout << v.back() << endl;
//     cout << v.front() << endl;

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    
    return 0;
}