@@ -8,10 +8,10 @@ int main(void)
{
	int i = '0';

	while(i <= '9')
	while (i <= '9')
	{
		putchar(i);
		if(i != '9')
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
