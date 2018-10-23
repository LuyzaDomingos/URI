#include<bits/stdc++.h>

using namespace std;

struct tipoNo{
    int conteudo;
    tipoNo* esq;
    tipoNo* dir;
};

//typedef struct tipoNo *tipoABP;

// cria novo no
tipoNo* novo(int conteudo){
    tipoNo* novoNo = new tipoNo();
    novoNo -> conteudo = conteudo;
    novoNo -> esq = NULL;
    novoNo -> dir = NULL;
    return novoNo;
}

tipoNo* inserir(tipoNo* T, int dado){
    if(T == NULL){
        return novo(dado);

    }
    else if(dado <= T->conteudo){
        T->esq = inserir(T->esq, dado);
    }
    else{
        T ->dir = inserir(T->dir, dado);
    }

    return T;
}

void PreOrdem(tipoNo* T){
    if(T !=NULL){
        cout<<" "<<T->conteudo;
        PreOrdem(T->esq);
        PreOrdem(T->dir);
    }
}

void InOrdem(tipoNo* T){
    if(T !=NULL){
        InOrdem(T->esq);
        cout<<" "<<T->conteudo;
        InOrdem(T->dir);
    }
}

void PosOrdem(tipoNo* T){
    if(T !=NULL){
        PosOrdem(T->esq);
        PosOrdem(T->dir);
        cout<<" "<<T->conteudo;
    }
}

int main(){

    int caso,qtde, c = 1,arv;

    cin>>caso;
   // tipoNo * Noarv = NULL;

    for(int i = 0; i<caso; i++){
        cin>>qtde;
		tipoNo* Noarv = NULL;

        for(int j = 0; j<qtde; j++){
            cin>>arv;
            Noarv = inserir(Noarv,arv);
        }

        cout<<"Case "<<c<<":"<<endl;
        cout<<"Pre.:";
        PreOrdem(Noarv);
        cout<<"\n";
        cout<<"In..:";
        InOrdem(Noarv);
        cout<<"\n";
        cout<<"Post:";
        PosOrdem(Noarv);
        cout<<"\n";
        c++;
        cout<<endl;
    }
return 0;

}
