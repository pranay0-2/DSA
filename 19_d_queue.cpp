#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

       deque<int> pra;
       pra.push_back(9);
       pra.push_back(3);
       pra.push_front(6);

       pra.push_front(2);

       for(int i : pra){
        cout<<i<<" ";
       }cout<<endl;

     //  pra.pop_back();// last se ek element remove ho jayega 
       for(int i : pra){
        cout<<i<<" ";
       }cout<<endl;

     //  pra.pop_front();// front se ek element remove ho jayega 
       for(int i : pra){
        cout<<i<<" ";
       }cout<<endl;

       
       cout<<"Element at index 2 is " <<pra.at(2)<<endl; // to access any element of that index 

       cout<<"Empty or not -> " <<pra.empty()<<endl;  // to check that deque is Empty or not 


       cout<<"Size before Erase is " <<pra.size()<<endl;  // to check the no of element at that time in deque
       
       pra.erase(pra.begin() , pra.begin() + 2);  // Erase karo samne se do element ko 

       cout<<"Size after Erase is " <<pra.size()<<endl;


return 0;

}