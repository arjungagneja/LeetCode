void gameOfLife(int** board, int boardSize, int* boardColSize) {
    int copy[boardSize][*boardColSize];
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < *boardColSize; j++) {
            copy[i][j] = board[i][j];
        }
    }

    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < *boardColSize; j++) {
            int live = 0;
            if (i - 1 >= 0 && i - 1 < boardSize) {
                if (board[i - 1][j] == 1) {
                    live++;
                }
            }
            if (i + 1 >= 0 && i + 1 < boardSize) {
                if (board[i + 1][j] == 1) {
                    live++;
                }
            }
            if (j - 1 >= 0 && j - 1 < *boardColSize) {
                if (board[i][j - 1] == 1) {
                    live++;
                }
            }
            if (j + 1 >= 0 && j + 1 < *boardColSize) {
                if (board[i][j + 1] == 1) {
                    live++;
                }
            }
            if (i - 1 >= 0 && j - 1 >= 0 && i - 1 < boardSize && j - 1 < *boardColSize) {
                if (board[i - 1][j - 1] == 1) {
                    live++;
                }
            }
            if (i - 1 >= 0 && j + 1 >= 0 && i - 1 < boardSize && j + 1 < *boardColSize) {
                if (board[i - 1][j + 1] == 1) {
                    live++;
                }
            }
            if (i + 1 >= 0 && j - 1 >= 0 && i + 1 < boardSize && j - 1 < *boardColSize) {
                if (board[i + 1][j - 1] == 1) {
                    live++;
                }
            }
            if (i + 1 >= 0 && j + 1 >= 0 && i + 1 < boardSize && j + 1 < *boardColSize) {
                if (board[i + 1][j + 1] == 1) {
                    live++;
                }
            }
            if (board[i][j] == 1 && live < 2) {
                copy[i][j] = 0;
            }
            else if (board[i][j] == 1 && live > 3) {
                copy[i][j] = 0;
            }
            else if (board[i][j] == 0 && live == 3) 
            {
                copy[i][j] = 1;
            }
        }
    }   

    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < *boardColSize; j++) {
            board[i][j] = copy[i][j];
        }
    }
}