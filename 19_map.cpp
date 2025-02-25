#include <iostream>
// #include <map>
#include <bits/stdc++.h>  // You can use this single library for all data structure



using namespace std;

int main(){

        map<int,string> p;

        p[1] = "Pranay"; // One way of insertion
        p[4] = "Singh";
        p[2] = "Hello";

        p.insert({3,"Marvel"});  // Second way of insertion


        // for(auto i:p){               //  Aise bus tum key ki value print kar sakte ho 
        //     cout<<i.first<<endl;
        // }
         

        cout<<"Befor Erase"<<endl;
        for(auto i : p){
            cout<<i.first<<" "<<i.second<<endl;
        }

        
        // Size of the map 
        cout<<"Size of the Map: "<<p.size()<<endl<<endl;  


        // Erasing an element 
        cout<<"After Erase"<<endl;
        p.erase(2);                   // key erased from the map
        for (auto i : p) {
            cout << i.first << " " << i.second << endl;
        }

        
        // Size of the map 
        cout<<"Size of the Map: "<<p.size()<<endl;  


        // Finding that value is present of not 
        cout<<"Findig 99 -> " <<p.count(99)<<endl;   // It will give answer 0 since 99 is not present 



        // Find 

        


       

return 0;

}