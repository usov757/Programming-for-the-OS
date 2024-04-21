#include <iostream>
#include <vector>

class Queue {
private:
    std::vector<int> queue;

public:
    void remove() {
        if (!queue.empty()) {
            queue.erase(queue.begin());
        }
    }

    void print() {
        for (int i = 0; i < queue.size(); i++) {
            std::cout << queue[i] << " ";
        }
        std::cout << std::endl;
    }

    void add(int element) {
        queue.push_back(element);
    }

    int size() {
        return queue.size();
    }
};

int main() {
    Queue q;
    int choice, element;

    while (true) {
        std::cout << "1. Add an element to the queue\n";
        std::cout << "2. Remove an element from the queue\n";
        std::cout << "3. Print the queue\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter the element to add: ";
                std::cin >> element;
                q.add(element);
                break;
            case 2:
                q.remove();
                break;
            case 3:
                q.print();
                break;
            case 4:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}
