#include <bits/stdc++.h>
void sort012(int *arr, int n) {

   int i = 0, k = 0;
   int j = n - 1;

   while (k <= j) {
      if (arr[k] == 0) {
         swap(arr[i], arr[k]);
         i++;
         k++;
      } else if (arr[k] == 2) {
         swap(arr[k], arr[j]);
         j--;
      } else {
         k++;
      }
   }
}