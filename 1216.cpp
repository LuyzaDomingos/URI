#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    double dist,soma;
    string nome;
    int num,cont=0;
    while(getline(cin,nome)>0)
    {
        cont++;
        scanf("%d",&num);
        soma+=num;
    }
    printf("%.1f\n",soma/cont);

    return(0);
}
