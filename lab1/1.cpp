#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
    FILE* pFile;
    pFile = fopen("ini.txt", "r");
    char string[100];
    int sum = 0;


    while (fgets(string, 100, pFile) != NULL)
    {
        int i = 0, num = 0;
        while (string[i]>='0' && string[i]<='9') {
            num = num * 10 + string[i] - '0';
            i++;
        }
        sum += num;
    }

    printf("%d\n", sum);

    return 0;
}