# HashMap

## Overview
A **HashMap** (or unordered_map in C++) is a data structure that stores key-value pairs and provides fast access, insertion, and deletion operations using a hash function. It uses hashing to map keys to their corresponding values.

## C++ Implementation
1. In C++, HashMap is implemented as `std::unordered_map` from the `<unordered_map>` header.

```cpp
#include <unordered_map>
#include <iostream>
using namespace std;

int main() {
    unordered_map<int, string> map;
    
    // Insert
    map[1] = "One";
    map[2] = "Two";
    map.insert({3, "Three"});
    
    // Access
    cout << map[1] << endl;
    
    // Search
    if(map.find(2) != map.end()) {
        cout << "Key found" << endl;
    }
    
    // Delete
    map.erase(1);
    
    return 0;
}
```

2. Custom hashmap using an Array, [see this program](./index.cpp)

## Time Complexity

| Operation | Average Case | Worst Case |
|-----------|-------------|------------|
| Insert    | O(1)        | O(n)       |
| Delete    | O(1)        | O(n)       |
| Search    | O(1)        | O(n)       |
| Access    | O(1)        | O(n)       |

**Note:** Worst case O(n) occurs when all keys collide and form a chain.

## Space Complexity
- **O(n)** where n is the number of key-value pairs stored in the HashMap.
- Additional space is used for the hash table buckets.

## Key Features
- **Unordered:** Elements are not stored in any particular order
- **Unique Keys:** Each key must be unique
- **Fast Lookups:** Average O(1) time for basic operations
- **Hash Function:** Uses hash function to compute bucket index
