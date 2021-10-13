#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void countsort(int arr[], int n , int exp)
{
    int i,j,count[10],output[n] ;
     memset(count,0,sizeof(count));
     for ( i = 0; i < n; i++)
     {
         count[(arr[i]/exp)%10]++;
     }
     for ( i = 1; i < 10; i++)
     {
         count[i]=count[i]+count[i-1] ;
     }
     for ( i = n-1; i >=0; i--)
     {
         output[count[(arr[i]/exp)%10]-1]= arr[i];
         count[(arr[i]/exp)%10]-- ;
     }
     for ( i = 0; i < n; i++)
     {
         arr[i]=output[i];
     }
     
}
void radixsort(int arr[], int n)
{
   int max=arr[0], i,j;
   for ( i = 1; i < n; i++)
   {
       if (max<arr[i])
       {
           max=arr[i] ;
       }
   }
   for (int  exp = 1; max/exp >0 ; exp*=10 )
   {
       countsort(arr, n ,exp );
   }
     
}
int main()
{
    int arr[]={123,345,546,23,56,65,456,6,567,43,5}, n=sizeof(arr)/sizeof(int) ,i;
    printf("Array entered :  \n");
     for ( i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    radixsort(arr,n);
    printf("\n Radix sorted array :  \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    
}
