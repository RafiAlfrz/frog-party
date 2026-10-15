#include <stdio.h>

int main() {
    int t;
    int n;
    int m;
    
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        scanf("%d %d", &n, &m);
          if((n*m) % 2 == 1){ 
            printf("Case #%d: Need more frogs\n"),tc;
        }
            else
            printf("Case #%d: Party time!\n",tc);
        
    }
    return 0;
 }
