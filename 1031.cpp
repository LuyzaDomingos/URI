#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n,m;

    while((cin>>n)&& n!=0){
        m = 1;
        while(true){
            vector<int> dados;
            for(int i  = 1; i<=n; i++){
                dados.push_back(i);
            }
        int pos = 0;
        while(dados[pos]!=13){
            dados.erase(dados.begin()+pos);
             pos +=(m-1);
             if(pos >= dados.size()){
                pos = pos%dados.size();
             }
        }

        if(dados.size()==1){
            cout<<m<<endl;
            break;
        }
        else{
            m++;
        }

        }
    }
    return 0;
}
