#include "so_long.h"

void ft_check_last(char *str)
{ 
   int exist = 0;
   int i = strlen(str) - 4;
   int p = 0;
   char *pri = ".ber";
   if(strchr(str,'.') != NULL) {
    while (str[i] != '\0' && pri[p] != '\0' && str[i] != pri[p]) {
        i++;
        p++;
        exist = 0;
        printf("mafiahx.\n");
    }
    p = 0;
    while (str[i] != '\0' && pri[p] != '\0' && str[i] == pri[p]) {
        i++;
        p++;
        exist = 1;
        printf("fiha.\n");
    }
}
   else
      printf("🔴 Warning 🔴");
    
}
int main(int ac, char **av)
{
    (void )ac;
    ft_check_last(av[1]);
    if (open(av[1], O_RDONLY) == -1)
        printf("makaynch lfile\n");
}



// test0 = map.ber;✅
// test4 = ;       ✅
// test2 = mapber;✅

// test1 = map..ber; 💕
// test3 = map.txt;
