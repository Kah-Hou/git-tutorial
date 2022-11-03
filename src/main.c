#include <stdio.h>

int main(void)
{
	unsigned int number = 0;
	char* word = NULL;
	char decision = 'N';
	
	do
	{
		printf("Please enter a number between 0 and 9, then press ENTER\n");
		number = (int)(getchar() - '0');
		getchar();

		word = num_to_words(number);

		printf("%d : %s \n",number, word);
		
		printf("Do you wish to exit ? Y/N\n");

		decision = getchar();
		getchar();

	}while(decision != 'Y');

	return 0;
		
}