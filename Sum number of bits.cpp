#include <iostream>

int main() {
  // Declare a variable to store the number
  unsigned long long num;

  // Read the number from the user
  std::cout << "Enter a number: ";
  std::cin >> num;

  // Initialize a variable to store the sum of the bits
  int sum = 0;

  // Loop through all the bits of the number
  for (int i = 0; i < 20; i++) {
    // Get the value of the ith bit and add it to the sum
    sum += (num >> i) & 1;
  }

  // Print the sum of the bits
  std::cout << "Sum of bits: " << sum << std::endl;

  return 0;
}
