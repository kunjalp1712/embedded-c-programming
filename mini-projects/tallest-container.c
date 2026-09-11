#include <stdio.h>


float max_area(float height[],int n){
    float max_water = height[0];

    for (int i =0; i < n; i++){
        if(height[i]>max_water){
            max_water = height[i];
        }
    }

    return max_water;    
}
int main()
{
    int i,n;
    float  result;
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
    result = max_area(height,n);
    int max_cont_num = 1;
    for (i = 0; i < n; i++){
        if (height[i] == result){
            max_cont_num = i + 1;
            break;
        }
    }
    printf("\n%dth container have maximum level of water which is %.2f",max_cont_num,result);
    
    return 0;
}
