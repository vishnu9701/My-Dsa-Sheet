#include <bits/stdc++.h>
using namespace std;

int Kadane_Maximum_Sum(int arr[], int n)
{
   int csum = 0, maxsum = INT_MIN;

   for (int i = 0; i < n; i++)
   {
      if (csum < 0)
         csum = 0;
      csum +=arr[i];
      maxsum = max(csum, maxsum);
   }
   return maxsum;
}
int main()
{
   int arr[] = {1,2,4,-5,9,-6};
   int n = sizeof(arr) / sizeof(arr[0]);
   cout << Kadane_Maximum_Sum(arr, n);
}
