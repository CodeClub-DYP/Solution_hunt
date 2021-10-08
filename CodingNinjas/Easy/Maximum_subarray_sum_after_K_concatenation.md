Problem: [Link](https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381873)

Author: [@kr123Manish](https://github.com/kr123Manish)

```C++
#include <bits/stdc++.h>
long long kadanes(vector<int>arr,int n,int k){
    long long ans=INT_MIN;
    long long sum=0;
    for(int i=0;i<n*k;i++){
        sum=sum+arr[i%n];
        ans=max(ans,sum);
        if(sum<0){
            sum=0;
        }
    }
    return ans;
}


long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{   
    long long sum=accumulate(arr.begin(),arr.end(),0);
    long long ans=0;
    if(k==1){
        ans=kadanes(arr,n,k);
        return ans;
     }
    else if(sum<0){
        ans=kadanes(arr,n,2);
        return ans;
    }
    ans=kadanes(arr,n,2) + ((k-2)*sum);
        return ans;
    
}
```