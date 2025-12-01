#include <stdio.h>

void main (void)
{
	FILE *fp;
	int value;

	fp = fopen ("/home/chips/output.txt", "wb");

	if (fp)
	{
		for (value = 48; value < 58; value++)
		{
			fputc (value, fp);
		}
		fclose (fp);
	}
}
