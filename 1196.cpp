#include<iostream>
#include<string>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char frase[1000];
    char vetor[] = {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
    while(gets(frase))
    {
        for(int i = 0; i<strlen(frase); i++)
        {
            if(frase[i]!=' '){
                for(int j = 0; j<strlen(vetor); j++)
                {
                    if(frase[i]==vetor[j]){
                        frase[i] = vetor[j-1];
                        break;
                    }
                }
            }
        }
        cout<<frase<<endl;
    }

    return(0);
}
