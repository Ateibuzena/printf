#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_format
{
    char				id;
    int					(*func)(va_list args);
    struct s_format		*next;
}	t_format;

/*printf.c*/
int			ft_printf(const char *format, ...);

/*printf_formats.c*/
int         ft_init_handlers(t_format **head);
int         ft_add_handler(t_format **lst, char id, int (*func)(va_list));
void		ft_free_handlers(t_format *list);
int			ft_call_handler(t_format *formats, char id, va_list args);

/*printf_char.c*/
int         ft_putchar_printf(char c);
int			ft_handle_char(va_list args);

/*printf_string.c*/
int         ft_putstr_printf(char *s);
int			ft_handle_string(va_list args);

/*printf_digits.c*/
int			ft_handle_digits(va_list args);

/*printf_integer.c*/
int			ft_handle_integer(va_list args);

/*printf_unsigned.c*/
int			ft_handle_unsigned(va_list args);

/*printf_hex_lower.c*/
int         ft_puthex_printf(unsigned long n, int uppercase);
int			ft_handle_hex_lower(va_list args);

/*printf_hex_upper.c*/
int			ft_handle_hex_upper(va_list args);

/*printf_pointer.c*/
int			ft_handle_pointer(va_list args);

/*printf_percent.c*/
int			ft_handle_percent(va_list args);

#endif