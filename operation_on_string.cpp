#include<iostream>

using namespace std;

int length_of_string(string str){
    int length=0;
    int i=0;
    while(str[i]!='\0'){
        length++;
        i++;

    }
    
    return length;
}

void concatenation(string &str1,string str2){
    
    cout<<"  concatenation of string 1 with string 2 "<<endl;
    str1=str1+str2;
    cout<<str1;

}

void reverse_string(string str){
   // cout<<"reverse of string is  ";
    for(int i=length_of_string(str)-1;i>=0;i--){
        cout<<str[i];

    }

}

void copy_string(string &str1,string str2){
    for(int i=0;i<length_of_string(str2);i++){
        str1[i]=str2[i];
    }
    cout<<str1;
}

int main (){
    string str1,str2;
    cout<<"enter a string 1 "<<endl;
    cin>>str1;
    cout<<"enter string 2"<<endl;
    cin>>str2;
    char operation;
    cout<<"enter operation like l for length of string, a for concatenation two string, r for reverse a string , c for copy a string"<<endl;
    cin>>operation;
    switch(operation){
        case 'l':
            cout<<"length of string 1 is  "<<length_of_string(str1)<<endl;
            cout<<"length of string 2 is  "<<length_of_string(str2)<<endl;
            break;
        case 'a':
            concatenation(str1,str2);
            break;
        case 'r':
            cout<<" reverse of string 1 is  ";
            reverse_string(str1);
            cout<<endl;
            cout<<" reverse of string 2 is  ";
            reverse_string(str2);
            break;
        case 'c':
            copy_string(str1,str2);
            break;
        default :
            cout<<"enter correct operation ";
        
        
    }
    return 0;


}