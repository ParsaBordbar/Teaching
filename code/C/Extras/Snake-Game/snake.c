#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define WIDTH 50
#define HEIGHT 25

int snakeX[100], snakeY[100];

int x = WIDTH / 2 , y = HEIGHT / 2;

int fruitX , fruitY;

int snakeLength = 1;

int moveKey = 0;

bool gameover = false;

int score = 0;

void createFood(){
    fruitX = rand() % WIDTH;
    if(fruitX == 0){
        fruitX++;
    }
    fruitY = rand() % HEIGHT;
    if(fruitY == 0){
        fruitY++;
    }
}

void userInput(){
    if (kbhit()){
        char move = tolower(getch());
        if (move == 'w' && moveKey != 3){
            moveKey = 1;
        }else if(move == 'a' && moveKey != 4){
            moveKey = 2;
        }else if(move == 's' && moveKey != 1){
            moveKey = 3;
        }else if(move == 'd' && moveKey != 2){
            moveKey = 4;
        }
    }
}

void draw(){
    system("cls");
    for (int i = 0;i <= HEIGHT;i++){
        for (int j = 0;j <= WIDTH;j++){
            if (i == 0 || i == HEIGHT){
                printf("#");
            }else if (j == 0 || j == WIDTH){
                printf("#");
            }else if (j == fruitX && i == fruitY){
                printf("X");
            }else{
                bool isSnake = false;
                for (int k = 0;k < snakeLength ;k++){
                    if (j == snakeX[k] && i == snakeY[k]){
                        printf("O");
                        isSnake = true;
                    }
                }
                if (!isSnake){
                    printf(" ");
                }

            }
        }
        printf("\n");
    }

    printf("\nScore : %d" , score);
}

void movement(){
    int prevX = snakeX[0];
    int prevY = snakeY[0];
    int prev2X, prev2Y;
    snakeX[0] = x;
    snakeY[0] = y;
    for (int i = 1; i < snakeLength; i++) {
        prev2X = snakeX[i];
        prev2Y = snakeY[i];
        snakeX[i] = prevX;
        snakeY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    if (moveKey == 1){
        y--;
    }else if(moveKey == 2){
        x--;
    }else if(moveKey == 3){
        y++;
    }else if(moveKey == 4){
        x++;
    }

    if (x == fruitX && y == fruitY){
        snakeLength++;
        createFood();
        score += 10;
    }

    if (x <= 0 || y <= 0 || x >= WIDTH || y >= HEIGHT){
        gameover = true;
    }
}

int main(){
    srand(time(NULL)); 
    snakeX[0] = x;
    snakeY[0] = y;
    createFood();


    while (!gameover){
        movement();
        userInput();
        draw();
        Sleep(35);
    }

    return 0;
}