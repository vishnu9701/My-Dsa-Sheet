#include <bits/stdc++.h>
using namespace std;

void Sort012(int arr[], int n)
{
   int low = 0, mid = 0, high = n - 1;

   while (mid <= high)
   {
      if (arr[mid] == 0)
      {
         swap(arr[mid++], arr[low++]);
      }
      else if (arr[mid] == 1)
      {
         mid++;
      }
      else
      {
         swap(arr[mid], arr[high--]);
      }
   }
}
int main()
{
   int arr[] = {0, 1, 0, 1, 1, 2, 0, 2};
   int n = sizeof(arr) / sizeof(arr[0]);
   Sort012(arr, n);
   for (auto i : arr)
   {
      cout << i << " ";
   }
}
