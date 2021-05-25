/* matrix multiplication */

#include <stdio.h>
#define M 3
#define N 2
#define K 3

int main(void)
{

/* when I will know how to define functions I will suppose that I declare a function which
returns me the matrixes of the given dimension. For now I simply initialise them completely on my own */

int A[M][N]={ {1, 2},
            {3, 4},
            {5, 6} };

int B[N][K]={ {1, 2, 3},
            {4, 5, 6} };

int C[M][K]={0};

for(int i=0; i<M; i++)
{
    for(int j=0; j<K; j++)
    {
        C[i][j]=0;
        for(int n=0; n<N; n++)
            C[i][j]=C[i][j]+A[i][n]*B[n][j];
        printf("%d ", C[i][j]);
    }
    printf("\n");
}

return 0;
}


