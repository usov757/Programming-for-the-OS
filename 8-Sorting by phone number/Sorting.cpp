#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>

struct Record {
    long long phone;
    std::string name;
    std::string address;
};

bool compare(const Record& a, const Record& b) {
    return a.phone < b.phone;
}

int main() {
    std::ifstream infile("input.txt");
    std::ofstream outfile("output.txt");

    if (!infile.is_open()) {
        std::cerr << "Error opening input file." << std::endl;
        return 1;
    }

    if (!outfile.is_open()) {
        std::cerr << "Error opening output file." << std::endl;
        return 1;
    }

    std::vector<Record> records;
    Record temp;

    while (infile >> temp.phone) {
        std::getline(infile, temp.name);
        std::getline(infile, temp.address);
        records.push_back(temp);
    }

    std::sort(records.begin(), records.end(), compare);

    for (const auto& record : records) {
        outfile << record.phone << " " << record.name << " " << record.address << std::endl;
    }

    infile.close();
    outfile.close();

    return 0;
}
