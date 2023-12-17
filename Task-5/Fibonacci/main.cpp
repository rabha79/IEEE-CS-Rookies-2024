#include <iostream>
using namespace std;
long long fibonacci(long long num){
    if(num==1){
        return 0;
    }else if(num==2){
        return 1;
    }else{
        return fibonacci(num-1)+fibonacci(num-2);
    }
}

int main()
{
    long long num;
    cin>>num;
    cout<<fibonacci(num);
    return 0;
}
