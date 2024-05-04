/*
** EPITECH PROJECT, 2024
** hangman
** File description:
** open_and_read.c
*/
#include "../include/hangman.h"

void read_file(int fd, hangman_t *hangman)
{
    char *buff;
    ssize_t bytes_read;
    char **array;
    struct stat st;

    if (fstat(fd, &st) == -1)
        return;
    buff = malloc(st.st_size + 1);
    if (buff == NULL)
        return;
    bytes_read = read(fd, buff, st.st_size);
    if (bytes_read == -1)
        return;
    buff[bytes_read] = '\0';
    array = my_str_to_word_array(buff, "\n");
    if (array == NULL)
        return;
    select_word(array, hangman);
    free(buff);
    free_array(array);
}

void open_file(char **argv, hangman_t *hangman)
{
    int fd = open(argv[1], O_RDONLY);
    struct stat st;

    if (fd == -1)
        return;
    read_file(fd, st, hangman);
    close(fd);
}
