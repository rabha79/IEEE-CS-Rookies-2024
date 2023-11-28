#include <iostream>

using namespace std;

int main()
{
    int a,b;
    string s;
    cin>>a>>b;
    cin>>s;
    if(s[a]!='-'){
        cout<<"No";
        return 0;
    }
    int length = s.length();
    bool ch =0;
    for(int i=0;i<length;i++){
        if((s[i]<'0'||s[i]>'9')&& i!=a)
            ch=1;
    }
    if(ch==0)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
