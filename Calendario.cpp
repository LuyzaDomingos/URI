#include<bits/stdc++.h>

using namespace std;

struct Data{
    int a,m,d;
};

    int mes[12] = {31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};

int bissexto(Data data)
{
    int ano = data.a;

    if(data.m<=2){
        ano--;
    }

    return ano/4 - ano/100+ano/400;
}

int diferenca(Data data1,Data data2)
{
    int soma1,soma2;

    soma1  = data1.a*365+data1.d;
    for(int i = 0; i<data1.m-1; i++){
        soma1+=mes[i];
    }
    soma1+=bissexto(data1);

    soma2  = data2.a*365+data2.d;
    for(int i = 0; i<data2.m-1; i++){
        soma2+=mes[i];
    }
    soma2+=bissexto(data2);


    return (soma2-soma1);
}

int main()
{
    Data data1,data2;

    scanf("%d:%d:%d",&data1.a,&data1.m,&data1.d);
    scanf("%d:%d:%d",&data2.a,&data2.m,&data2.d);
    cout<<abs(diferenca(data1,data2))<<endl;

    return 0;
}

