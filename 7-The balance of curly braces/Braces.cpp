#include <iostream>
#include <fstream>
#include <stack>
#include <string>

bool check_braces(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return false;
    }

    std::stack<char> brace_stack;
    char c;
    bool result = true;

    while (file.get(c)) {
        if (c == '{') {
            brace_stack.push(c);
        } else if (c == '}') {
            if (brace_stack.empty() || brace_stack.top() != '{') {
                result = false;
                break;
            }
            brace_stack.pop();
        }
    }

    if (!brace_stack.empty()) {
        result = false;
    }

    file.close();
    return result;
}

int main() {
    std::string filename;
    std::cout << "Enter the name of the file to check: ";
    std::cin >> filename;

    bool matched = check_braces(filename);

    std::ofstream outfile("out.txt");
    if (matched) {
        outfile << "The braces in the file " << filename << " are matched.";
        std::cout << "The braces in the file " << filename << " are matched." << std::endl;
    } else {
        outfile << "The braces in the file " << filename << " are not matched.";
        std::cout << "The braces in the file " << filename << " are not matched." << std::endl;
    }
    outfile.close();

    return 0;
}
