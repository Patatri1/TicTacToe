#include <stdio.h>
#include <stdlib.h>
char board[3][3]; // 3x3 board
// Initialize the board to empty spaces
void init_board() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            board[i][j] = ' '; } } }
// Print the board to the console
void print_board() {
    int i, j;
    for (i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i != 2) {
            printf("---|---|---\n"); } } }
// Check if a player has won the game
int check_win(char player) {
    int i;
  // Check rows
    for (i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return 1; } }
   // Check columns
    for (i = 0; i < 3; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return 1: ) ) )
    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return 1; }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return 1;}
  // No win condition met
    return 0; }
// Main game loop
int main() {
    int row, col;
    char player = 'X';
 // Initialize the board
    init_board();
  // Game loop
    while (1) {
        // Print the board
        printf("\n");
        print_board();
  // Get the player's move
        printf("\nPlayer %c's turn\n", player);
        printf("Enter row (1-3): ");
        scanf("%d", &row);
        printf("Enter column (1-3): ");
        scanf("%d", &col);
        row--;
        col--;
// Check if the move is valid
        if (row < 0 || row > 2 || col < 0 || col > 2) {
            printf("Invalid move. Please try again.\n");
            continue; }
        if (board[row][col] != ' ') {
            printf("That space is already taken. Please try again.\n");
            continue; }
// Update the board and check for a win
        board[row][col] = player;
        if (check_win(player)) {
            printf("\n");
            print_board();
            printf("\nPlayer %c wins!\n", player);
            return 0;}
// Switch to the other player
        if (player == 'X') {
            player = 'O';
        } else {
            player = 'X';} }
    return 0;}
