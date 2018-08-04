#include<bits/stdc++.h>
#define MAX 1000000

using namespace std;

int distancia[MAX],marcacao[MAX];

int main()
{
    int origem,destino,k;
    queue<int>fila;

    while((cin>>origem>>destino>>k), origem || destino || k){
            memset(distancia,-1,sizeof(distancia)); //preenchendo o vetor com 1
            memset(marcacao,0,sizeof(marcacao)); //preenchendo o vetor com 0; vetor  que indica os vertices marcados
        for(int i = 0; i<k; i++){
            int nqpassar;
            cin>>nqpassar;
            marcacao[nqpassar] = 1; //vértices pelo qual não quer passar; marcado
        }


    distancia[origem] = 0; //vértice inicial; origem foi marcada
    fila.push(origem); //colocando na fila o vértice inicial


    //BFS
        while(!fila.empty()){
            if(distancia[destino]!= -1){
                break; // se for diferente de -1 significa que não pode chegar até destino final
            }
            int v = fila.front();
            fila.pop();
            if(!marcacao[v+1] && v+1<=100000 && distancia[v+1]== -1){
                distancia[v+1] = distancia[v]+1;
                fila.push(v+1);
            }
            if(!marcacao[v-1]&& v-1>0 && distancia[v-1]==-1){
                distancia[v-1] = distancia[v]+1;
                fila.push(v-1);
            }
            if(v*2<=100000 && !marcacao[v*2] && distancia[v*2]==-1){
                distancia[v*2] = distancia[v]+1;
                fila.push(v*2);
            }
            if(v*3<=100000 && !marcacao[v/2] && distancia[v*3]==-1){
                distancia[v*3] = distancia[v]+1;
                fila.push(v*3);
            }
            if(v%2==0 && !marcacao[v/2] && distancia[v/2]==-1){
                distancia[v/2] = distancia[v]+1;
                fila.push(v/2);
            }

        }

    cout<<distancia[destino]<<endl;

    }

  return 0;
}
