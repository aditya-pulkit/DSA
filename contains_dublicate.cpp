// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Input: nums = [1,2,3,1]
// Output: true

#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> set1;
    for (int value : nums)
    {
        set1.insert(value);
    }
    if (nums.size() == set1.size())
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    vector<int> inputVec;
    int n;
    cout << "Enter number of elements \n";
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        inputVec.push_back(x);
    }

    if (containsDuplicate(inputVec))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}