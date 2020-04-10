#include<bits/stdc++.h>
using namespace std;


bool isSubsetSum(int arr[] , int n , int sum)
{
    int T[n+1][sum+1];
    for(int j = 1 ; j<=sum ; j++)
    T[0][j]=0;
    
    for(int i =0 ; i<=n; i++)
    T[i][0] = 1;
    
    for(int i =1 ; i<=n ; i++)
    {
        for(int j =1 ; j<=sum ; j++)
        {
            if(arr[i-1] > j)  //array mein index 0 se so i-1
            T[i][j] = T[i-1][j];
             
            else
            T[i][j] = T[i-1][j] || T[i-1][j-arr[i-1]];
        }
    }
    for (int i = 0; i <= n; i++) 
     { 
       for (int j = 0; j <= sum; j++) 
          printf ("%4d", T[i][j]); 
       printf("\n"); 
     }
     cout << T[n][sum] << "----";
    return T[n][sum];
}
int main() 
{ 
  int arr[] = {2 , 2, 3}; 
  int sum = 5; 
  int n = sizeof(arr)/sizeof(arr[0]);
  
  if (isSubsetSum(arr, n, sum) == 1) 
     printf("Found a subset with given sum"); 
  else
     printf("No subset with given sum"); 
  return 0; 
} 
