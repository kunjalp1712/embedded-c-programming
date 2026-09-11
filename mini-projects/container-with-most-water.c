#include <stdio.h>
int min(int a, int b){
   return a < b ? a:b ;
}

int max_area(int height[],int n){
    int max_water = height[0];
    int left = 0;
    int right = n-1;

    while (left < right)
    {
        int width = right - left;

        int current_height = min(height[left],height[right]);

        int current_water = current_height*width;
        if (current_water > max_water){
            max_water = current_water;
        }
        if (height[left]< height[right]){
            left++;
        }
        else{
            right--;
        }
    }

    return max_water;    
}
int main()
{
    int i,n;
    int  result;
    printf("enter the number of containers:");
    scanf("%d", &n);
    int height[n];
    printf("enter the level of water in the containers :  ");
    for (i = 0; i < n; i++){

        scanf("%d", & height[i]);
    }
    printf("\nlevel of containers:");
    for ( i = 0; i < n; i++)
    {
        printf("%d",height[i]);
        if(i < n-1){
            printf(", ");
        }
    }
    int array = sizeof(height)/sizeof(height[0]);
    result = max_area(height,array);
    printf("\ncontainer have maximum level of water which is %d",result);
    
    return 0;
}
