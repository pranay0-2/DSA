#include <iostream>
//#include <list>
#include <bits/stdc++.h>  // You can use this single library for all data structure 

using namespace std;

int main(){

        list<int> pra;

       // Kisi new list me purani list ko copy karna 
       list<int> s(pra);
        
        // push element in an list 
        pra.push_back(3);
        pra.push_back(1);
        pra.push_front(7);
        pra.push_front(5);
       
        // Print that push elements
        for(int i : pra){
            cout<<i<<" ";
        }cout<<endl;

        // Erase an element  
        pra.erase(pra.begin());
        cout<<"After Erase from front "<<endl;
        for(int i : pra){
            cout<<i<<" ";
        }cout<<endl;
        

        // Know the size of an list
        cout<<"Size of List is " <<pra.size()<<endl;

        
        list<int> p(5,100);
        cout<<"List with size 5 and value 100: \n";
        for (int i : p){
            cout<<i<<" ";
        }cout<<endl;

return 0;

}