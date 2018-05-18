#include "libft.h"

void	clear_screen(void)
{
	ft_putstr("\033[H\033[2J");
}

void	color_str(char *s, char *opt)
{
	ft_putstr("\033[");
	ft_putstr(opt);
	ft_putstr("m");
	while (*s != '\0')
		ft_putchar(*s++);
	ft_putstr("\033[0m");
}

void	color_nbr(int n, char *opt)
{
	ft_putstr("\033[");
	ft_putstr(opt);
	ft_putstr("m");
	ft_putnbr(n);
	ft_putstr("\033[0m");
}

void	radient(void)
{
	int i;
	i = 16;
	while (i <= 21)
	{
		ft_putstr("\e[48;5;");
		ft_putnbr(i);
		ft_putstr("m \e[0m");
		i++;
	}
}

void	all_color_radient(void)
{
	int i;
	i = 0;
	while (i <= 256)
	{
		ft_putstr("\e[48;5;");
		ft_putnbr(i);
		ft_putstr("m \e[0m");
		i++;
	}
}

void	color_help(void)
{
	ft_putchar('\n');
	ft_putendl("xp_color(char *s, char *opt)");
	ft_putstr("clear_screen(void)");
	ft_putendl("underlined : 4");
	ft_putchar('\n');
	ft_putchar('\n');
	// Couleurs
	ft_putendl("COULEURS");
	ft_putstr("\033[30mNOIR\033[0m");
	ft_putstr(" -> 30 ");
	ft_putstr("\033[31mROUGE\033[0m");
	ft_putstr(" -> 31 ");
	ft_putstr("\033[32mVERT\033[0m");
	ft_putstr(" -> 32 ");
	ft_putstr("\033[33mJAUNE\033[0m");
	ft_putstr(" -> 33 ");
	ft_putstr("\033[34mBLEU\033[0m");
	ft_putstr(" -> 34 ");
	ft_putstr("\033[35mMAGENTA\033[0m");
	ft_putstr(" -> 35 ");
	ft_putstr("\033[36mCYAN\033[0m");
	ft_putstr(" -> 36 ");
	ft_putstr("\033[37mBLANC\033[0m");
	ft_putstr(" -> 37");
	ft_putchar('\n');
	// Couleurs de fond
	ft_putendl("COULEURS DE FONDS");
	ft_putstr("\033[40mNOIR\033[0m");
	ft_putstr(" -> 40 ");
	ft_putstr("\033[41mROUGE\033[0m");
	ft_putstr(" -> 41 ");
	ft_putstr("\033[42mVERT\033[0m");
	ft_putstr(" -> 42 ");
	ft_putstr("\033[43mJAUNE\033[0m");
	ft_putstr(" -> 43 ");
	ft_putstr("\033[44mBLEU\033[0m");
	ft_putstr(" -> 44 ");
	ft_putstr("\033[45mMAGENTA\033[0m");
	ft_putstr(" -> 45 ");
	ft_putstr("\033[46mCYAN\033[0m");
	ft_putstr(" -> 46 ");
	ft_putstr("\033[47mBLANC\033[0m");
	ft_putendl(" -> 47");
	// Couleurs bold
	ft_putendl("COULEURS BOLD");
	ft_putstr("\033[30;1mNOIR\033[0m");
	ft_putstr(" -> 30;1 ");
	ft_putstr("\033[31;1mROUGE\033[0m");
	ft_putstr(" -> 31;1 ");
	ft_putstr("\033[32;1mVERT\033[0m");
	ft_putstr(" -> 32;1 ");
	ft_putstr("\033[33;1mJAUNE\033[0m");
	ft_putstr(" -> 33;1 ");
	ft_putstr("\033[34;1mBLEU\033[0m");
	ft_putstr(" -> 34;1 ");
	ft_putstr("\033[35;1mMAGENTA\033[0m");
	ft_putstr(" -> 35;1 ");
	ft_putstr("\033[36;1mCYAN\033[0m");
	ft_putstr(" -> 36;1 ");
	ft_putstr("\033[37;1mBLANC\033[0m");
	ft_putendl(" -> 37;1 ");
	// Couleurs de fond bold
	ft_putendl("COULEURS DE FOND BOLD");
	ft_putstr("\033[40;1mNOIR\033[0m");
	ft_putstr(" -> 40;1 ");
	ft_putstr("\033[41;1mROUGE\033[0m");
	ft_putstr(" -> 41;1 ");
	ft_putstr("\033[42;1mVERT\033[0m");
	ft_putstr(" -> 42;1 ");
	ft_putstr("\033[43;1mJAUNE\033[0m");
	ft_putstr(" -> 43;1 ");
	ft_putstr("\033[44;1mBLEU\033[0m");
	ft_putstr(" -> 44;1 ");
	ft_putstr("\033[45;1mMAGENTA\033[0m");
	ft_putstr(" -> 45;1 ");
	ft_putstr("\033[46;1mCYAN\033[0m");
	ft_putstr(" -> 45;1 ");
	ft_putstr("\033[47;1mBLANC\033[0m");
	ft_putendl(" -> 46;1 ");
	// Couleurs inversees
	ft_putendl("COULEURS INVERSEES");
	ft_putstr("\033[30;7mNOIR\033[0m");
	ft_putstr(" -> 30;7 ");
	ft_putstr("\033[31;7mROUGE\033[0m");
	ft_putstr(" -> 31;7 ");
	ft_putstr("\033[32;7mVERT\033[0m");
	ft_putstr(" -> 32;7 ");
	ft_putstr("\033[33;7mJAUNE\033[0m");
	ft_putstr(" -> 33;7 ");
	ft_putstr("\033[34;7mBLEU\033[0m");
	ft_putstr(" -> 34;7 ");
	ft_putstr("\033[35;7mMAGENTA\033[0m");
	ft_putstr(" -> 35;7 ");
	ft_putstr("\033[36;7mCYAN\033[0m");
	ft_putstr(" -> 36;7 ");
	ft_putstr("\033[37;7mBLANC\033[0m");
	ft_putendl(" -> 37;7 ");
	// Couleurs de fond inversee
	ft_putendl("COULEURS DE FOND INVERSEE");
	ft_putstr("\033[40;7mNOIR\033[0m");
	ft_putstr(" -> 40;7 ");
	ft_putstr("\033[41;7mROUGE\033[0m");
	ft_putstr(" -> 41;7 ");
	ft_putstr("\033[42;7mVERT\033[0m");
	ft_putstr(" -> 42;7 ");
	ft_putstr("\033[43;7mJAUNE\033[0m");
	ft_putstr(" -> 43;7 ");
	ft_putstr("\033[44;7mBLEU\033[0m");
	ft_putstr(" -> 44;7 ");
	ft_putstr("\033[45;7mMAGENTA\033[0m");
	ft_putstr(" -> 45;7 ");
	ft_putstr("\033[46;7mCYAN\033[0m");
	ft_putstr(" -> 46;7 ");
	ft_putstr("\033[47;7mBLANC\033[0m");
	ft_putendl(" -> 47;7 ");
}
