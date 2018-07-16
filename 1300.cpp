#include<iostream>
using namespace std;
int main()
{
    int valor;
    while((cin>>valor)>0)
    {
        if(valor%6==0){
            cout<<"Y"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
    }

    return(0);
}
