#include "ft_printf.h"
#include "ft_flag.h"
/*
int		ft_check_specifier(pf_flags **pf_list, char *str)
{
	*pf_list->index_s = 0;
	while (s[*pf_list->index_s].flag_s &&
			*str != s[*pf_list->index_s].flag_s)
		*pf_list->index_s++;
	if (*pf_list->index_s < 15)
		*pf_list->check_flags = *pf_list->check_flags + 0x01;
	return (*pf_list->index_s);
}
*/
int		main()
{
	printf("%c\n", s[0].flag_s);
	return (0);
}
