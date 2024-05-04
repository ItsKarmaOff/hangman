# hangman
***
binary name: hangman  
language: C

## Requirements
- gcc
- make
## Description
A simple hangman game. The game reads a list of words from a file and randomly selects one of them. The player has to guess the word by entering a letter at a time. The player has a limited number of tries to guess the word. The game ends when the player guesses the word or runs out of tries.

## Compilation
```bash
make
``` 
## Usage
```bash
./hangman filename [tries]
```
- filename: file containing the list of words
- tries: number of tries allowed to guess the word (default is 10)

## Test
```bash
make test
```
Replace the words within ```words.txt``` with the words you want to test.

***
## Author
[Christophe VANDEVOIR](https://github.com/ItsKarmaOff)