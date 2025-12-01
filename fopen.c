#include <stdio.h>

void main (void)
{
	FILE *fp;

	fp = fopen ("/home/chips/output.txt", "wb");

	if (fp)
	{
		fprintf (fp, "This is some text.\n");
		fclose (fp);
	}
}
