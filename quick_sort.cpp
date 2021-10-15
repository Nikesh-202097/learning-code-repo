//quick sorting by using  recursion
#include<iostream>

using namespace std;

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
        
    

}

int main(){
    int n=6,arr[6];
    cout<<"enter an array of size 6 " <<endl;
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    quick_sort(arr,0,5);
    cout<<"sorted array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}