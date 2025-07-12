#include<bits/stdc++.h>
using namespace std;

int main(){
    
    list<int> l = {20,30,10,50,30,60,60,10};
    //l.remove(10); // It will be delete value and don't needed index

    //l.sort(); //ascending order
    //l.sort(greater<int>()); //decending order

    //l.unique(); //It's remove the duplicate value and only works when list is sorted

    l.reverse();

    for(int val : l){
        cout << val << " ";
    }
    return 0;
}