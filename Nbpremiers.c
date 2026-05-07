#include <stdio.h>

void premiers(FILE *f) 
{

    int n = 2, count = 0, i;
    char t[20];

    while (count < 50) 
    {

        
        for (i = 2; i < n; i++) 
        {
            if (n % i == 0)
            break;
        }

        if (i == n) 
        {
            sprintf(t, "%d", n);

            for (i = 0; t[i] != '\0'; i++) 
            {

                if (t[i] == '5')
                    fprintf(f, "V");
                else
                    fprintf(f, "%c", t[i]);
            }

            fprintf(f, "\t");
            count++;
        }

        n++;
    }
}

int main() 
{

    FILE *f;

    f = fopen("nbpremiers", "w");

    premiers(f);

    fclose(f);

    printf("Resultats affichés dans nbpremiers.txt");

    return (0) ;
}