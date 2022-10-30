#include <string.h>
#include <stdio.h>
#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i;
	char *new_dst;
	char *new_src;

	i = 0;
	new_dst = (char*)dst;
	new_src = (char*)src;

	new_dst = new_dst + len;
	new_src = new_src + len;

	while (i < len)
	{
		new_dst = new_src;
		new_dst--;
		new_src--;
		i++;
	}
	return(dst);
}

/*
int main(void)
{
	char str1[50];
	char str2[50];

	strcpy(str1, "aa");
	strcpy(str2, "bbcc");
	puts(str1);

	memmove(str1, str2, 3);
	puts(str1);
	ft_memmove(str1, str2, 3);
	puts(str1);


	return(0);
}
*/