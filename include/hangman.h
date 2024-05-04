/*
** EPITECH PROJECT, 2024
** hangman
** File description:
** hangman.h
*/
#ifndef TESTS_HANGMAN_H
    #define TESTS_HANGMAN_H

    #include "my.h"
    #include "myprintf.h"

/**
 * @brief Struct hangman_t
 * @param tries Number of tries
 * @param is_find Check if the letter is in the word
 * @param word The word to find
 * @param masked_word The word with the letters found
 * @param letter The letter entered by the user
 */
typedef struct hangman_s {
    int tries;
    int is_find;
    char *word;
    char *masked_word;
    char letter;
} hangman_t;

/**
 * @brief Display the usage of the program
 * @param argv
 * @return void
 */
void display_usage(char **argv);

/**
 * @brief Initialize the struct hangman_t
 * @param argv
 * @return hangman_t
 */
hangman_t *struct_init(char **argv);

/**
 * @brief Free the struct hangman_t
 * @param hangman
 * @return void
 */
void free_struct(hangman_t *hangman);

/**
 * @brief Hangman game
 * @param argv
 * @return void
 */
void hangman(char **argv);

/**
 * @brief Open the file passed as argument
 * @param argv
 * @param hangman
 * @return void
 */
void open_file(char **argv, hangman_t *hangman);

/**
 * @brief Read the file passed as argument
 * @param fd
 * @param hangman
 * @return void
 */
void read_file(int fd, hangman_t *hangman);

/**
 * @brief Select a random word from the array
 * @param array
 * @param hangman
 * @return void
 */
void select_word(char **array, hangman_t *hangman);

/**
 * @brief Display the hangman game
 * @param hangman
 * @return void
 */
void display(hangman_t *hangman);

/**
 * @brief Compare the letters entered by the user with the word
 * and replace the '*' in masked_word by the letter if it is in the word
 * @param hangman
 * @return void
 */
void cmp_words(hangman_t *hangman);

/**
 * @brief Check if the user has won or lost
 * return 1 if the user has won or lost and 0 if the game continues
 * @param hangman
 * @return int
 */
int win_lose(hangman_t *hangman);

#endif //TESTS_HANGMAN_H
