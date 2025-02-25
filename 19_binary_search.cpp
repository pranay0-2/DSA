#include <iostream>
//#include <algorithm>
#include <bits/stdc++.h>  // You can use this single library for all data structure 



using namespace std;

int main(){

    vector<int> v;

    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(7);

    cout<<"Finding 4-> "<< binary_search(v.begin() , v.end() , 4)<<endl;

    // In sort form we can say that it return the index number 
   cout<<"Lower bound-> " <<lower_bound(v.begin() , v.end() , 4) -v.begin()<<endl;

   // In sort Index of lase element
   cout<<"Upper bound-> " <<upper_bound(v.begin() , v.end() , 4) -v.begin()<<endl;

       

return 0;

}