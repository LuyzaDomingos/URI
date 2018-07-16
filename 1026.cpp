#include<iostream>
#include<bitset>
#include<cstdio>

using namespace std;

int main()
{
        unsigned int v1,v2;
        while(scanf("%u %u",&v1,&v2)!=EOF)
        {
            bitset<32> val1;
            val1 = v1;
            bitset<32> val2;
            val2 = v2;
            bitset<32> soma ;
            soma = v1^v2;
            cout<<soma.to_ulong()<<endl;
        }

    return(0);
}
