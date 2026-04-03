#include<bits/stdc++.h>
using namespace std;
int main(){
    long long sum1 = 0, sum2 = 0;
    for(int i = 1; i <= 100; i++){
        sum1 += i;
    }
    long long square = sum1*sum1;
    for(int i = 1; i <= 100; i++){
        sum2 += (i*i);
    }
    long long diff = abs(square-sum2);
    cout<<diff;
    return 0;
}
// #Bonus
// Formula: Sum = n(n+1)/2 then sum1 = sum*sum 
// Formula: sum2 = Sum of squares = n(n+1)(2n+1)/6
// then diff = abs(sum1-sum2)
