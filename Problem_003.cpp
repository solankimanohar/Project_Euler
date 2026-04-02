// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int first = 0, second = 1, next = 0;
    long long limit = 600851475143;
    long long maxp = -1;
    while(limit%2 == 0){
        maxp = 2;
        limit /= 2;
    }
    while(limit%3 == 0){
        maxp = 3;
        limit /= 3;
    }
    for(long long i = 5; i*i <= limit; i += 6){
        while(limit % i == 0){
            maxp = i;
            limit /= i;
        }
        while(limit % (i+2) == 0){
            maxp = i+2;
            limit /= (i+2);
        }
    }
    if(limit>1){
        maxp = limit;
    }
    cout<<maxp;
}
