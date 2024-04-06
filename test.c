#include "try.h"
void validation_ofmap(try *app)
{
    app->fd=open(app->file_name, O_RDONLY);
    if(app->fd == -1)
        error("Not foubded");
    else 
        error("Founded");
}
void val(try *app, int ac, char **av)
{
    char *ptr;

    if(ac < 2)
        error("you have to enter the file name");
    ptr = strrchr(av[1], '.');
    if(!ptr || strncmp(ptr, ".ber",4))
        error("no extantion");
    app->file_name = av[1];
}
int main(int ac, char** av)
{
    try app;
    val(&app, ac, av);
    validation_ofmap(&app);
    printf("name: %s", app.file_name);
    return (0);
}