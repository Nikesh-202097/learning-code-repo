#include<iostream>>

using namespace std;

void add(int tabl1[][2],int tabl2[][2],int m,int n){
    int res[3][2];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res[i][j]=tabl1[i][j]+tabl2[i][j];
        }
    }
    cout<<"output table"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<"  ";
        }
    }
    return;
}

void subt(int tabl1[][2],int tabl2[][2],int m,int n){
    int res[3][2];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res[i][j]=tabl1[i][j]-tabl2[i][j];
        }
    }
    cout<<"output table"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<"  ";
        }
    }
    return;
}

void mult(int tabl1[][2],int tabl2[][2],int m,int n){
    int res[3][2];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res[i][j]=tabl1[i][j]*tabl2[i][j];
        }
    }
    cout<<"output table"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<"  ";
        }
    }
    return;
}

void trans(int tabl1[][2],int m,int n){
    int res[2][3];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res[j][i]=tabl1[i][j];
        }
    }
    cout<<"output table"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<res[i][j]<<"  ";
        }
    }
    return;
}

int main(){
    int m=3,n=2;
    int tabl1[3][2],tabl2[3][2];
    cout<<"enter fist table"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>tabl1[i][j];
        }
    }
    cout<<"enter second table"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>tabl2[i][j];
        }
    }
    char oper;//a for addition operation,s for subtraction operation
    //m for multiplication operation, t for transpose operation
    cout<<"enter operation that can perform" << "a for addition operation,s for subtraction operation "
    <<",m for multiplication operation, t for transpose operation "<<endl;
    cin>>oper;
    if(oper=='a'){
      add(tabl1,tabl2,m,n);
    }
    else if(oper=='s'){
      subt(tabl1,tabl2,m,n);
    }
    else if(oper=='m'){
      mult(tabl1,tabl2,m,n);
    }
    else if(oper=='t'){
      trans(tabl1,m,n);
    }
    else {
        cout<<"enter correct operation";
    }
    return 0;
}