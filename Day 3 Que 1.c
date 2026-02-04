/*Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.
Input:
- First line: integer n (array size)
- Second line: n space-separated integers
- Third line: integer k (key to search)
Output:
- Line 1: "Found at index i" OR "Not Found"
Line 2: "Comparisons = c"

Example:
Input:
5
10 20 30 40 50
30
Output:
Found at index 2
Comparisons = 3

Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)*/
#include <stdio.h>
int main() {
   
   int comparison=0,n,i,k,found;
   printf("Enter a number:");
   scanf("%d",&n);
   int arr[n];
   printf("Enter elements:\n");
   for(i=0;i<n;i++) {
       scanf("%d",&arr[i]);
   }
   printf("Enter number you want to find:");
   scanf("%d",&k);
   
   for(i=0;i<n;i++) {
       if(arr[i]==k) found=i;
   }
   comparison=found+1;
   printf("Found at index:%d\n",found);
   printf("Comparisons:%d", comparison);
   
   
    return 0;
}
