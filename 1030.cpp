#include<bits/stdc++.h>
using namespace std;

int f(int n, int k);

int main()
{
    int n,k,caso;
    cin>>caso;
    for(int i =1 ; i<=caso; i++){
        cin>>n>>k;
        cout<<"Case "<<i<<": ";
        cout<<f(n,k)<<endl;
    }

    return 0;
}

int f(int n, int k){

    if(n==1) return 1;
     return (((f(n-1,k) + k-1)%n)+1);
}

