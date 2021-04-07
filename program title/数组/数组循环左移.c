#include <stdio.h>
int main()
{
    int n, m, i, add[100];
    scanf("%d %d", &n, &m);
    m%=n;
    for(i=0; i<n; i++) {
        scanf("%d", &add[i]);
    }
    for(i=0; i<n-m; i++) {
        if(i==0) {
            printf("%d", add[m]);
        } else {
            printf(" %d", add[m+i]);
        }
    }
    for(i=0; i<m; i++) {
        printf(" %d", add[i]);
    }
}
