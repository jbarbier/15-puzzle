#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_array(int *a, int n)
{
    int i;
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);    
    }
    printf("\n");
}

void solve_problem(int *a, int n)
{
    int i, j;
    int total;
    
    for (i = total = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                total++;
            }
        }
    }
    //printf("Total = %d\n", total);
    if (total % 2) /* impossible */
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");        
    }
}

void get_new_problem_and_solve_it(void)
{
    int *numbers;
    int nb_numbers;
    int i;
    
    scanf("%d", &nb_numbers);
    numbers = malloc(sizeof(*numbers) * nb_numbers);
    for (i = 0; i < nb_numbers; i++)
    {
        scanf("%d", numbers + i);    
    }
    //print_array(numbers, nb_numbers);
    solve_problem(numbers, nb_numbers);
    free(numbers);
}

int main() {
    int nb_problems;
    int i;
    
    scanf("%d", &nb_problems);
    for (i = 0; i < nb_problems; i++)
    {
        get_new_problem_and_solve_it();    
    }
    
    return (0);
}
