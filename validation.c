#include "so_long.h"
//You need libft

void validation_exist(try *app)
{
    app->fd = open(app->file_name, O_RDONLY);
    if(app->fd == -1)
        error("Not created");
    else 
        error("Founded");
}

void validation_extantion(try *app, int ac, char **av)
{
    char *ptr;

    if(ac < 2)
        error("Please enter the file name 🙂\n");
    ptr = strrchr(av[1], '.');
    if(!ptr || strncmp(ptr, ".ber",4))
        error("no extantion");
    app->file_name = av[1];
}

int main(int ac, char** av)
{
    try app;
    validation_extantion(&app, ac, av);
    validation_exist(&app);
    printf("name: %s", app.file_name);
    return (0);
}