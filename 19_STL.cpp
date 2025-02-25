// #include <iostream>
// #include <array>

   #include <bits/stdc++.h>

using namespace std;

int main(){
       // array

       
       array<int,4> arr  { 1,2,3,4};

       cout<< " Element at index 2 is " <<arr.at(2)<<endl;
       cout<< " First Element is " <<arr.front()<<endl;
       cout<< " Last  Element is " <<arr.back()<<endl;
   

       
       // vector 


       vector<int> v ;
       cout<<" Capacity is " <<v.capacity()<<endl;

       v.push_back(7);
       cout<<" Capacity is " <<v.capacity()<<endl;

       v.push_back(9);
       cout<<" Capacity is " <<v.capacity()<<endl;

       v.push_back(5);
       cout<<" Capacity is " <<v.capacity()<<endl;

       cout<<" Size is " <<v.size()<<endl;

       cout<<" Element at 0th Index is " <<v.at(0)<<endl;
       cout<<" Element at 1st Index is " <<v.at(1)<<endl;
       cout<<" Element at 2nd Index is " <<v.at(2)<<endl;

       cout<<" Front Element is " <<v.front()<<endl;
       cout<<" Last  Element is " <<v.back()<<endl;
       
      cout<<" Before Pop back"<<endl;
      for(int i:v){
        cout<<i<<" ";
      }cout<<endl;



      v.pop_back();
      cout<<" After Pop back"<<endl;
      for(int i:v){
        cout<<i<<" ";
      }cout<<endl;

return 0;

}