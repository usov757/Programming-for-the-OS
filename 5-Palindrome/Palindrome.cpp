#include <iostream>
#include <string>

bool is_palindrome(int number) {
    std::string str = std::to_string(number);
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (is_palindrome(number)) {
        std::cout << number << " is a palindrome." << std::endl;
    } else {
        std::cout << number << " is not a palindrome." << std::endl;
    }

    return 0;
}
