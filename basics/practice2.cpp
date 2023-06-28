#include<bits/stdc++.h>
using namespace std;
int main(){
    /*int a = 2;
    int b = 3;
    bool first = (a==b);
    cout<<first<<endl;
    bool second = (a>b);
    cout<<second<<endl;
    bool third = (a<b);
    cout<<third<<endl;
    bool fourth = (a>=b);
    cout<<fourth<<endl;
    bool fifth = (a<=b);
    cout<<fifth<<endl;
    bool sixth = (a!=b);
    cout<<sixth<<endl;
    int c = 0;
    cout<< !c <<endl;*/
    /*int n = -5;
    if(n>0){
        cout<<"n is positive"<<endl;
    }
    else{
        cout<<"n is negative"<<endl;
    }*/
    /*int a = 56;
    int b = 57;
    if(a>b){
        cout<<"a>b"<<endl;
    }
    else{
        cout<<"b>a"<<endl;
    }*/
    char ch;
    cout<<"Enter character "<<endl;
    cin>>ch;
    if (ch = 'a' - 'z'){
        cout<<"lowercase"<<endl;
    }
    else if (ch = 'A' - 'Z') {
            cout<<"Uppercase"<<endl;
    }
    else{
        cout<<"numerical"<<endl;
    }

    return 0;
}