# Know Basic Maths

Mathematical operations and number theory concepts are fundamental building blocks for solving complex DSA problems. This section covers essential mathematical algorithms frequently used in competitive programming and interviews.

---

## Core Concepts Covered

### 1. Count Digits

**Problem**: Count the total number of digits in a given number.

**Approach**:

- Continuously divide the number by 10 until it becomes 0
- Increment counter for each division

**Example**:

```cpp
Input: n = 1234
Output: 4
```

**Time Complexity**: O(log₁₀(n)) - number of divisions equals the number of digits  
**Space Complexity**: O(1)

**Key Learning**: Understanding logarithmic time complexity in digit operations

---

### 2. Reverse Digits

**Problem**: Reverse the digits of a given number.

**Approach**:

- Extract last digit using modulo operation (`n % 10`)
- Build reversed number: `reversed = reversed * 10 + lastDigit`
- Remove last digit by integer division (`n / 10`)

**Example**:

```cpp
Input: n = 1234
Output: 4321
```

**Time Complexity**: O(log₁₀(n))  
**Space Complexity**: O(1)

**Edge Cases**:

- Numbers ending with zeros (e.g., 1200 → 21)
- Overflow for large numbers

---

### 3. Check Palindrome

**Problem**: Determine if a number reads the same backward as forward.

**Approach**:

- Reverse the number
- Compare with original
- Return true if equal

**Examples**:

```cpp
Input: n = 121
Output: true

Input: n = 1234
Output: false

Input: n = 12321
Output: true
```

**Time Complexity**: O(log₁₀(n))  
**Space Complexity**: O(1)

**Applications**: Pattern matching, number validation

---

### 4. GCD (Greatest Common Divisor) - Euclidean Algorithm

**Problem**: Find the largest number that divides both given numbers without a remainder.

**Approach - Euclidean Algorithm**:

- If `a > b`, replace `a` with `a % b`
- If `b > a`, replace `b` with `b % a`
- Continue until one becomes 0
- The non-zero value is the GCD

**Algorithm Visualization**:

```
gcd(12, 18)
→ gcd(12, 6)   // 18 % 12 = 6
→ gcd(6, 0)    // 12 % 6 = 0
→ 6
```

**Example**:

```cpp
Input: a = 12, b = 18
Output: 6

Input: a = 20, b = 15
Output: 5
```

**Time Complexity**: O(log min(a, b))  
**Space Complexity**: O(1)

**Related Concept**: LCM (Least Common Multiple) = (a × b) / GCD(a, b)

---

### 5. Armstrong Number (Narcissistic Number)

**Problem**: Check if a number equals the sum of its digits raised to the power of the number of digits.

**Definition**: For 3-digit numbers, n = d₁³ + d₂³ + d₃³

**Examples**:

```cpp
153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 ✓
370 = 3³ + 7³ + 0³ = 27 + 343 + 0 = 370 ✓
371 = 3³ + 7³ + 1³ = 27 + 343 + 1 = 371 ✓
123 = 1³ + 2³ + 3³ = 1 + 8 + 27 = 36 ✗
```

**Note**: Current implementation assumes 3-digit numbers. For n-digit numbers, use power of n.

**Time Complexity**: O(log₁₀(n))  
**Space Complexity**: O(1)

---

### 6. All Divisors of a Number

**Problem**: Find all numbers that divide the given number without remainder.

**Naive Approach**: Check every number from 1 to n → O(n)

**Optimized Approach**:

- Only iterate till √n
- For each divisor `i`, both `i` and `n/i` are divisors
- Avoid duplicates when `i = n/i` (perfect squares)

**Example**:

```cpp
Input: n = 12
Divisors: 1, 2, 3, 4, 6, 12

Process:
i = 1: 1 and 12
i = 2: 2 and 6
i = 3: 3 and 4
```

**Time Complexity**: O(√n)  
**Space Complexity**: O(number of divisors)

**Optimization**: Significantly better than O(n) for large numbers

---

### 7. Prime Number Check

**Problem**: Determine if a number is prime (only divisible by 1 and itself).

**Optimized Approach**:

- Count total divisors using √n optimization
- A prime number has exactly 2 divisors (1 and itself)

**Examples**:

```cpp
Input: n = 7
Output: true (divisors: 1, 7)

Input: n = 12
Output: false (divisors: 1, 2, 3, 4, 6, 12)

Input: n = 2
Output: true (smallest prime)
```

**Time Complexity**: O(√n)  
**Space Complexity**: O(1)

**Edge Cases**:

- n = 1 is NOT prime
- n = 2 is the only even prime
- All primes > 2 are odd

---

## Mathematical Patterns & Insights

### Digit Extraction Pattern

```cpp
lastDigit = n % 10;    // Get last digit
n = n / 10;             // Remove last digit
```

This pattern appears in: digit counting, reversing, palindrome checking, Armstrong numbers.

### Square Root Optimization

For problems involving divisors or factors, checking till √n reduces complexity from O(n) to O(√n).

**Why?** If `a × b = n` and `a ≤ √n`, then `b ≥ √n`. So we find pairs by checking only till √n.

### Euclidean Algorithm Efficiency

The GCD algorithm is remarkably efficient because the remainder operation rapidly decreases the numbers.

---

## Key Takeaways

✅ **Modulo and Division**: Core operations for digit manipulation  
✅ **√n Optimization**: Essential for divisor-related problems  
✅ **Euclidean Algorithm**: Efficient GCD computation  
✅ **Logarithmic Time**: Most digit operations run in O(log n)  
✅ **Mathematical Reasoning**: Reduces brute force to optimal solutions

---

## Quick Reference

| Operation        | Time Complexity | Space Complexity             |
| ---------------- | --------------- | ---------------------------- |
| Count Digits     | O(log n)        | O(1)                         |
| Reverse Number   | O(log n)        | O(1)                         |
| Palindrome Check | O(log n)        | O(1)                         |
| GCD (Euclidean)  | O(log min(a,b)) | O(1)                         |
| Armstrong Check  | O(log n)        | O(1)                         |
| Find Divisors    | O(√n)           | O(d) where d = divisor count |
| Prime Check      | O(√n)           | O(1)                         |

---

**Difficulty**: Beginner to Intermediate  
**Estimated Time**: 2-3 hours

_"Mathematics is the language in which God has written the universe." - Galileo Galilei_
