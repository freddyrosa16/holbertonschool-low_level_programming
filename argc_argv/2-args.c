#include <stdio.h>
/**
 */
int main(int argc, char *argv[])
{
	int i;

	int count = 0;

if (argc > 0)
{
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
