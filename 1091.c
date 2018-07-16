#include<stdio.h>
int main()
{
    int caso,i;
    long long int ns,ol, x,y;
    scanf("%d",&caso);
    while(caso!=0)
    {
        scanf("%lld %lld",&ns,&ol);
        for(i = 0; i<caso; i++){
            scanf("%lld %lld",&x,&y);
            if(x==ns && y==ol){
                printf("divisa\n");
            }
            else if(x==ns && y!=ol){
             printf("divisa\n");
            }
             else if(x!=ns && y==ol){
             printf("divisa\n");
            }
            else if(x>ns && y>ol){
                printf("NE\n");
            }
            else if(x<ns && y>ol){
                printf("NO\n");
            }
            else if(x>ns && y<ol){
                printf("SE\n");
            }
            else {
                printf("SO\n");
            }

        }


       scanf("%d",&caso);
    }

    return 0;
}
