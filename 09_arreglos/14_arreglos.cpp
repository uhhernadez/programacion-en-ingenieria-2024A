#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<int> nums{58, 14, 13, 15, 63, 9, 8, 81, 1, 78};
  vector<int> first(5);
  vector<int> second(5);
  first[0] = nums[0];
  first[1] = nums[1];
  first[2] = nums[2];
  first[3] = nums[3];
  first[4] = nums[4];

  second[0] = nums[5];
  second[1] = nums[6];
  second[2] = nums[7];
  second[3] = nums[8];
  second[4] = nums[9];

  cout << "First: ";
  for (int j:first) {
    cout << j << ",";
  }
  cout << endl;

  cout << "Second: ";
  for (int j:second) {
    cout << j << ",";
  }
  cout << endl;
  for (int n = 0; n< nums.size(); n++) {
    if (n < first.size()) {
      cout << n << endl;
      first[n] = nums[n];
    } else {
      int i = n - first.size();
      cout << i << " " << n << endl;
      second[i] = nums[n];
    }
  }

  cout << "First: ";
  for (int j:first) {
    cout << j << ",";
  }
  cout << endl;

  cout << "Second: ";
  for (int j:second) {
    cout << j << ",";
  }
  cout << endl;


}