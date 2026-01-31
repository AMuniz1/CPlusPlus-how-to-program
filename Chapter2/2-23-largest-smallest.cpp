/*2.23 (Largest and Smallest Integers) Write a program that
reads in five integers and determines and prints the largest and
the smallest integers in the group. Use only the programming
techniques you learned in this chapter.
*/
#include <iostream>
using std::cout;
using std::cin;

int main(int argc, char const *argv[]) {
  int integer1, integer2, integer3, integer4, integer5;
  int largest, smallest;
  cout << "Enter five integers\n";
  cin >> integer1 >> integer2 >> integer3 >> integer4 >> integer5;

  largest = integer1;
  smallest = integer1;
  if (integer2 > largest)
      largest = integer2;
  if (integer2 < smallest)
      smallest = integer2;

  if (integer3 > largest)
      largest = integer3;
  if (integer3 < smallest)
      smallest = integer3;

  if (integer4 > largest)
      largest = integer4;
  if (integer4 < smallest)
      smallest = integer4;

  if (integer5 > largest)
      largest = integer5;
  if (integer5 < smallest)
      smallest = integer5;

  /* If array was permited
   * int nums[5] = { integer1, integer2, integer3, integer4, integer5 };


   int max = nums[0];
   int min = nums[0];


   for (int i = 1; i < 5; ++i) {
    if (nums[i] > max) max = nums[i];
    if (nums[i] < min) min = nums[i];
   }
   */
  cout << "The largest is " << largest << " and the smallest is " << smallest << "\n";

  return 0;
}
