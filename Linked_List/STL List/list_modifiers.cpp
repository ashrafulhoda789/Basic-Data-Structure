#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {10,20,30,40,20,20,70};
    //list<int> l2;

    //l2 = l;
    //l2.assign(l.begin(),l.end());

    // l.push_back(40); //insert at tail
    // l.push_front(100); //insert at head

    // l.pop_back(); // delete at tail
    // l.pop_front(); // delete at head

    // cout << *next(l.begin(),2) << endl;
    //l.insert(next(l.begin(),2),100);
    //l.erase(next(l.begin(),2));
    //l.erase(next(l.begin(),2),next(l.begin(),5));

    //replace(l.begin(),l.end(),20,100);

    auto it = find(l.begin(),l.end(),20);
    if(it == l.end()){
        cout << "Not found" << endl;
    }else{
        cout << "Found" << endl;
    }

    for(int val : l){
        cout << val << " ";
    }
    return 0;
}