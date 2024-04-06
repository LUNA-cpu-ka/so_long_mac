#ifndef TRY_H
# define TRY_H

#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
typedef struct try
{
    char *file_name;
    int fd;
}try;


void error(char* msg);
void val(try *app, int ac, char **av);

#endif