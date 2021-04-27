
#include <stdio.h>
#include <stdio.h>
void dfs(int n, int row, int col, int lbevel, int rbevel, int *count) {
    if (row == n) {
        (*count)++;
        return ;
    }
    int bit = (~(col | lbevel | rbevel)) & ((1 << n) - 1);
    while (bit > 0) {
        int p = bit & (-bit);
        dfs(n, row + 1, col | p, (lbevel | p) << 1, (rbevel | p) >> 1, count);
        bit &= (bit - 1);
    }
}
int totalNQueens(int n){
    if (n <= 0) return 0;
    int count = 0;
    dfs(n, 0, 0, 0, 0, &count);
    return count;
}
int main ( void )
{
    int N;
    scanf("%d",&N);
    printf("%d\n",totalNQueens(N));
    return 0;
}
