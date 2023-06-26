#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    else{
        return gcd(b%a, a);
    }
}
int main(){
    int n = 10;
    for(int i = 1; i<= n-1; i++){
        int gcd = gcd(i, n);
        if(gcd ==1){
            result++;
            return result;
        }
    }
    cout<<"Phi value of"<<n<<"is"<<result++<<endl;
	return 0;
}
