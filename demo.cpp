#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &nums, int k)
{
  for (int i = 0; i < nums.size(); i++)
  {
    if (k == nums[i])
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int n;
  cin >> n;

  vector<int> nums(n);

  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  int k;
  cin >> k;

  int elementPresent = linearSearch(nums, k);

  cout << "Element present at index " << elementPresent;
  return 0;
}