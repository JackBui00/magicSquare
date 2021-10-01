#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

 
int main(){
    int i; 
    time_t t; 
    srand((unsigned) time(&t));
    sleep(1);
    int magicSquare[3][3]; 
    int randomArray[9];
    //input values of 0-8 into randomArray
    for(int i = 0; i < 9; i++){
        randomArray[i] = i; 
    }
    //shuffle temporary random Array 
    for(int i = 0; i<9; i++){
        int temp = randomArray[i];
        int randomInteger = rand() % 8;
        randomArray[i] =  randomArray[randomInteger]; 
        randomArray[randomInteger] = temp; 
    }
    //for(int i =0; i < 9; i++){
    //    printf("%d", randomArray[i]); 
    //}
    // add 1 to each element of array 
    for(int i = 0; i < 9; i++){
        randomArray[i]++; 
    }
    // input from randomArray into Magic Square 
    for(int x= 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            magicSquare[x][y] = randomArray[i];
            i++; 
        }
    }
    // print every MagicSquare
    int static interation = 0; 
    interation++; 
    printf("Interation: %d\n", interation); 
    for(int x= 0; x < 3;x++){
        printf("[ ");
        for(int y = 0; y < 3; y++){
            
            printf("%d ", magicSquare[x][y]);
        }
        printf("]\n");
    }


    //Check for total sum of 15 per row
    int rowTotal = 0; 
    for(int x= 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            rowTotal += magicSquare[x][y];
            if(rowTotal != 15){
                main(); 
            }
        }
        printf("%d\n", rowTotal); 
    }
    
    //check for total sum of 15 per column
    int columnTotal = 0; 
    for(int y= 0; y < 3; y++){
        for(int x = 0; x < 3; x++){
            columnTotal += magicSquare[x][y];
            if(columnTotal != 15){
                main(); 
            }
        }
    }

    int diagonalTotal = 15; 
    if(diagonalTotal = magicSquare[0][0]+magicSquare[1][1]+magicSquare[2][2]||magicSquare[0][2]+magicSquare[1][1]+magicSquare[0][2]){
        return 0; 
    }
    else{
        main(); 
    }
    //check for total sum of diagonals 

    




    //checkRow(magicSquare); 










    return 0; 
}