#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<stack>

using namespace std;

int main()
{
    char frase[100002];
    //string frase;
    stack<char> pilha;
    int tam = 0;
    while(cin>>frase){
            tam = strlen(frase);
        for(int i = 0; i<tam; i++){
            if(frase[i] == '('){
                pilha.push(frase[i]);
               }
            else if(frase[i] == ')'){
                //if(pilha.top()== '('){
                   // pilha.pop();
                  // } estava causando  RUNTIMEERROR
                  if(!pilha.empty() || frase[i] == '('){
                        pilha.pop();
                  }

                   else{
                        pilha.push(frase[i]);
                   }
            }
        }
        if(pilha.empty()){
            cout<<"correct"<<endl;
        }
        else{
            // a mensagem será mostrada de todo jeito. Só que antes a limpa é "limpa" para ñ volte com conteúdo na memória
           while(!pilha.empty()){
               pilha.pop();
            }
            cout<<"incorrect"<<endl;
        }
    }

    return 0;
}
