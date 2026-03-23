#include <stdio.h>

const int N = 1005;

int a[N];
int t[N];

void merge_sort(int l,int r)
{
    if (l >= r) return;
    int mid = l + r >> 1;
    merge_sort(l, mid);
    merge_sort(mid + 1, r);
    int i = l, j = mid + 1, k = 0;
    while (i <= mid && j <= r)
        if (a[i] < a[j]) t[k ++ ] = a[i ++ ];
        else    t[k ++ ] = a[j ++ ];
    while (i <= mid) t[k ++ ] = a[i ++ ];
    while (j <= r) t[k ++ ] = a[j ++ ];
    for (int i = l, j = 0; i <= r; i ++, j ++ )
        a[i] = t[j];
}

int main()
{
    int n, l, r;
    scanf("%d%d%d", &n, &l, &r);
    for (int i = 0; i < n; i ++ )
        scanf("%d", &a[i]);

    merge_sort(l, r);

    for (int i = 0; i < n; i ++ )
        printf("%d ", a[i]);

    return 0;
}
