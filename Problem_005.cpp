#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n = 1;
    while(true){
        bool alld = true;
        for(int i = 1; i <= 20; i++){
            if(n%i != 0){
                alld = false;
                break;
            }
        }
        if(alld){
            cout<<n;
            break;
        }
        n += 1;
    }
    return 0;
}
