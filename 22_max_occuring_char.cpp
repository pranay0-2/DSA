#include <iostream>

using namespace std;

char getMaxOccCharacter(string s)
{

    int arr[26] = {0};

    // create an array of count of array
    for (int i = 0; i < s.length(); i++)
    {
        char ch;

        // lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    
    // find the max occurrence character in string
    int max_occurrence = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > max_occurrence)
        {
            ans = i;
            max_occurrence = arr[i];
        }
    }
char finalanswer = 'a' + ans;
return finalanswer;
}



int main()
{

  string s ;
  cout<<"Enter the string s "<<endl;
  cin>>s;
  cout<<getMaxOccCharacter(s);

    return 0;
}