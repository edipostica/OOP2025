#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>

int main() {
    char prop[1000];
    char cuv[100][100];
    int nrCuv = 0;

    scanf("%[^\n]", prop);

    char* p = strtok(prop, " ");
    while (p != NULL) {
        strcpy(cuv[nrCuv], p);
        nrCuv++;
        p = strtok(NULL, " ");
    }


    for (int i = 0; i < nrCuv - 1; i++) {
        for (int j = 0; j < nrCuv - i - 1; j++) {
            int lg1 = strlen(cuv[j]);
            int lg2 = strlen(cuv[j + 1]);

            if (lg1 < lg2 || (lg1 == lg2 && strcmp(cuv[j], cuv[j + 1]) > 0)) {
                char temp[100];
                strcpy(temp, cuv[j]);
                strcpy(cuv[j], cuv[j + 1]);
                strcpy(cuv[j + 1], temp);
            }
        }
    }

    for (int i = 0; i < nrCuv; i++) {
        printf("%s\n", cuv[i]);
    }

    return 0;
}