#include <iostream>
//#include <stack>
#include <bits/stdc++.h>  // You can use this single library for all data structure 


using namespace std;

int main(){

   stack<string> s;
   s.push("Hello");
   s.push("Pranay");
   s.push("Singh");
   

   cout<<"Top element is -> " <<s.top()<<endl;  // Here top element is -> Singh

   s.pop();
   cout<<"After pop operation, Top element is -> " <<s.top()<<endl; // Here top element is -> Pranay

   cout<<"Size of stack is -> " <<s.size()<<endl;  // After one pop , Size is 2

   cout<<"Empty or Not -> " <<s.empty()<<endl;   // It gives answer in terms of o 0 or 1 (bool)


       

return 0;

}