#include<iostream>
#include<stack>

using namespace std;

int precedence(char c){
    if(c=='^'){
        return 3;
    }
    else if (c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else 
        return -1; //for brakets
}


string infix_to_postfix(string s){
    stack<char> str;
    string res;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            res=res+s[i];
        }
        else if(s[i]=='('){
            str.push(s[i]);
        }
        else if(s[i]==')'){
            while(!str.empty() && str.top()!='('){
                res=res+str.top();
                str.pop();
                 
            }
            if(!str.empty()){
                str.pop();
            }
        
        }
        else{
            while(!str.empty() && precedence(str.top())>precedence(s[i])){
                res=res+str.top();
                str.pop();
            }
            str.push(s[i]);
        }
        

    }
    while(!str.empty()){
        res=res +str.top();
        str.pop();
    }
    return res;
    
}



int main(){
   string s;
   cout<<"enter the infix expression "<<endl;
   cin>>s;
   cout<<"postfix expression  "<<infix_to_postfix(s);


   return 0;
    
}