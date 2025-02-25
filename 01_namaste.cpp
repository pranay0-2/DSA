#include <iostream>

using namespace std;
    
int main(){

    /*  cout<<" Namaste Dunia! "<<endl;

       int a = 5;
       cout<< a  <<endl;

       char ch = 'z';
       cout<< ch  <<endl;

       bool bl = true ;
       cout<< bl<<endl;

       float f = 1.2 ;
       cout<< f<<endl;

       double d = 1.234;
       cout<< d <<endl;

       cout<<"Size of a (int) is "<<sizeof(a)<<endl;
       cout<<"Size of ch (char) is "<<sizeof(ch)<<endl;
       cout<<"Size of bl (bool) is "<<sizeof(bl)<<endl;
       cout<<"Size of f (float) is "<<sizeof(f)<<endl;
       cout<<"Size of d (double) is "<<sizeof(d)<<endl;

       */


      // Type Casting 

//       int a = 'z';
//       cout<< a <<endl;  // It will give you a ASCII value  from character

//       char ch = 122;
//       cout<< ch <<endl; // It will give you character from ASCII value 

//       char cha = 123456;
//       cout<< cha <<endl; // Agar aap character ke range ke bahar ki value print karoge to wo warning ayega 
//       // aur phir wo apne range ke hisab se print karega (matlab last ki values uthakar daal dega aur 
//       // phir usase jo banega wo banakar hume print kar dega )



       // Operators 
int     z = 2/5;
       cout<< z <<endl;

double  a = 2.0/5.0;
       cout<< a <<endl;

       int m = 3;
       int n = 5;



    //   bool first = 3 == 5;
       bool first = (m == n);
       cout<< first << endl;   // Answer is zero so they are not equal

       bool second = (m<n);
       cout<< second << endl;

       bool third = (m>n);
       cout<< third << endl;

       bool fourth  = (m<=n);
       cout<< fourth << endl;

       bool fifth  = (m>=n);
       cout<< fifth << endl;

       bool sixth  = (m!=n);
       cout<< sixth << endl;

       int x = 0;
       cout<< !x <<endl;
return 0;

}