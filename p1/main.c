#include <stdio.h>

int main(void)
{
    int N,total,a,b,c=0;
    bool check=false;
    
    scanf("%d",&N);
    
    for (a = 1; a*900 <= N; a++){
        for(b = 2; b*750<=N-a*900; b+=2){
            for(c = 1; c*200<=N-a*900-b*750; c++){
                total = a*900 + b*750 + c*200;
                
                if (total==N){
                    if(c <= a || c <= b){
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
