#include <stdio.h>

int main(void)
{
    int N,total,a,b,c=0;
    bool check=false;
    
    scanf("%d",&N);
    
    for (a = 1; a <= N/900; a++){
        for(b = 2; b<=N/750; b+=2){
            for(c = 1; c<=N/200; c++){
                total = a*900 + b*750 + c*200;
                
                if (total==N){
                    if(c < a || c < b){
                        printf("%d %d %d\n", a, b, c);
                        check=true;
                    }
                }
            
            }    
        }            
    }
    if(!check)
        printf("none\n");
        
    return 0;
}
