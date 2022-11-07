// Given an array of n integers where each value represents the number of chocolates in a packet.Each packet can have a variable number of chocolates.There are m students, the task is to distribute chocolate packets such that :

//     Each student gets one packet.The difference between the number of chocolates in the packet with maximum chocolates and packet with minimum chocolates given to the students is minimum.
// Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 
// Output: Minimum Difference is 2 
// Explanation:
// We have seven packets of chocolates and 
// we need to pick three packets for 3 students 
// If we pick 2, 3 and 4, we get the minimum 
// difference between maximum and minimum packet 
// sizes.

#include <bits/stdc++.h>
    using namespace std;

int min_diff(int arr[], int n, int m)
{
    int diff, m_diff = INT_MAX;

    if (m == 0 || n == 0)
        return 0;

    sort(arr, arr + n);

    if (n < m)
        return -1;

    for (int i = 0; i + m - 1 < n; i++)
    {
        diff = arr[i + m - 1] - arr[i];
        if (diff < m_diff)
            m_diff = diff;
    }
    return m_diff;
}

int main()
{
    int size, m;
    cout << "Enter size of array = ";
    cin >> size;

    int arr[size];
    cout << "Enter array elements\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number of students = ";
    cin >> m;

    cout << "Minimum Difference = " << min_diff(arr, size, m);

    return 0;
}