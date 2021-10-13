#include <bits/stdc++.h>
using namespace std;

//Function to Heapify the array
max_heap(int arr[],int i,int size){
    int l=(2*i)+1;
    int r=(2*i)+2;
    int largest;
    if(l<size && arr[l]>arr[r]){
        largest=l;
    }
    else{
        largest=i;
    }
    if(r<size && arr[r]>arr[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        max_heap(arr, largest, size);
    }
}

//Function to build the heap
build_heap(int arr[],int size){
    for(int i=(size/2)+1; i>=0; i--){
        max_heap(arr, i, size);
    }
}

//Function to sort element using heap
heap_sort(int arr[],int size){
    for(int i=size-1; i>=0; i--){
        swap(arr[0],arr[i]);
        size=size-1;max_heap(arr, 0, size);
    }
}

int main(){
    //Original array
    int arr[]={5,2,1,3,18,8,7,6,12,4,55,31,90,43,99};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"Original Array:"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    build_heap(arr,size);
    cout<<"Array after heapifying:"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    heap_sort(arr,size);
    cout<<"Array after heap-sort:"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}