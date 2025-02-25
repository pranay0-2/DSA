#include <iostream>

using namespace std;

// Even or Odd 
// Function Signature 
void even_odd(int num ){

    // function body 
    if (num % 2 ==0) {
        cout << num << " is Even " << endl;
    }

    else{
        cout<< num << " is Odd" << endl;
    }
}




// Computation nCr = n!/r!*(n-r)!


int factorial (int n ){
     
     int factorial = 1;

    for(int i = 1 ; i <= n ; i++){
        factorial = factorial*i;
    }
    return factorial;
}


int nCr(int n , int r ){

 int numerator = factorial(n);
 int denominator = factorial(r) * factorial(n-r);

 int ans = numerator/denominator; 

return ans;
}




// Print counting 

void counting(int n ){
     
    for(int i = 1 ; i <= n ; i++){
        cout <<" "<< i << " " ;
    }
}





// Prime or not 

bool isPrime(int n ){
    bool isprime = 1;

for(int i = 2; i<n; i++){
    if(n%i==0){
       isprime = 0;
    }
}

if(isprime==0){
    cout<<"Not a Prime Number ";
}
else{
    cout<<"Prime Number "; 
}
return isprime;
}

    

int main(){

    // int num ;
    // cout<<" Enter any number  : " ; 
    // cin>>num; 
    //even_odd(num);




//    int n , r;
//    cout<<"Enter the value of n : ";
//    cin>>n;
//    cout<<"Enter the value of r : ";
//    cin>>r;

//    int ans = nCr(n,r);

//    cout<< ans;



     
    //  int n ;
    //  cout<<"Ente a positive number ";
    //  cin >> n;
    //  counting (n);  // function call 



    int n ;
    cout<<"Ente an integer  : ";
    cin>>n;
    isPrime(n);
return 0;

}