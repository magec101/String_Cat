#include <stdio.h>
#include <string.h>

void string_CatMain(int argc, const char** argv, char result[]) {

	char acString1[50];
	char acString2[50];
	int i;

    if (argc < 2)
    {
	    	scanf("%s", acString1);
	    	scanf("%s", acString2);
    }
	else
	{
	    	strcpy(acString1, argv[1]);
	    	strcpy(acString2, argv[2]);
	}

    strcpy(result, acString1);
    i = strlen(acString1);
    strcpy(&result[i], acString2);
}
/*	if(argc == 3) {
		printf("Hello %s %s", argv[1], argv[2]); 
	} else {
		char first[50], second[100];
		
		printf("Enter first name: ");
		scanf("%s", first);
		
		printf("Enter second name: ");
		char ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        fgets(second, 80, stdin);

        int i = strlen(second)-1;
        if( second[i] == '\n')
        second[i] = '\0';
		
		printf("Hello %s %s", first, second);
	}

*/


#ifndef __CXX_TEST_MAIN__

int main(int argc, const char** argv){
	char result[100];
    string_CatMain(argc, argv, result);
    printf("%s", result);
    return 0;
}

#endif