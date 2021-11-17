#include<iostream>
#include<cmath>

using namespace std;

void swap_call_by_value (int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"numbers after swapping call by value  "<<a<<" ,"<<b<<endl;
}

void swap_call_by_ref (int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"numbers after swapping call by reference "<<a<<" ,"<<b<<endl;
}

int main(){
    int x,y;
    cout<<"enter number that will be swap  "<<endl;
    cin>>x>>y;
    swap_call_by_value(x,y);
    cout<<"numbers after swapping call by value  outside swapping function "<<x<<" ,"<<y<<endl;
    swap_call_by_ref(x,y);
    cout<<"numbers after swapping call by reference outside swapping function  "<<x<<" ,"<<y<<endl;

    return 0;
    
}