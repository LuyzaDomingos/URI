#include<iostream>

using namespace std;
int main()
{
    int par[5] = {}, impar[5] = {};
    int ii = 0 ,pp = 0,entrada,j;

    for(int i = 0; i<15; i++){
        cin>>entrada;
        if(entrada % 2 == 0){
            par[pp] = entrada;
            pp++;
            if(pp == 5){
            for(j = 0; j<5; j++){
                cout<<"par["<<j<<"]"<<" = "<<par[j]<<endl;
           //     par[j] = NULL;
            }
                pp = 0;
            }
        }
        else{
            impar[ii] = entrada;
            ii++;
            if(ii == 5){
            for(j =0; j<5; j++){
                cout<<"impar["<<j<<"]"<<" = "<<impar[j]<<endl;
             //   impar[j] = NULL;
            }
            ii  = 0;
            }
        }
    }

     for(j = 0; j<ii; j++){
            cout<<"impar["<<j<<"]"<<" = "<<impar[j]<<endl;
        }
     for(int j = 0; j<pp; j++){
            cout<<"par["<<j<<"]"<<" = "<<par[j]<<endl;
        }

    return 0;
}
