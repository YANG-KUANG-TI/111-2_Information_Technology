#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ix, iy;
	int cx;
	
	printf("�п�J���s��:");
	
	scanf("%d", &cx);
	
	switch(cx){
		case 0:
			printf("�۰����O\n");
			break;
		case 1:
			printf("�G�@���O\n");
			break;
		case 2:
			printf("�G����O\n");
			break;
		case 3:
			printf("�G�T���O\n");
			break;
		default:
			printf("��J���~\n");
			break;
	}

	system("pause");
	return 0;
}

