#include <cstdio>
int main() {
	int N;
	scanf("%d", &N);
	for (int i=N;i>0;i--) {
		for (int j=0;j<i;j++) {
			putchar('*');
		}
		putchar('\n');
	}
}
