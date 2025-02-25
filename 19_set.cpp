#include <iostream>
// #include <set>
#include <bits/stdc++.h>  // You can use this single library for all data structure

using namespace std;

int main(){

    set<int> s;

    s.insert(3);
    s.insert(3);
    s.insert(3);  // 3 ko humne 3 baar daal diya 
    s.insert(1);
    s.insert(0);
    s.insert(7);
    s.insert(7);  // 7 ko humne 2 baar daal diya 

    for(int i : s){
        cout<<i<<" ";  // the answer will come in sorted order 
    }cout<<endl;

   
   s.erase(s.begin() );
   
    for(int i : s){
        cout<<i<<" ";  // the answer will come in sorted order 
    }cout<<endl;


    // Calculate thae element is present or not 

    cout<<"5 is present or not -> " <<s.count(5)<<endl;


    // find

    set<int> :: iterator itr = s.find(0);   // pahla element print karega 
    cout<<"Value present at itr-> " << *itr<<endl; 




return 0;

}