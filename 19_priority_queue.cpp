#include <iostream>
// #include <queue>
#include <bits/stdc++.h>  // You can use this single library for all data structure 


using namespace std;

int main(){
       
       // Max heap
       priority_queue<int> maxi;
     
       // Min heap
       priority_queue<int , vector<int> , greater<int> > mini;
     

       maxi.push(2);
       maxi.push(0);
       maxi.push(5);
       maxi.push(3);
       maxi.push(8);


      int n = maxi.size();
      cout<<"Max Heap : ";

      for(int i = 0; i<n; i++){
        cout<<maxi.top()<<" ";    // sabse pahle max element print karo 
        maxi.pop();               // phir usko pop kardo
      }cout<<endl;

    


       mini.push(2);
       mini.push(0);
       mini.push(5);
       mini.push(3);
       mini.push(8);
       
       int m = mini.size();
       cout<<"Min Heap : ";

       for(int i = 0; i<m; i++){
        cout<<mini.top()<<" ";   // sabse pahle min element print karo
        mini.pop();              // phir usko pop kardo
       }


return 0;

}