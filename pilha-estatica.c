#include <stdio.h>
#define MAX 50

typedef int TIPOCHAVE;

typedef enum
{
  false = 0,
  true = 1
} boolean;

typedef struct
{
  TIPOCHAVE chave;
} REGISTRO;

typedef struct
{
  REGISTRO A[MAX];
  int topo;
} PILHA;

int main()
{

  return 0;
}
