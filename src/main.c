#include <stdio.h>

int primo(int x){ //verifica se um numero eh primo
    int i;
    if (x == 1)
        return 0;

    for (i = 2; i <= x / 2; ++i)
        if (x % i == 0)
            return 0; // nao eh primo
    return 1; // eh primo
}

void ler_arquivo_em_txt()
{
    char input[256];
    FILE *p1;
    p1 = fopen("stdin.txt","w");
    while (fgets(input, 256, stdin))
        fputs(input, p1);

    fclose(p1);
}

int main()
{
    FILE *fp;
    int aux;

    ler_arquivo_em_txt();

    fp = popen("sort -r -h stdin.txt", "r");

    while (1) {
        fscanf(fp, " %d", &aux);
        if (aux < 0)
            break;
        if (primo(aux) == 0)
            printf("%d\n", aux);
    }
    pclose(fp);
    return 0;
}
