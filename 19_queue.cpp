#include <iostream>
#include <queue>
#include <bits/stdc++.h>  // You can use this single library for all data structure 

using namespace std;

int main(){

     queue<string> q;

     // Queue me aage se  delete hota hai 
     // Queue me piche  se  add hota hai
     //  1 2 3 4 5 
     // isme 1 ki taraf se delete hoga aur 5 ki taraf se add hoga 


     q.push("Hello");  
     q.push("Pranay");  
     q.push("Singh");  

     cout<<"First element is -> " <<q.front()<<endl; // front element is hello 

     cout<<"Size before pop is -> " <<q.size()<<endl; // which is 3

     q.pop();
     cout<<"After pop operation, First element is -> " <<q.front()<<endl; 

      cout<<"Size after  pop is -> " <<q.size()<<endl; // which is 2

return 0;

}