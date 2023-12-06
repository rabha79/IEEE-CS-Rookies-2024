#include <iostream>

using namespace std;
void print(int&x){
    for(int i=1;i<x;i++){
        cout<<i<<" ";
    }
    cout<<x;
}

int main()
{
   int x;
   cin>>x;
   print(x);
    return 0;
}
