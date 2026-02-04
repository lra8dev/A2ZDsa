# Time and Space Complexity

Time and Space complexity are fundamental concepts from Computer Science that are used to analyze and optimize the efficiency of algorithms.

- **Time Complexity**: Measures how the execution time of an algorithm grows with respect to input size
- **Space Complexity**: Measures how much memory space an algorithm uses during execution

Both are typically expressed using **Big O notation**, which describes the worst-case scenario.

---

## Time Complexity

### Definition

Time complexity represents the **rate at which execution time increases** with respect to input size. It helps us understand the **maximum time required** to execute an algorithm.

### Common Time Complexities (Best to Worst)

- **O(1)** - Constant time (e.g., accessing an array element)
- **O(log n)** - Logarithmic time (e.g., binary search)
- **O(n)** - Linear time (e.g., iterating through an array)
- **O(n log n)** - Linearithmic time (e.g., merge sort, quick sort)
- **O(n²)** - Quadratic time (e.g., nested loops)
- **O(2ⁿ)** - Exponential time (e.g., recursive fibonacci)
- **O(n!)** - Factorial time (e.g., generating all permutations)

### Example 1: O(n) - Linear Time

```javascript
for (let i = 0; i < n; i++) {
  console.log(i);
}
```

The loop runs `n` times, so the time complexity is **O(n)**.

### Example 2: O(n²) - Quadratic Time

```javascript
for (let i = 0; i < n; i++) {
  for (let j = 0; j < n; j++) {
    console.log(i, j);
  }
}
```

Nested loops run `n × n` times, so the time complexity is **O(n²)**.

### Example 3: O(log n) - Logarithmic Time

```javascript
let i = n;
while (i > 1) {
  console.log(i);
  i = Math.floor(i / 2);
}
```

The input is halved each iteration, so the time complexity is **O(log n)**.

---

## Space Complexity

### Definition

Space complexity measures the **total amount of memory space** an algorithm uses during execution.

### Components

1. **Auxiliary Space**: Extra space used by the algorithm (temporary variables, data structures)
2. **Input Space**: Space occupied by input data

**Formula**: `Space Complexity = Auxiliary Space + Input Space`

### Example 1: O(1) - Constant Space

```javascript
const a = 10;
const b = 20;
const c = a + b; // variable c uses auxiliary space
console.log(c);
```

Only a fixed number of variables are used, regardless of input size: **O(1)**.

### Example 2: O(n) - Linear Space

```javascript
function createArray(n) {
  const arr = [];
  for (let i = 0; i < n; i++) {
    arr.push(i);
  }
  return arr;
}
```

An array of size `n` is created, so space complexity is **O(n)**.

### Example 3: Recursive Space Complexity

```javascript
function factorial(n) {
  if (n <= 1) return 1;
  return n * factorial(n - 1);
}
```

Each recursive call adds to the call stack. Maximum depth is `n`, so space complexity is **O(n)**.

---

## Time and Space Complexity Chart

![Complexity Chart](https://miro.medium.com/v2/resize:fit:720/format:webp/0*P5FlnSY6h2Y7hAE5.png)

---

## Key Takeaways

✅ **Always aim for lower time and space complexity** when solving problems  
✅ **Balance trade-offs**: Sometimes better time complexity requires more space (and vice versa)  
✅ **Big O describes worst-case** behavior, but also consider average and best cases  
✅ **Drop constants and lower-order terms**: O(2n) becomes O(n), O(n² + n) becomes O(n²)

---

## Quick Reference Table

| Complexity | Name         | Example Operations               |
| ---------- | ------------ | -------------------------------- |
| O(1)       | Constant     | Array access, hash table lookup  |
| O(log n)   | Logarithmic  | Binary search                    |
| O(n)       | Linear       | Linear search, array traversal   |
| O(n log n) | Linearithmic | Merge sort, quick sort (average) |
| O(n²)      | Quadratic    | Bubble sort, nested iteration    |
| O(2ⁿ)      | Exponential  | Recursive Fibonacci              |
| O(n!)      | Factorial    | All permutations                 |
