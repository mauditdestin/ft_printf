#include "../includes/ft_printf.h"

int main()
{
    int ftprintf;
    int vraiprintf;
	
    printf("\nTest: %%c (Affichage d'un caractère)\n");
    ftprintf = ft_printf("ft_printf: Caractère : %c\n", 'Z');
    vraiprintf = printf("printf: Caractère : %c\n", 'Z');
    printf("Longueur ft_printf: %d, Longueur printf : %d\n", ftprintf, vraiprintf);

    printf("\nTest: %%s (Affichage d'une chaîne)\n");
    ftprintf = ft_printf("ft_printf: Chaîne : %s\n", "https://www.github.com/4242catlover");
    vraiprintf = printf("printf: Chaîne : %s\n", "https://www.github.com/4242catlover");
    printf("Longueur ft_printf: %d, Longueur printf : %d\n", ftprintf, vraiprintf);

	printf("\nTest: %%d et %%i (Affichage d'un entier)\n");
    ftprintf = ft_printf("ft_printf: Entier : %d, %i\n", -123, 456);
    vraiprintf = printf("printf: Entier : %d, %i\n", -123, 456);
    printf("Longueur ft_printf: %d, Longueur printf : %d\n", ftprintf, vraiprintf);

	
    printf("\nTest: %%u (Affichage d'un unsigned)\n");
    ftprintf = ft_printf("ft_printf: Unsigned : %u\n", -123456789);
    vraiprintf = printf("printf: Unsigned : %u\n", -123456789);
    printf("Longueur ft_printf: %d, Longueur printf : %d\n", ftprintf, vraiprintf);

    printf("\nTest: %%p (Affichage d'un ptr)\n");
    int a = 0;
    ftprintf = ft_printf("ft_printf: ptr : %p\n", &a);
    vraiprintf = printf("printf: ptr : %p\n", &a);
    printf("Longueur ft_printf : %d, Longueur printf : %d\n", ftprintf, vraiprintf);

	printf("\nTest: %%p (Affichage d'un ptr NULL)\n");
	int *pointeurnull = NULL;
	ftprintf = ft_printf("ft_printf: ptr NULL : %p\n", pointeurnull);
	vraiprintf = printf("printf: ptr NULL : %p\n", pointeurnull);
	printf("Longueur ft_printf: %d, Longueur printf : %d\n", ftprintf, vraiprintf);

    printf("\nTest: %%x (Affichage en hexa minuscule)\n");
    ftprintf = ft_printf("ft_printf: Hexa minuscule : %x\n", 25525);
    vraiprintf = printf("printf: Hexa minuscule : %x\n", 25525);
    printf("Longueur ft_printf: %d, Longueur printf : %d\n", ftprintf, vraiprintf);

    printf("\nTest: %%X (Affichage en hexadécimal majuscule)\n");
    ftprintf = ft_printf("ft_printf: Hex majuscule : %X\n", 244);
    vraiprintf = printf("printf: Hex majuscule : %X\n", 244);
    printf("Longueur ft_printf: %d, Longueur printf : %d\n", ftprintf, vraiprintf);

    printf("\nTest: %%%% (Affichage d'un pourcentage)\n");
    ftprintf = ft_printf("ft_printf: Pourcentage : %%\n");
    vraiprintf = printf("printf: Pourcentage : %%\n");
    printf("Longueur ft_printf: %d, Longueur printf : %d\n", ftprintf, vraiprintf);

    return (0);
}
