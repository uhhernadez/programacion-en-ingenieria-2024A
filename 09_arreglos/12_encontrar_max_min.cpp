#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<int> nums {3, -1, -3, 8, 9, 10, -3, 0, 89, -189, 90};
  int min = nums[0];
  int max = nums[0];

  for (int n : nums) {
    if (n < min) {
      min = n;
    }

    if (n > max) {
      max = n;
    }
  }

  cout << "El minimo: " << min << " el maximo: " << max << endl;

}