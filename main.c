/*
** main.c for  in /home/guillaume/mechat_g
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Mon Mar 21 11:18:11 2016 MECHAT Guillaume
** Last update Mon Mar 21 12:03:19 2016 MECHAT Guillaume
*/

#include "header.h"
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
  if ((argv[1] != 0 && my_strcmp(argv[1], "--ip") == 0)
      && (argv[3] != 0 && my_strcmp(argv[3], "--port") == 0) && argc > 4)
    my_putstr("BOUM");
  else
    my_putstr(SYNTAX_ERROR);
  return (0);
}
