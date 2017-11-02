# PrimeSort

Esta tarefa é sobre usar *pipes* e *ferramentas do Linux*. Nela, você deverá escrever
um prorama que recebe como entrada uma sequência de números inteiros positivos,
separados por um caractere newline. A sequência é encerrada pelo número -1. O
programa deve escrever na tela todos os números não-primos dessa sequência, um
por linha ordenados do maior para o menor.

Dicas:
* Um número primo é aquele que tem exatamente dois divisores inteiros (ele mesmo
  e algum outro inteiro). O número 1 não é primo, pois tem apenas um divisor
  inteiro.
* Lembre-se da função `popen()` que vimos em sala, e das ferramentas POSIX que
  temos disponíveis (`grep`, `cat`, `echo`, `sort`, `sed`, `tr`, `top`, etc.).
  Embora seja tecnicamente possível implementar o algoritmo inteiro com força
  bruta, é uma ótima idéia usar as funcionalidades que já existem disponíveis.
* O programa deverá ser escrito em C (ou seja: não é permitido usar
  um shell script único)
* A execução de cada teste está sujeita a um limite de tempo de 10 segundos (a
  máquina na qual estou executando os programas tem um processador Core i7 de
  3.0GHz)

## Exemplos

Entrada | Saida
------- | -----
`1\n2\n3\n-1\n` | `1\n`
`10\n8\n4\n5\n3\n1\n-1\n` | `10\n8\n4\n1\n`


## Instruções adicionais

1. Vá diretamente ao conjunto de testes para verificar como tratar casos
   limítrofes ou mal-definidos.
1. Lembre-se de seguir as [instruções de submissão](docs/instrucoes.md).
1. Se desejar, proponha novos casos de teste.


## Resultados

Os resultados foram obtidos rodando o seguinte comando:
```
diff <(./main < tests/test0x.in) tests/test0x.out
```

E não foram encontrados diferenças em nenhum dos arquivos.

Exemplo de execução:

```
> ./main < tests/test01.in
900
830
590
500
500
200
90
55
50
30
20
1
1

```
