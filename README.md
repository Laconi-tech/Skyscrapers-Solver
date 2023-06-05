# Skyscrapers-Solver

This project is a solver of the puzzle game "SkyScrapers" developed in C language. The solver is designed to automatically solve SkyScrapers 4x4 grids using a search and backtracking approach.

SkyScrapers Game Rules
The SkyScrapers game is played on a square grid of 4x4 size, where each space can contain a skyscraper with a height between 1 and 4. The rules of the game are as follows:

Each column and each row must contain skyscrapers of distinct height.
The number visible from a given vantage point (top or bottom) must match the number shown outside the grid.
A skyscraper blocks the view of skyscrapers behind it, so a smaller skyscraper cannot be seen behind a taller skyscraper.

1. git clone git@github.com:Laconi-tech/Skyscrapers-Solver.git

2. cd [your folder]

3. compile all .c files (gcc *.c)

4. execute ./a.out "[write the number in this order: top, bottom, left, right]"

    -exemple: gcc *.c && ./a.out "3 1 2 3 2 2 3 1 2 2 1 3 3 2 2 1"
        -top number: 3 1 2 3
        -bottom number: 2 2 3 1
        -left number: 2 2 1 3
        -right number 3 2 2 1

5. Have fun with this cheat ;-)