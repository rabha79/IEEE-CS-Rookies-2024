#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    double midx1 =(x1+x2)/2;
    double midy1 =(y1+y2)/2;
    double midx2 =(x3+x4)/2;
    double midy2 =(y3+y4)/2;
    double r1=sqrt(pow(x1-x2,2)+pow(y1-y2,2))/2;
    double r2=sqrt(pow(x3-x4,2)+pow(y3-y4,2))/2;
    double line=sqrt(pow(midx1-midx2,2)+pow(midy1-midy2,2));
    double ra=r1+r2;
    if(line>ra){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    return 0;
}
