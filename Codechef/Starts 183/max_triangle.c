#include<stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
    
        int found = 0;
    
        for(int i = n; i >= 3; i--){
            int a = n-2;
            int b = n-1;
            int c = n;
            
            if(a + b > c){
                printf("%d\n", a + b + c);
                found = 1;  
                break;
            }
    
        }
        if(found == 0)printf("-1\n");
    
    
    }


    return 0;
}