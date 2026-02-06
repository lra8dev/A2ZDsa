#include <iostream>
using namespace std;

// 1. Count Digits
int countDigits(int n) {
    int countNum = 0;

    while (n > 0) {
        countNum = countNum + 1;
        n = n / 10;
    }
  
    return countNum;
}

// 2. Reverse Digits
int reverseDigits(int n) {
    int reversedNum = 0;
    int lastNum;
        
    while (n > 0) {
        lastNum = n % 10;
        reversedNum = (reversedNum * 10) + lastNum;
        n = n / 10;
    }
        
    return reversedNum;
}

// 3. Check Palindrome
bool isPalindrome(int n) {
    int originalNum = n;
    int reversedNum = 0;
    int lastNum;
        
    while (n > 0) {
        lastNum = n % 10;
        reversedNum = (reversedNum * 10) + lastNum;
        n = n / 10;
    }
        
    if (reversedNum == originalNum) {
        return true;
    }
        
    return false;
}

// 4. GCD (greatest common divisor) of two numbers - Euclidean Algorithm
int gcd(int a, int b) {
    while(a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
       
    if (a == 0) {
        return b;
    }
       
    return a;
}

// 5. Armstrong Number
bool armstrongNumber(int n) {
    int originalNum = n;
    int sum = 0;
    int lastNum;
        
    while (n > 0) {
        lastNum = n % 10;
        sum = sum + (lastNum * lastNum * lastNum);
        n = n / 10;
    }
        
    if (sum == originalNum) {
        return true;
    }
        
    return false;
}

// 6. All Divisors of a Number
void print_divisors(int n) {
    vector<int> list;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            list.push_back(i);
            if ((n/i) != i) {
                list.push_back(n/i);
            }
        }
    }
    sort(list.begin(), list.end());
    for (auto it : list) {
        cout << it << " ";
    }
}

// 7. Prime Number Check
bool isPrime(int n) {
    int primeNum = 0;
        
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            primeNum++;
            if ((n / i) != i) {
                primeNum++;
            }
        }
    }
        
    if (primeNum == 2) {
        return true;
    }
        
    return false;
}

int main() {
    countDigits(1234); // Output: 4
    reverseDigits(1234); // Output: 4321
    isPalindrome(1234); // Output: false
    gcd(12, 18); // Output: 6
    armstrongNumber(153); // Output: true
    print_divisors(12); // Output: 1 2 3 4 6 12
    isPrime(7); // Output: true
    
    return 0;
}