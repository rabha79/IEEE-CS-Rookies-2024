#include <iostream>
using namespace std;
long long input ;
bool reachvalue(long long num){
    if(input<num){
        return false;
    }else if(input ==num){
        return true;
    }else{
        return reachvalue(num*10)|| reachvalue(num*20);
    }
}
int main()
{
 long long n;
 cin>>n;
 while(n--){
    cin>>input;
    if(reachvalue(1)){
        cout<<"YES"<<endl;
    }else
    cout<<"NO"<<endl;
    }
 }

