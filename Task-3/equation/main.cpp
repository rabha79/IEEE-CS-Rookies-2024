#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long power(long long x,long long val){
long long result =1;
for(int i=1;i<=val;i++){
    result *=x;
}
return result;
}
int main()
{
long long x,n;
cin>>x>>n;
long long s=0;
for(int i=2;i<=n;i+=2){
    s+=power(x,i);
}
cout<<s;
    return 0;
}
