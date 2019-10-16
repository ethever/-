#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {

	int* pnum = NULL;
	int n = 0;
	scanf_s("%d",&n);

	pnum= (int*)calloc(n+100, sizeof(int));
	if (pnum == NULL)return -1;
	for (int j = 0; j < (n+1); j++) {
		pnum[j] = j ;
	}
	

	

	for (int i = 3; i <= sqrt(n); i += 2) {
		if (*pnum) {
			for (int j = i + i; j <= n; j += i) {
				pnum[j] = 0;
			}
		}
		pnum++;
	}


	for (int z = 0; z < n + 1; z++) {
		printf("%d\n", *pnum);
		pnum++;
		//printf("%d", pnum);
	}


	return 0;
}