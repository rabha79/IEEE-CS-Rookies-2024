#include <iostream>
#include <bits/stdc++.h>

using namespace std;
string binary (int& x){
    string rep="";
    while( x > 0){
        rep+=((x%2)+'0');
        x /=2;
    }
    reverse (rep.begin(), rep.end());
    return rep;
}
bool check_palindrome(string rep){
    int len=rep.length();
    for(int i=0,j=len-1;i<j;i++,j--){
        if(rep[i]!=rep[j]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int x;cin>>x;
    if(x%2==0){
        cout<<"NO\n";
        return 0;
    }
    else{
        string rep =binary(x);
        if(check_palindrome(rep)==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
