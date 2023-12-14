//
// Created by yahya on 12/14/2023.
//

#include "palendrome.h"
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& input) {
    int start = 0;
    int end = input.length() - 1;
    while (start < end) {
        if (input[start] != input[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    cout << "Is 'racecar' a palindrome? " << isPalindrome("racecar") << endl;
    cout << "Is 'hello' a palindrome? " << isPalindrome("hello") << endl;
    return 0;
}

