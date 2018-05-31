#include <stdio.h>

int correctPositions(int *p, int *o, int m)
{
	int i, j, qtt = 0, aux = 0;

	for(i = 0; i < m - 1; i++)
	{
		for(j = i + 1; j < m; j++)
		{
			if(*(o + i) < *(o + j)){
				aux = *(o + j);
				*(o + j) = *(o + i);
				*(o + i) = aux;
			}
		}
		if(*(o + i) == *(p + i)) qtt++;
	}
	if(*(o + m - 1) == *(p + m - 1)) qtt++;

	return qtt;
}

int main()
{
	int n = 0, i, j, m = 0, *p, *o;
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		scanf("%d", &m);
		p = malloc(m*sizeof(int));
		o = malloc(m*sizeof(int));
		for(j = 0; j < m; j++)
		{
			scanf("%d", (p + j));
			*(o + j) = *(p + j);
		}

		printf("%d\n", correctPositions(p, o, m));
	}

	system("pause");
	return 0;
}
