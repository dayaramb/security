#include <stdio.h>
#include <string.h>

void SecretFuntion()
{
	printf("Congratulations !\n You have entered the secret block of the code:\n");
}


void my_echo()
{
	char buffer[20];
	printf("Enter some text:");
	scanf("%s",buffer);
	printf("The Text you entered:%s\n",buffer);

}
int main()
{
	my_echo();
	return 0;
}


