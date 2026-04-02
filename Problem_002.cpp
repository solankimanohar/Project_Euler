// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int first = 0, second = 1, next = 0;
    long long limit = 4000000;
    long long sum = 0;
    while(next <= limit){
        next = first+second;
        if(next > limit){
            break;
        }
        if(next%2 == 0){
            sum += next;
            cout<<next<<" ";
        }
        first = second;
        second = next;
    }
    cout<<sum;

    return 0;
}
