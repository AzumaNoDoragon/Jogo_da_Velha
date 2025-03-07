# Tic-Tac-Toe in C

This is a simple Tic-Tac-Toe game developed in C to be played in the terminal by two players. The first player uses the "X" symbol, and the second player uses the "O" symbol.

## Features
- Simple terminal interface
- Move validation (prevents invalid or already occupied positions)
- Automatic win or draw check
- Displays the updated board after each move

## How it works
1. The game starts by showing the board numbered from 0 to 8, indicating available positions.
2. Players alternate in choosing the position where they want to play.
3. The game checks for a winner or a draw after each move.
4. At the end, the message of either a player's victory or a draw is displayed.

## Code Structure

- **`init()`**: Initializes the game and sets up the board.
- **`show()`**: Displays the board in the terminal.
- **`play()`**: Captures the player's move and updates the board.
- **`checkWin()`**: Checks if there is a winner.
- **`cls()`**: Clears the screen for better game visualization.

Initialization:

![Image](https://github.com/user-attachments/assets/990e98bf-4454-4cb0-b460-7fc0037b81d1)

During the game:

![Image](https://github.com/user-attachments/assets/4162e002-a9eb-4cc4-aed5-49f79d11ada1)

## Execution
To compile and run the code on Windows systems:
```sh
gcc jogo_da_velha.c -o jogo_da_velha.exe
jogo_da_velha.exe
