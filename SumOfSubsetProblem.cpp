#include<bits/stdc++.h>

bool isSubsetSum(int arr[] , int n , int sum)
{
    if(sum == 0)
    return true;
    if(n == 0 && sum!= 0)
    return false;
    
    bool include = isSubsetSum(arr , n-1 , sum-arr[n-1]);
    bool exclude = isSubsetSum(arr , n-1 , sum);
    
    return include || exclude;
}
int main() 
{ 
  int arr[] = {13, 34, 11, 12, 15, 12}; 
  int sum = 9; 
  int n = sizeof(arr)/sizeof(arr[0]); 
  if (isSubsetSum(arr, n, sum) == true) 
     printf("Found a subset with given sum"); 
  else
     printf("No subset with given sum"); 
  return 0; 
} 
