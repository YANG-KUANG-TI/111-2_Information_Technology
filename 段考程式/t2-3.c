#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    char l[4][10] = {"�ư�","���A","���L","����"};
    short s[4] = {75,85,80,60};

    printf("======================\n");
    printf("  �u�n�Y�ư��I�\�t��\n");
    printf("======================\n");
    printf("(1) �ư��K��$75\n");
    printf("(2) ���A�K��$85\n");
    printf("(3) ���L�K��$80\n");
    printf("(4) ���ƫK��$60\n");
    printf("======================\n");

    printf("\n�п�J�z�n�ʶR���K��N��:");
    scanf("%d", &x);
    printf("\n�п�J�z�n�ʶR���K��Ӽ�:");
    scanf("%d", &y);
    printf("\n�п�J�z���O��:");
    scanf("%d", &z);

    if(0<x&&x<5){
        printf("\n================================\n");
        printf("%s�K��@��%d���A�A�`�@�R%d �� �O�Φ@:%d ��\n", l[x-1], s[x-1], y, s[x-1]*y);
        printf("================================\n\n");
    }
    else{
        printf("\n================================\n");
        printf("�S���o�ӿﶵ!\n", l[x-1], s[x-1], y, s[x-1]*y);
        printf("================================\n\n");
        printf("��s: %d ��", z);
        return 0;
    }

    if(s[x-1]*y<z) printf("��s: %d ��", z-s[x-1]*y);
    else printf("�A��������!", y-s[x-1]);
}
