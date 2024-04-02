#include "so_long.h"
#include "gnl/get_next_line.h"


int ft_check(char *str)
{
    char arr[] = ".ber";
    int i;
    int j;

    i = strlen(str) - 1;
    j = strlen(arr) - 1;

    while (j >= 0 && i >= 0)
    {
        if (str[i] != arr[j])
            break ;
        i--;
        j--;    
    }
    if (j < 0)
        printf("\n.ber exists\n");
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
        printf("mojod l file\n");
    close(fd);
    return (0);
}

int main(int ac, char **av)
{
    (void )ac;
    int fd;

    if (ac > 2)
    {
       printf("error");
       return(1);
    }
    fd = open(av[1], O_RDONLY);
    char *line = get_next_line(fd);
    char *map;
    map = (char *)malloc(sizeof(char));
    while (line)
    {
        map = ft_strjoin(map, line);
        line = get_next_line(fd);
    }
    printf("%s", map);
    printf("%s", av[1]);
    ft_check(av[1]);
    ft_is_file(av[1]);
}