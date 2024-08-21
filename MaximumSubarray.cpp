// Kadane's Algorithm : Maximum Subarray Sum in an Array
#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n){
    long long maxi = LONG_MIN;
    long long sum = 0 ;

    for(int i =0; i < n; i++){
        sum+= arr[i] ;

        if(sum>maxi){
            maxi = sum ;
        }

        // If sum < 0: discard the sum calculated
        if(sum < 0){
            sum = 0 ;
        }
    }     

    if (maxi < 0) maxi = 0 ; // empty subarray

    return maxi;
}

int main(){
    int arr[] = {-2 ,1 , -3 , 4 , -1 , 2 , 1 , -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long maxSum = maxSubarraySum(arr , n);
    cout << " max subarray sum is: " << maxSum << endl;
    return 0 ;
}

//print the subarray with maximum sum
#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long maxi = LONG_MIN;
    long long sum = 0;

    int start = 0;
    int ansStart = -1;
    int ansEnd = -1;

    for (int i = 0; i < n; i++)
    {
        if(sum == 0){
            start = i;
        }

        sum += arr[i];

        if (sum > maxi)
        {
            maxi = sum;

            ansStart = start;
            ansEnd = i ;
        }

        // If sum < 0: discard the sum calculated
        if (sum < 0)
        {
            sum = 0;
        }
    }

    if (maxi < 0)
        maxi = 0; // empty subarray

    cout << "The subarray is " ;
    for(int i = ansStart ; i<= ansEnd ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return maxi;
}

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long maxSum = maxSubarraySum(arr, n);
    cout << " max subarray sum is: " << maxSum << endl;
    return 0;
}
