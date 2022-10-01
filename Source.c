#include <stdio.h>
#define N 10
//prototipos
void patron1(int matriz[N][N]);
void patron2(int matriz[N][N]);
void patron3(int matriz[N][N]);
void patron4(int matriz[N][N]);

int main()
{
    int matriz[N][N];;
    patron1(matriz);
    printf("\n");
    patron2(matriz);
    printf("\n");
    patron3(matriz);
    printf("\n");
    patron4(matriz);

}
void patron1(int matriz[N][N])
{
    int i, j;

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            matriz[i][j] = 0;

    for (i = 0; i < N; i++) {
        matriz[0][i] = 1;
        matriz[N - 1][i] = 1;
        matriz[i][0] = 1;
        matriz[i][N - 1] = 1;


    }
    for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++)
    {
        printf("%d", matriz[i][j]);
    }
    printf("\n");
}
}
void patron2(int matriz[N][N])
{
    int i, j;

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            matriz[i][j] = 0;

    for (i = 0; i < N; i++) {
        matriz[i][i] = 1;
        matriz[9-i][0+i] = 1;


    }
    for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++)
    {
            printf("%d", matriz[i][j]);
    }
        printf("\n");
}
}
void patron3(int matriz[N][N])
{
    int i, j;

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            matriz[i][j] = 0;

    for (i = 0; i < N; i++) {
        matriz[0][i] = 1;
        matriz[N - 1][i] = 1;
        matriz[i][0] = 1;
        matriz[i][N - 1] = 1;
        matriz[4][5] = 1;
        matriz[4][4] = 1;
        matriz[5][4] = 1;
        matriz[5][5] = 1;
        matriz[N - 3][i - 1] = 1;
        matriz[i - 1][N - 3] = 1;
        matriz[2][i + 2] = 1;
        matriz[i + 2][2] = 1;
        matriz[1][7] = 0;
        matriz[2][8] = 0;
        matriz[2][1] = 0;
        matriz[7][1] = 0;
        matriz[8][2] = 0;
        matriz[7][8] = 0;
        matriz[8][7] = 0;
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
}
void patron4(int matriz[N][N])
{
    {
        int i, j;

        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++)
                matriz[i][j] = 0;

        for (i = 0; i < N; i++) {
            matriz[0][i] = 1;
            matriz[N - 1][i] = 1;
            matriz[i][0] = 1;
            matriz[i][N - 1] = 1;
            matriz[4][5] = 1;
            matriz[4][4] = 1;
            matriz[5][4] = 1;
            matriz[5][5] = 1;
            matriz[N - 3][i - 1] = 1;
            matriz[i - 1][N - 3] = 1;
            matriz[2][i + 2] = 1;
            matriz[i + 2][2] = 1;
            matriz[1][7] = 0;
            matriz[1][0] = 0;
            matriz[2][8] = 0;
            matriz[2][1] = 1;
            matriz[3][1] = 0;
            matriz[3][2] = 0;
            matriz[7][1] = 0;
            matriz[8][2] = 0;
            matriz[7][8] = 0;
            matriz[8][7] = 0;
            matriz[4][3] = 1;
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++)
            {
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
    }
}