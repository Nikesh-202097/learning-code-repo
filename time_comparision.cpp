#include <iostream>
#include <chrono>
#include <cstdlib>

using namespace std;
using namespace std::chrono;

int binary_search(int newarr[],int n,int key){
    int in_min=0,in_max=n,mid;//in_min is minimum index,in_max is maximum index
    while(in_min<n && in_max>=0){
        mid=(in_max + in_min)/2;
        if(newarr[mid]==key){
            //cout<<"position of key in array at  ";
            return (mid); 
        }
        else if(newarr[mid]>key){
            in_max=mid-1;
            
        }
        else if(newarr[mid]<key){
            in_min=mid+1;
        }
        
    }
    return -1;
}

int linear_search(int newarr[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if (newarr[i]==key)
        {
            return i;;
        }
        
    }
    return -1;

    
}

void swap(int arr[],int a,int b){
    int temp;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    
}

int partition(int arr[],int l,int h){//l=lower index and h is higher index of array
    int pivot;
    pivot=arr[h];// consider last element as pivot element
    int i=l-1;//i is used to track the index of correct postion of pivot
    for(int j=l;j<h;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,h);
    return(i+1);
}

int quick_sort(int arr[],int l, int h ){
    int i;//i is the index of correct postion of pivot
    if(l<h) {
        i= partition(arr,l,h);
        quick_sort(arr,l,i-1);
        quick_sort(arr,i+1,h);
         
    }
    return 0;
}

void buble_sort(int arr[],int n){
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp =arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;

            }
        }
        counter++;

    }
}


int main(){
    int arr[1000],newarr[1000];
    for(int i=0;i<1000;i++){
        arr[i]=(0+(rand()%1000));
    }
    for(int i=0;i<1000;i++){
        newarr[i]=arr[i];
    }
    

    auto start2 = high_resolution_clock::now();

    linear_search(newarr,1000,567);

    auto stop2 = high_resolution_clock::now();

    auto duration2 = duration_cast<nanoseconds>(stop2 - start2);
  
    cout << "Time taken by linear  search: "<< duration2.count() << " nanoseconds" << endl;
    
    

    auto start3 = high_resolution_clock::now();

    quick_sort(newarr,0,1000);

    auto stop3 = high_resolution_clock::now();

    auto duration3 = duration_cast<microseconds>(stop3 - start3);
  
    cout << "Time taken by quick sort: " << duration3.count() << " microseconds" << endl;
    
    

    auto start4 = high_resolution_clock::now();

    buble_sort(arr,1000);

    auto stop4 = high_resolution_clock::now();

    auto duration4 = duration_cast<microseconds>(stop4 - start4);
  
    cout << "Time taken by buble sort: "<< duration4.count() << " microseconds" << endl;
    
    
    auto start = high_resolution_clock::now();

    binary_search(newarr,1000,567);//pass sorted array

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<nanoseconds>(stop - start);
  
    cout << "Time taken by binary search: "<< duration.count() << " nanoseconds" << endl;



    return 0;







}