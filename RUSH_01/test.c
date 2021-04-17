function teste() {
    let input = [4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2];
    let colUp = [ input[0], input[1], input[2], input[3] ];
    let colDown = [ input[4], input[5], input[6], input[7] ];
    let rowLeft = [ input[8], input[9], input[10], input[11] ];
    let rowRight = [ input[12], input[13], input[14], input[15] ];
    console.log('colUp', colUp)
    console.log('colDown', colDown)
    console.log('rowLeft', rowLeft)
    console.log('rowRight', rowRight)

    let board = [
        [0, 0, 0, 0],
        [0, 0, 0, 0],
        [0, 0, 0, 0],
        [0, 0, 0, 0],
    ];

    let i = 0;
    while ( i <= 3) {
        let j = 0;
        while ( j <= 3) {
            if(colUp[i] == 4 && colDown[j] == 1) {
                board[0][j] = 1;
                board[1][j] = 2;
                board[2][j] = 3;
                board[3][j] = 4;
            } else if(colUp[i] == 1 && colDown[j] == 4) {
                board[0][j] = 4;
                board[1][j] = 3;
                board[2][j] = 2;
                board[3][j] = 1;
            } 

            if(colUp[i] == 1 && colDown[i] == 2) {
                board[0][i] = 4;
                board[3][i] = 3;
                console.log('entrou')
            } else if(colUp[i] == 2 && colDown[i] == 1) {
                board[0][i] = 3;
                board[3][i] = 4;
                console.log('entrou')
            }
            
            console.log('i, j:',i,j)
            console.log(colUp[i], colDown[i])
            j++
        }
        i++
        console.log(board)

    }
}

teste();

