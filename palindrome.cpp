#include <iostream>
#include <algorithm>  // For std::reverse
using namespace std;

bool isNumberPalindrome(int num) {
    int rev = 0, original = num;
    while (num > 0) { rev = rev * 10 + num % 10; num /= 10; }
    return original == rev;
}

bool isStringPalindrome(string str) {
    string revStr = str;
    reverse(revStr.begin(), revStr.end());
    return str == revStr;
}

int main() {
    int num; string str;
    cout << "Enter a number: "; cin >> num;
    cout << (isNumberPalindrome(num) ? "Number is palindrome.\n" : "Number is not palindrome.\n");

    cout << "Enter a string: "; cin >> str; 
    cout << (isStringPalindrome(str) ? "String is palindrome.\n" : "String is not palindrome.\n");
    cout<<"AMAN VERMA BCA III-B " <<endl;
    cout<<"Enrollment-A45304823055";

    return 0;
}
