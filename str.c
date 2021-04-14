#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc __attribute__((unused)), char *argv[])
{
        int iLen = strlen(argv[1]);
	char *sInput = (char *)malloc((iLen+1) * sizeof(char));

        strcpy(sInput, argv[1]);
        printf("String => %s\n", argv[1]);

        char *pToken = strtok(sInput);

        while(1)
        {
                if(pToken == NULL)
                        break;

                printf("Token = %s\n", pToken);

                pToken = strtok(NULL);
        }

        return (0);
}
