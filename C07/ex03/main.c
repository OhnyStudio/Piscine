#include<stdio.h>
char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *str1 = "Test";
	char *str2 = "Patates";
	char *sep = "$";
	char *str3 = "Bob1";
	char *str4 = "Bob2";
	char *str5 = "Bob3";
	char *str6 = "Bob4";
	char *str7 = "Bob5";
	char *str8 = "Bob6";
	char *str9 = "Bob7";
	char *str10 = "Bob8";
	char *str11 = "Bob9";
	char *str12 = "Bob10";
	char *str13 = "Bob11";
	char *str14 = "Bob12";
	char *str15 = "Bob13";

	char *strs[] = {str1, str2, str3, str4, str5, str6, str7, str8, str9,str10, str11, str12, str13,str14,str15};
	int	size = 0;

	printf("%s", ft_strjoin(size, strs, sep));
	return (0);
}
