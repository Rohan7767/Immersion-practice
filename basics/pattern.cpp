#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 234, m=n,k=0;
    while (n>0)
    {
        if(m%(n%10) == 0){k++;}
        n = n/10;
    }
    cout<<k<<endl;
    return 0;
}
