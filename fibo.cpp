#include<bits/stdc++.h>
using namespace std;

int fibonachi(int n)
{
    int i=0,j=1,a(0),u;
    int f=1;

    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
 {
     while(a<=n)
 {


        u=i+j;
        i=j;
        j=u;
        a++;

 }
 return u;

}

