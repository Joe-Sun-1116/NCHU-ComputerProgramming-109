/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>

void combine(int n, int m, int a[], int b[], const int M)

{

    for (int j = n; j >= m; j--)

    {

        b[m - 1] = j - 1;

        if (m > 1)
            combine(j - 1, m - 1, a, b, M); //�Ψ�F���k��Q

        else

        {

            for (int i = M - 1; i >= 0; i--)
                printf("%d ", a[b[i]]);

            printf("\n");
        }
    }
}

int main()

{

    int n, m;

    scanf("%d %d", &n, &m);

    int a[n];
    int b[m];

    for (int i = 0; i < n; i++)

        scanf("%d",&a[i]);

    const int M = m;

    combine(n, m, a, b, M);
}
