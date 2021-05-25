#include<stdio.h>

int main(void)
{
int n_rows=0, m_columns=0;

while(n_rows<=0)
{
    printf("\nEnter n, the number of rows: ");
    scanf("%d", &n_rows);
}

while(m_columns<=0)
{
    printf("\nEnter m, the number of columns: ");
    scanf("%d", &m_columns);
}

for(int r_count=0; r_count<n_rows; r_count++)
{
    for(int c_count=0; c_count<m_columns; c_count++)
    {
        printf("+--");
    }
    printf("+\n");
    for(int c_count=0; c_count<m_columns; c_count++)
    {
        printf(" | ");
    }
    printf("\n");
}

return 0;
}
