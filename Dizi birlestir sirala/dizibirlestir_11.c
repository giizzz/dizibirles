#include <stdio.h>

int main() {

	int A[5], B[5], S[10];
	int Aelsayisi, Belsayisi;
	int i;
	int gA = 0, gB = 0, gS = 0;
	
	printf("A eleman sayisi: ");
	scanf("%d",&Aelsayisi);
	printf("B eleman sayisi: ");
	scanf("%d",&Belsayisi);
	
	printf("A elemanlari gir: \n");
	for (i=0; i<Aelsayisi; i++)
		scanf("%d",&A[i]);
		
	printf("B elemanlari gir: \n");
	for (i=0; i<Belsayisi; i++)
		scanf("%d",&B[i]);
		
	while (1) {
		if (gA >= Aelsayisi) {
			if (gB<Belsayisi)
				for (i=gB; i<Belsayisi; i++) {
					S[gS++] = B[i];
				}
				break;
		}
		else if (gB >= Belsayisi) {
			if (gA<Aelsayisi)
				for (i=gA; i<Aelsayisi; i++) {
					S[gS++] = A[i];
				}
				break;
		}
		
		if (gA == Aelsayisi && gB == Belsayisi)
			break;
		
		if (A[gA] < B[gB]) {
			S[gS++] = A[gA++];
		}
		else {
			S[gS++] = B[gB++];
		}
	}	
	
	for (i=0; i<Aelsayisi + Belsayisi; i++)
		printf("%d\t",S[i]);
	printf("\n");
		
	return 0;
}
