#include <iostream>
#include <vector>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) return false;
    if (number <= 3) return true;
    if (number % 2 == 0 || number % 3 == 0) return false;
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) return false;
    }
    return true;
}

// Function to find prime numbers in a list
std::vector<int> findPrimesInList(const std::vector<int>& numbers) {
    std::vector<int> primes;
    for (int num : numbers) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
    }
    return primes;
}

// Function to display prime numbers in a specified range
void displayPrimesInRange(int start, int end) {
    std::cout << "Prime numbers between " << start << " and " << end << " are:\n";
    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int choice;
    
    std::cout << "Select an option:\n";
    std::cout << "1. Check if a single number is prime\n";
    std::cout << "2. Find prime numbers in a list\n";
    std::cout << "3. Display prime numbers in a range\n";
    std::cout << "Enter your choice (1/2/3): ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            int number;
            std::cout << "Enter a number: ";
            std::cin >> number;
            if (isPrime(number)) {
                std::cout << number << " is a prime number.\n";
            } else {
                std::cout << number << " is not a prime number.\n";
            }
            break;
        }
        case 2: {
            int size;
            std::cout << "Enter the number of elements in the list: ";
            std::cin >> size;
            std::vector<int> numbers(size);
            std::cout << "Enter the numbers:\n";
            for (int i = 0; i < size; ++i) {
                std::cin >> numbers[i];
            }
            std::vector<int> primes = findPrimesInList(numbers);
            std::cout << "Prime numbers in the list are:\n";
            for (int prime : primes) {
                std::cout << prime << " ";
            }
            std::cout << std::endl;
            break;
        }
        case 3: {
            int start, end;
            std::cout << "Enter the start of the range: ";
            std::cin >> start;
            std::cout << "Enter the end of the range: ";
            std::cin >> end;
            displayPrimesInRange(start, end);
            break;
        }
        default:
            std::cout << "Invalid choice. Exiting.\n";
    }

    return 0;
}
