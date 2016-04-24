#include <stdio.h>

#define SIZE 10

void starline(int n) { while(n--) printf("*"); }

int main(int argc, char *argv[]) {
int i,a[SIZE]={19,3,15,7,11,9,13,5,17,1};
	printf("Element\tValue\tHistogram\n");
	for(i=0;i<SIZE;i++) {
		printf("%4d\t%5d\t",i,a[i]);
		starline(a[i]);
		printf("\n");
	}
	return(0);
}

//#include <stdio.h>
//#include <conio.h>
//#define SIZE 5
//int main(void)
//{
// int i,j,n[SIZE] = {13, 8, 16, 4, 11};
// printf("%s%13s%17s\n","Element","Value","Histogram");
// for(i=0; i<=SIZE-1; i++)
// {
// printf("%4d%16d%8s",i,n[i],"");
// for(j=1; j<=n[i]; j++)
// printf("*");
// printf("\n");
// }
// getch();
// return 0;
//}
