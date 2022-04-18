int _printf(const char *format, ...)
{
	int i = 0, j = 0;

	va_list list;
	char * ptr;
	va_start(ptr, format);
	while(format && format[i])
	{
		if (format[i] == '%')
		{
		i++;
		switch (format[i])
		{
			case 'c':
			{
				ptr[j] = (char)va_arg(list, int);
				j++;
				break;
			}
		
	}
	fwrite(ptr, j, 1, stdout);
	va_end(list);
	return j;
}
