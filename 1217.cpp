#include<iostream>
#include<cstdio>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    int i = 1,caso;
    cin>>caso;
    double din,gasto = 0.0,qtde = 0.0;
    string fruta,f;
    int n = caso;
    while(caso--)
    {
        cin>>din;
        gasto+=din;
        do{
            getline(cin,fruta);
        } while(fruta.size()==0);

        stringstream ss;

        ss<<fruta;
        int cont = 0;
        while(ss>>f){
            cont++;
        }
        printf("day %d: %d kg\n",i,cont);
        i++;
        qtde+=cont;
    }
    printf("%.2f kg by day\n",qtde/n);
    printf("R$ %.2f by day\n",gasto/n);

    return(0);
}
