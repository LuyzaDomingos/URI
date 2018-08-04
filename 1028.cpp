#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int mdc(int a,int b);

int main()
{
    int a,b,caso;
    sf("%d",&caso);
    for(int i = 0; i<caso; i++){
       sf("%d %d",&a,&b);
        pf("%d\n",mdc(a,b));
    }

    return 0;
}

int mdc(int a,int b)
{
    int resto = 0;

    while(b%a!=0){
        resto = a;
        a = b%a;
        b = resto;
    }
    return a;
}
