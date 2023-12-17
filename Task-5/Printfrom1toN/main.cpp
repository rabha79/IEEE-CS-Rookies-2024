#include <iostream>
using namespace std;
int counter=1;
void asscending(int num){
    if(num==0){
        return;
    }
    cout<<counter++<<endl;
    return asscending(num-1);
}
int main()
{
    int num;
    cin>>num;
    asscending(num);
    return 0;
}
