/*Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

Input:
- First line: integer p (number of entries in server log 1)
- Second line: p sorted integers representing arrival times from server 1
- Third line: integer q (number of entries in server log 2)
- Fourth line: q sorted integers representing arrival times from server 2)

Output:
- Print a single line containing all arrival times in chronological order, separated by spaces

Example:
Input:
5
10 20 30 50 70
4
15 25 40 60

Output:
10 15 20 25 30 40 50 60 70

Explanation: Compare the next unprocessed arrival time from both logs and append the earlier one to the final log until all entries are processed*/
#include <stdio.h>
#include <stdlib.h>
int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
   int a,b,j=0;
   
   scanf("%d",&a);
   scanf("%d",&b);
   int arr1[a+b];
   int arr2[b];
   for(int i=0;i<a;i++) scanf("%d",&arr1[i]);
   for(int i=0;i<b;i++) scanf("%d",&arr2[i]);
   
   for(int i=0;i<b;i++) {
       arr1[a+i]=arr2[j];
       j++;
   }
    qsort(arr1, a+b, sizeof(arr1[0]), comp);
    
    for(int i=0;i<a+b;i++) printf("%d ",arr1[i]);
   return 0;
}
