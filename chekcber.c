#include "so_long.h"

int ft_check(char *str)
{
    char arr[] = ".ber";
    int i;
    int j;

    i = ft_strlen(str) - 1;
    j = ft_strlen(arr) - 1;

    while (j >= 0 && i >= 0)
    {
        if (str[i] != arr[j])
            break ;
        i--;
        j--;    
    }
    if (j < 0)
        printf(".ber exists\n");
    else
    {
        printf(".ber doesn't exist\n");
        exit(1);
    }
    return (1);
}
int ft_is_file(char *str)
{
    int fd;

    fd = open(str, O_RDONLY);
    if (fd == -1)
    {   
        printf("makaynch lfile\n");
        close(fd);
        exit(1);
    }
    else
        printf("Adam nadi\n");
    close(fd);
    return (0);
}

int main(int ac, char **av)
{
    (void )ac;

    ft_check(av[1]);
    ft_is_file(av[1]);
}