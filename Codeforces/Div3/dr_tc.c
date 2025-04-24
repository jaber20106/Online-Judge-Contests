#include<stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){

        int n;
        char s[15];
        int count = 0;

        scanf("%d",&n);
        scanf("%s",s);

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                count++;
            }
        }

        int total_ones = count * (n - 2) + n;

        printf("%d\n",total_ones);
        
    }

    return 0;
}