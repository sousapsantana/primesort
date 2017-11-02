#include <stdio.h>

int primo(int x){ //verifica se um numero eh primo
    if (x == 1)
        return 0;

    for (int i = 2; i <= x / 2; ++i)
        if (x % i == 0)
            return 0; // nao eh primo
    return 1; // eh primo
}

int main()
{
    FILE *fp = popen("sort -r -h", "r");
    int aux;

    while (1) {
        fscanf(fp, " %d", &aux);
        if (aux < 0)
            break;
        if (primo(aux) == 0)
        {
            fprintf(fp, "%d\n", aux);
            printf("%d\n", aux);
        }
    }
    pclose(fp);
    return 0;
}
