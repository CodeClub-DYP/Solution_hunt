Problem: [Link](https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381875)

Author: [@Magnetar111](https://github.com/Magnetar111)

```C++
void swap(int arr[], int a, int b){

   int temp = arr[a];

   arr[a]=arr[b];

   arr[b] = temp;

}
void sort012(int *arr, int n)

{

  //   Write your code here

   int i=0;

   int j=0;

   int k=n-1;

   while(j<=k){

       switch (arr[j])

       {

       case 0:

           swap(arr[i++],arr[j++]);

           break;       

       case 1:

           j++;

           break;

       case 2:

           swap(arr[j],arr[k--]);

           break;

       }

   }

}
```


