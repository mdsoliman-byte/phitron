#include <stdio.h>
int main()
{
    int taka;
    
    scanf("%d", &taka);
    if (taka >= 100 ){
        printf("Kacci Khabo %d", taka);
    } else if( taka >= 50 ){
        printf("Burgur Khabo %d", taka );
    } else if (taka >= 20){
        printf("Ice Cream Khabo %d", taka );
    } else
    {
        printf( "Khabo na %d", taka );
    }
    
    return 0 ;
}