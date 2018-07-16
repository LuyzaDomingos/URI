#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int h1,h2,m1,m2,horas,total;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    while(h1!=0 or h2!=0 or m1!=0 or m2!=0){
        horas = 60*h2+m2-(60*h1+m1);
    if(horas>=0){
        printf("%d\n",horas);
    }
    else{
        total = 1440+horas;
       printf("%d\n",total);
        }
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    }
    return(0);
}
