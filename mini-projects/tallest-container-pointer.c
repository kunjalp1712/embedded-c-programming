#include <stdio.h>

int main()
{
    int i,n;
    printf("enter the number of containers:");
    scanf("%d", &n);
    float height[n];
    printf("enter the level of water in the containers :  ");
    for (i = 0; i < n; i++){

        scanf("%f", & height[i]);
    }
    printf("\nlevel of containers:");
    for ( i = 0; i < n; i++)
    {
        printf("%.2f",height[i]);
        if(i < n-1){
            printf(", ");
        }
    }
    float *ptr = height;
    float max = *ptr;
    for (i = 0; i < n; i++ ){
        if (*(ptr+i) > max){
            max = *(ptr + i);
        }
    }
    int max_cont_num = 1;
    for (i = 0; i < n; i++){
        if (height[i] == max){
            max_cont_num = i + 1;
            break;
        }
    }

    printf("\n%dth container have maximum level of water which is %.2f",max_cont_num,max);
    
    return 0;
}
