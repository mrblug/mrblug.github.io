#include <iostream>

int main(){
    int a, b, c, i, kase = 0;
    for(; scanf("%d%d%d", &a, &b, &c) == 3; ){
        printf("Case %d: ", ++kase);

        for(i = 10; i <= 100; ++i){
            if( !((i - a) % 3) && !((i - b) % 5) && !((i - c) % 7) )
                break;
        }
        i > 100 ? printf("No answer\n") :  printf("%d\n", i); ;
    }
    return 0;
}