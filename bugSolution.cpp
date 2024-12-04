#include <iostream>

int main() {
  int x = 10;
  int y = 0;
  if (y != 0) {
    int z = x / y;
    std::cout << "Result: " << z << std::endl;
  } else {
    std::cout << "Error: Division by zero!" << std::endl;
  }
  return 0;
}
