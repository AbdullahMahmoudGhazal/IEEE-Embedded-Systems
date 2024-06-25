#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 100
struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    // Sort the triangles based on their area in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            float area1 = (tr[j].a + tr[j].b + tr[j].c) / 2.0;
            area1 = sqrt(area1 * (area1 - tr[j].a) * (area1 - tr[j].b) * (area1 - tr[j].c));
            float area2 = (tr[j + 1].a + tr[j + 1].b + tr[j + 1].c) / 2.0;
            area2 = sqrt(area2 * (area2 - tr[j + 1].a) * (area2 - tr[j + 1].b) * (area2 - tr[j + 1].c));
            if (area1 > area2) {
                // Swap the triangles
                triangle temp = tr[j];
                tr[j] = tr[j + 1];
                tr[j + 1] = temp;
            }
        }
    }
}


int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
    printf("=======================================================\n");
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}


