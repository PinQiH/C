#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//10-51
/*
int main()
{
	char *t = "computer";
	char s[80] = "IBM PC";
	printf("The string t is %s", strcat(s, t));
	system("PAUSE");
	return 0;
} 
*/

//10-52
/*
int main()
{
	char *s = "computer";
	char *t = "compatible";
	printf("strcmp(s, t) is %d", strcmp(s, t));
	system("PAUSE");
	return 0;
}
*/

/*
int main()
{
	char *s = "banana";
	printf("strchr(s, 'a') = %d\n", strchr(s, 'a'));
	printf("strrchr(s, 'a') = %d\n", strrchr(s, 'a'));
	system("PAUSE");
	return 0;
}
*/

//10-53

int main()
{
	char s7[] = "I come not to bury Caesar";
	printf("%s\n", s7);
	printf("%s\n", &s7[0]);
	printf("%s\n", s7 + 11);
	system("PAUSE");
	return 0;
}
