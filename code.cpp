#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false; // Numbers less than 2 are not prime
    if (n <= 3) return true;  // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return false; // Eliminate multiples of 2 and 3

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

// Function to print all prime numbers in a given range
void findPrimesInRange(int start, int end) {
    cout << "\n🔍 Prime numbers between " << start << " and " << end << ":\n";
    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            cout << "🌟 " << i << " ";
        }
    }
    cout << "\n";
}

// Function to print prime factors of a number
void primeFactors(int n) {
    cout << "\n🔍 Prime factors of " << n << ":\n";
    while (n % 2 == 0) {
        cout << "✨ 2 ";
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            cout << "✨ " << i << " ";
            n /= i;
        }
    }
    if (n > 2) {
        cout << "✨ " << n;
    }
    cout << "\n";
}

// Function to display credits
void displayCredits() {
    cout << "\n✨👨‍💻 Developed by: Valilian Peterson Mwendwa 👨‍💻✨\n";
    cout << "🌟 Thank you for using this Prime Number Checker! 🌟\n";
    cout << "Feel free to explore and learn more about primes! 📚🔢\n";
}

// Main program
int main() {
    int choice;
    cout << "🌟 Welcome to the Interactive Prime Number Checker! 🌟\n";
    cout << "===============================================\n";
    cout << "✨ Please select an option:\n";
    cout << "1️⃣ Check if a number is prime\n";
    cout << "2️⃣ Find all prime numbers in a range\n";
    cout << "3️⃣ Find prime factors of a number\n";
    cout << "4️⃣ About the Developer\n";
    cout << "0️⃣ Exit\n";
    cout << "===============================================\n";
    cout << "👉 Enter your choice (0-4): ";
    cin >> choice;

    while (choice != 0) {
        switch (choice) {
            case 1: {
                int num;
                cout << "\n🔢 Enter a number to check if it's prime: ";
                cin >> num;
                if (isPrime(num)) {
                    cout << "🎉 " << num << " is a prime number! 🎉\n";
                } else {
                    cout << "❌ " << num << " is not a prime number. ❌\n";
                }
                break;
            }
            case 2: {
                int start, end;
                cout << "\n🔢 Enter the range (start and end): ";
                cin >> start >> end;
                findPrimesInRange(start, end);
                break;
            }
            case 3: {
                int num;
                cout << "\n🔢 Enter a number to find its prime factors: ";
                cin >> num;
                primeFactors(num);
                break;
            }
            case 4:
                displayCredits();
                break;
            default:
                cout << "🚫 Invalid choice! Please enter a valid option.\n";
        }

        cout << "\n===============================================\n";
        cout << "✨ What would you like to do next?\n";
        cout << "1️⃣ Check if a number is prime\n";
        cout << "2️⃣ Find all prime numbers in a range\n";
        cout << "3️⃣ Find prime factors of a number\n";
        cout << "4️⃣ About the Developer\n";
        cout << "0️⃣ Exit\n";
        cout << "===============================================\n";
        cout << "👉 Enter your choice (0-4): ";
        cin >> choice;
    }

    cout << "\n🌈 Thank you for using the Prime Number Checker! Have a great day! 🌈\n";
    return 0;
}
