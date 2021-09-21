#include<iostream>
using namespace std;

int main(){
    int value;
    cin>>value;
    int a[1][3];
    for(int i=0;i<1;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    int i,j;
    for( i=0;i<1;i++){
        for( j=0;j<3;j++){
            if(value==a[i][j]){
               cout<<"positon of value in array a["<<i<<"]["<<j<<"]";
               break;
            }      
        }
    }
    if(i==1 && j==3){
        cout<<"value not in array";
    }

    

    return 0;
}
