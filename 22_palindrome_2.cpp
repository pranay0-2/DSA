#include <iostream>
#include <cstring> // Include this for string functions

using namespace std;

void reverse(char name[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

int getlength(const char name[]) {
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

bool isPalindrome(const char name[], const char reverse[]) {
    return strcmp(name, reverse) == 0;
}

int main() {
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is " << name << endl;

    int len = getlength(name);

    reverse(name, len);
    cout << "Your name in reverse is " << name << endl;

    char reverse[20]; // Create a reversed string to compare

    strcpy(reverse, name); // Copy the reversed name to 'reverse'

    if (isPalindrome(name, reverse)) {
        cout << "is a palindrome." << endl;
    } else {
        cout << "is not a palindrome." << endl;
    }

    return 0;
}
