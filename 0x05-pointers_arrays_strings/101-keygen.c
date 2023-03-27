#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8 
int main()
{
	int i = 0;
	srand(time(NULL));
	char password;
	password = [PASSWORD_LENGTH + 1];
	const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const int num_valid_chars = sizeof(valid_chars) - 1;
	for (i = 0 ; i < PASSWORD_LENGTH; i++)
		password[i] = valid_chars[rand() % num_valid_chars];
	password[PASSWORD_LENGTH] = '\0';
	printf("%s\n", password);
	return (0);
}
