#include<bits/stdc++.h>
using namespace std;
int mmc(long long int num1, long long int num2);

int main()
{
    long long int a,b,c,ano,tres = 0,data =0;


    while(scanf("%lld %lld %lld %lld",&ano,&a,&b,&c)!=EOF){
        tres = mmc(a,mmc(b,c));
        data   = tres-ano;
    cout<<data<<endl;
    tres = 0;
    data  = 0;

    }

    return 0;

}


int mmc(long long int num1, long long int num2)
{
   int resto, a,b;
    a = num1;
    b = num2;

   do{
        resto = a%b;
        a=b;
        b = resto;
   } while(resto!=0);
   return(num1*num2)/a;

}
