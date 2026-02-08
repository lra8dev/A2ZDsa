#include <iostream>
using namespace std;

// 1. Print name n times without the loop.
void printName(int n) {
    if (n == 0) {
        return;
    }
    cout << "Lucky" << endl;
    printName(n - 1);
}

// 2. Print 1 to N using Recursion
void printOneToN(int n) {
    if (n == 0) {
        return;
    }
    printOneToN(n - 1);
    cout << n << " ";
}

// 3. Print N to 1 using Recursion
void printNToOne(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    printNToOne(n - 1);
}

// 4. Sum of Natural Numbers using Recursion
int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumOfNaturalNumbers(n - 1);
    // Let's see how the function works for n = 5:
    // sumOfNaturalNumbers(5) = 5 + sumOfNaturalNumbers(4)
    // sumOfNaturalNumbers(4) = 4 + sumOfNaturalNumbers(3)
    // sumOfNaturalNumbers(3) = 3 + sumOfNaturalNumbers(2)
    // sumOfNaturalNumbers(2) = 2 + sumOfNaturalNumbers(1)
    // sumOfNaturalNumbers(1) = 1 + sumOfNaturalNumbers(0)
    // sumOfNaturalNumbers(0) = 0 // Base case reached, now we can calculate the sum:
    // sumOfNaturalNumbers(1) = 1 + 0 = 1
    // sumOfNaturalNumbers(2) = 2 + 1 = 3
    // sumOfNaturalNumbers(3) = 3 + 3 = 6
    // sumOfNaturalNumbers(4) = 4 + 6 = 10
    // sumOfNaturalNumbers(5) = 5 + 10 = 15
}

// 5. Factorial of a number using Recursion
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

// 6. Reverse a given Array using Recursion
void reverseArray(int (&arr)[], int start, int end) {
    if (start >= end) {
        return;
    }
    // Swap the elements at start and end indices
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    // Recursive call to reverse the remaining array
    reverseArray(arr, start + 1, end - 1);
    
}

// 7. Check if a given String is a Palindrome using Recursion
bool isPalindrome(string str, int start, int end) {
    if (start >= end) {
        return true; // Base case: If the string is empty or has only one character
    }
    if (str[start] != str[end]) {
        return false; // If the characters at start and end indices are not the same
    }
    // Recursive call to check the remaining substring
    return isPalindrome(str, start + 1, end - 1);
}

// 8. Fibonacci Series using Recursion
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: F(0) = 0
    }
    if (n == 1) {
        return 1; // Base case: F(1) = 1
    }
    // Recursive call to calculate the Fibonacci number
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printName(5); // Output: Lucky (5 times)
    printOneToN(5); // Output: 1 2 3 4 5
    printNToOne(5); // Output: 5 4 3 2 1
    cout << sumOfNaturalNumbers(5); // Output: 15 (1 + 2 + 3 + 4 + 5)
    cout << factorial(5); // Output: 120 (5 * 4 * 3 * 2 * 1)
    cout << isPalindrome("madam", 0, 4); // Output: 1 (true)
    cout << fibonacci(5); // Output: 5 (Fibonacci number at position 5)
    return 0;
}