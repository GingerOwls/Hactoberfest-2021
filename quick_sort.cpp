#include <iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int pIndex = start;
    int pivot = arr[end];
    for(int i=start; i<end ;i++){
        if(arr[i]<=pivot){
            int temp=arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }
    int temp=arr[pIndex];
    arr[pIndex]=arr[end];
    arr[end]=temp;
    return pIndex;
}

void quickSort(int arr[],int start,int end){
    if(start<end){
        int pIndex = partition(arr,start,end);
        quickSort(arr,start,pIndex-1);
        quickSort(arr,pIndex+1,end);
    }
}

int main() {
    int arr[] = {5,4,6,3,1,2};
    for(int i=0;i<6;i++)
        cout << arr[i] << " ";
   cout << "\n\n" ;
    quickSort(arr,0,5);
    for(int i=0;i<6;i++)
        cout << arr[i] << " ";
    return 0;
}