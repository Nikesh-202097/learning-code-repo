// binary search  by iteration
#include<iostream>

using namespace std;

int binary_search(int arr[],int n,int key){
    int in_min=0,in_max=n,mid;//in_min is minimum index,in_max is maximum index
    while(in_min<n && in_max>=0){
        mid=(in_max + in_min)/2;
        if(arr[mid]==key){
            cout<<"position of key in array at  ";
            return (mid); 
        }
        else if(arr[mid]>key){
            in_max=mid-1;
            
        }
        else if(arr[mid]<key){
            in_min=mid+1;
        }
        
    }
    return -1;
}

int main(){
    int n=5,key,result;
    int array[5];
    cout<<"enter a  sorted array  ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"enter element(key) want to find ";
    cin>>key;
    result= binary_search(array,n,key);
    if (result==-1){
        cout<<"element does not found in array";
    }
    else {
        cout<<"array["<<result<<"]";
    }
        
    return 0;
}