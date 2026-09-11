#include <stdio.h>
int find_winner(int n, int k)
{
    int winner = 0;
    for(int i=2; i<=n; i++)
    {
        winner= (winner + k)%i;
    } 
return winner+1;
}

int main()
{
    int n,k,winner;
    printf("enter the total number of players: ");
    scanf("%d", &n);
    printf("\nElimination number: ");
    scanf("%d", &k);
    winner = find_winner(n,k);
    printf("winner is %d", winner);

    return 0;
}
