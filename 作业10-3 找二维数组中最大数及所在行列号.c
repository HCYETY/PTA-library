#include <stdio.h>
int main()
  {int i, j, m, a[m][m], max, x=0, y=0;
   scanf ( "%d", &m );
   for ( i=0; i<m; i++ ) {
       for ( j=0; j<m; j++ ) {
            scanf ( "%d", &a[i][j]);
       }
   }
   max = a[0][0];
   for ( i=0; i<m; i++ ) {
        for ( j=0; j<m; j++ ) {
            if ( max<a[i][j] ) {
                max = a[i][j];
                x = i;
                y = j;
            }
        }
   }
    printf ( "max=%d,i=%d,j=%d", max, x, y );
  }
