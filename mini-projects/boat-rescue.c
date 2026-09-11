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

        int people[num_people],visited[num_people];


        for ( i = 0; i < num_people; i++)
        {
            visited[i]=0;
        }

        for ( i = 0; i < num_people; i++)
        {
            printf("enter the weights(kg) of people[%d]:", i+1);
            scanf("%d", &people[i]);
            
        }

        printf("\nStored values: ");
        for ( i = 0; i < num_people; i++)
        { 
            printf("%d", people[i]);
            if (i < num_people - 1)
            {
                printf(", ");
            }
        }
        printf("\n\n---Boat Assignments---");
        for ( i = 0; i < num_people; i++)
        {
            if(people[i]>max_weight)
            {
                printf("\npeople[%d] weight(kg) cannot be carried by this boat",i+1);
                continue;
            }
            if(visited[i]==1)continue;
            visited[i]=1;
            boats++;
            
            printf("\nBoat %d contains people with weights(kg):[%d",boats,people[i]);

            int found_partner =0;
            for(j=i+1;j<num_people;j++)
            {
                if(visited[j]==0 && (people[i]+people[j] <= max_weight))
                {
                    visited[j]=1;
                    printf(", %d", people[j]);
                    found_partner=1;
                    break;
                }

            }
            printf("]");
        }

        printf("\n Total number of Boats required to Rescue : %d\n", boats);
    return 0;
}
