#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;
int main()
{
    int n,k,m ,valor_n,valor_k,valor_m;

    //int valores[22];
    //scanf("%d %d %d",&n,&k,&m);

    while((cin>>n>>k>>m)&& n !=0 && k!=0 && m!=0){
         vector<int> valores = {n};

            //preenchimento do array
        for(int i = 1; i<=n; i++){
            valores.push_back(i);
        }

        valor_n = n;
        int d = n;
        int e = 1;

        while(valor_n){
            // valor_k e valor_m tem que sempre serem reninciados assim que o "double while" acabar
            valor_k = k;
            valor_m = m;

            //anda no array
            while(valor_k--){
                 d = (d+n) % n +1;
                    while(valores[d] == -1){
                        d = (d+n) % n +1;
                }
            }
            while(valor_m--){
                e = (e - 2 + n) % n+1;
                   while(valores[e]== -1){
                    e = (e - 2 + n) % n+1;
                }
            }

           printf("%3d",d);
           valor_n--;
            if(d != e){
                printf("%3d",e);
                valor_n--;
            }
            //coloca  -1 nas posições que já sairam
                valores[d] = -1;
                valores[e] = -1;
            if(valor_n){
                cout<<",";
            }

        }
        cout<<endl;
    }

    return 0;
}
