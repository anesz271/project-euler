#include <stdio.h>
#include <string.h>

int m;
int n = 0; 
char str[12];
int i = 0;
int j = 0; 
int array[100];
int location = 0;

void isPalindrome(int m)
{
	sprintf(str, "%d", m);
	
	int len = strlen(str);
	
	int l = 0;
	int h = strlen(str) - 1;
	
	while(h > 1)
	{
		if (str[l++] != str[h--]) 
        { 
            //not palindrome
            return; 
        } 
    } 
	//palindrome
    array[n] = m;
    n++;
}

int main()
{
	for(i = 900; i < 1000; i++) // could start from i,j=100, 
	                            // but my guess was that the biggest palindrome will be a multiple of two numbers >900
	                            //this way a much smaller array is enough
	{
		for(j = 900; j < 1000; j++)
		{
			m = i * j;
			isPalindrome(m);
		}
	}
	for (int c = 1; c < n; c++)
    if (array[c] > array[location])
      location = c;
	printf("Maximum element is present at location %d and its value is %d.\n", location+1, array[location]);
	
	return 0;
}