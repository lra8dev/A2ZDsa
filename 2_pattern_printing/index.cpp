#include <iostream>
using namespace std;

// 1. Square Pattern
void squarePattern() {
  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= 4; j++) {
      cout << " * ";
    }
    cout << "\n";
  }
}

// 2. Right Angle Triangle Pattern
void rightAngleTrianglePattern() {
  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
      cout << " * ";
    }
    cout << "\n";
  }
}

// 3. Right Angle Triangle Number Pattern
void rightAngleTriangleNumberPattern() {
  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    cout << "\n";
  }
}

// 4. Right Angle Triangle Same Number Pattern
void rightAngleTriangleSameNumberPattern() {
  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i;
    }
    cout << "\n";
  }
}

// 5. Inverted Right Angle Triangle Pattern
void invertedRightAngleTrianglePattern() {
  for (int i = 4; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << " * ";
    }
    cout << "\n";
  }
}

// 6. Inverted Right Angle Triangle Number Pattern
void invertedRightAngleTriangleNumberPattern() {
  for (int i = 4; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    cout << "\n";
  }
}

// 7. Start Pyramid Pattern
void startPyramidPattern() {
  for (int i = 1; i <= 4; i++) {
    for (int space = 1; space <= 4 - i; space++) {
      cout << " ";
    }
    for (int star = 1; star <= i * 2 - 1; star++) {
      cout << "*";
    }
    for (int space = 1; space <= 4 - i; space++) {
      cout << " ";
    }
    cout << "\n";
  }
}

// 8. Inverted Star Pyramid Pattern
void invertedStarPyramidPattern() {
  for (int i = 4; i >= 1; i--) {
    for (int space = 1; space <= 4 - i; space++) {
      cout << " ";
    }
    for (int star = 1; star <= i * 2 - 1; star++) {
      cout << "*";
    }
    for (int space = 1; space <= 4 - i; space++) {
      cout << " ";
    }
    cout << "\n";
  }
}

// 9. Diamond Star Pattern
void diamondStarPattern() {
  for (int i = 1; i <= 4; i++) {
    for (int space = 1; space <= 4 - i; space++) {
      cout << " ";
    }
    for (int star = 1; star <= i * 2 - 1; star++) {
      cout << "*";
    }
    for (int space = 1; space <= 4 - i; space++) {
      cout << " ";
    }
    cout << "\n";
  }
  for (int i = 3; i >= 1; i--) {
    for (int space = 1; space <= 4 - i; space++) {
      cout << " ";
    }
    for (int star = 1; star <= i * 2 - 1; star++) {
      cout << "*";
    }
    for (int space = 1; space <= 4 - i; space++) {
      cout << " ";
    }
    cout << "\n";
  }
}

int main() {
  squarePattern();
  rightAngleTrianglePattern();
  rightAngleTriangleNumberPattern();
  rightAngleTriangleSameNumberPattern();
  invertedRightAngleTrianglePattern();
  invertedRightAngleTriangleNumberPattern();
  startPyramidPattern();
  invertedStarPyramidPattern();
  diamondStarPattern();
  return 0;
}