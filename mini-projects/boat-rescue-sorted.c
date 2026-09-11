#include <stdio.h>

int main()
{
    int i, j, num_people, max_weight;
    int boats=0;
        printf("enter the People Limit:");
        if(scanf("%d", &num_people)!= 1 || num_people<=0)
        {
            printf("invalid number of people./n");
            
        }

        printf("enter maximum weight(kg) one boat can carry:");
        scanf("%d", &max_weight);

        int people[num_people];
        for ( i = 0; i < num_people; i++)
        {
            printf("enter the weights(kg) of people[%d]:", i+1);
            scanf("%d", &people[i]); 
        }

        for ( i = 0; i < num_people -1 ; i++)
        {
            for(j = 0; j < num_people - i -1; j++)
            {
                if (people[j]>people[j+1]){
                    int sorted = people[j];
                    people[j] = people[j+1];
                    people[j+1]=sorted;
                }
            }
        }
        
        printf("\nSorted values: ");
        for ( i = 0; i < num_people; i++)
        { 
            printf("%d", people[i]);
            if (i < num_people - 1)
            {
                printf(", ");
            }
        }
        printf("\n\n---Boat Assignments---");

        i = 0 ;
        j = num_people-1;
        while (i<=j)
        {
            if(people[j]>max_weight)
            {
                printf("\npeople[%d] who has weight %dkg cannot be carried by this boat",j+1,people[j]);
                j--;
                continue;
            }
            boats++;
            printf("\nBoat %d contains people with weights(kg):[%d",boats,people[j]);

            if(i<j && (people[i]+people[j]<=max_weight))
            {
                printf(", %d", people[i]);
                i++;

        }
        printf("]");
        j--;
    }

        printf("\n Total number of Boats required to Rescue : %d\n", boats);
    return 0;
}
