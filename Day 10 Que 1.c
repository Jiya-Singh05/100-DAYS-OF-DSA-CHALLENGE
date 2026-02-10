/*Problem: Read a string and check if it is a palindrome using two-pointer comparison.
Input:
- Single line: string s
Output:
- Print YES if palindrome, otherwise NO
Example:
Input:
level
Output:
YES
Explanation: String reads same forwards and backwards*/
#include <stdio.h>
int main() {
   int n,ans=1;
   printf("Enter no. of chars:");
   scanf("%d", &n);
   char arr[n+1];
   printf("Enter a string (without gap): ");
   scanf("%s",arr);
   int left=0,right=n-1;
   while(left<right) {
       if(arr[left]!=arr[right]) {
           ans=0;
           break;
       }
       left++;
       right--;
   }
       if(ans==0) {
       printf("NO");
       }
        else 
       printf("YES");
   
   
    return 0;
}
