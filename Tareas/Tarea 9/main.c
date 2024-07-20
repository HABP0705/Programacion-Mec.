#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 20
#define HEIGHT 20
#define MAX_LENGTH 100

typedef struct
{
    int x, y;
} Position;

typedef struct
{
    Position positions[MAX_LENGTH];
    int length;
    char direction;
} Snake;

typedef struct
{
    Position food;
    Snake snake;
    int gameOver;
} GameState;

void initializeGame(GameState *state)
{
    state->snake.length = 1;
    state->snake.positions[0].x = WIDTH / 2;
    state->snake.positions[0].y = HEIGHT / 2;
    state->snake.direction = 'R';

    state->food.x = rand() % WIDTH;
    state->food.y = rand() % HEIGHT;

    state->gameOver = 0;
}

void draw(GameState *state)
{
    system("cls");
    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");

    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            if (j == 0) printf("#");

            int isSnakePart = 0;
            for (int k = 0; k < state->snake.length; k++)
            {
                if (state->snake.positions[k].x == j && state->snake.positions[k].y == i)
                {
                    printf("O");
                    isSnakePart = 1;
                    break;
                }
            }

            if (!isSnakePart)
            {
                if (state->food.x == j && state->food.y == i)
                {
                    printf("F");
                }
                else
                {
                    printf(" ");
                }
            }

            if (j == WIDTH - 1) printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");
}

void updateGame(GameState *state)
{
    Position nextPosition = state->snake.positions[0];

    switch (state->snake.direction)
    {
    case 'U':
        nextPosition.y--;
        break;
    case 'D':
        nextPosition.y++;
        break;
    case 'L':
        nextPosition.x--;
        break;
    case 'R':
        nextPosition.x++;
        break;
    }

    for (int i = state->snake.length - 1; i > 0; i--)
    {
        state->snake.positions[i] = state->snake.positions[i - 1];
    }
    state->snake.positions[0] = nextPosition;

    if (nextPosition.x == state->food.x && nextPosition.y == state->food.y)
    {
        state->snake.length++;
        state->food.x = rand() % WIDTH;
        state->food.y = rand() % HEIGHT;
    }

    if (nextPosition.x < 0 || nextPosition.x >= WIDTH || nextPosition.y < 0 || nextPosition.y >= HEIGHT)
    {
        state->gameOver = 1;
    }

    for (int i = 1; i < state->snake.length; i++)
    {
        if (nextPosition.x == state->snake.positions[i].x && nextPosition.y == state->snake.positions[i].y)
        {
            state->gameOver = 1;
        }
    }
}

void getInput(GameState *state)
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'w':
            if (state->snake.direction != 'D') state->snake.direction = 'U';
            break;
        case 's':
            if (state->snake.direction != 'U') state->snake.direction = 'D';
            break;
        case 'a':
            if (state->snake.direction != 'R') state->snake.direction = 'L';
            break;
        case 'd':
            if (state->snake.direction != 'L') state->snake.direction = 'R';
            break;
        }
    }
}

int main()
{
    GameState state;
    initializeGame(&state);

    while (!state.gameOver)
    {
        draw(&state);
        getInput(&state);
        updateGame(&state);
        Sleep(100);
    }

    printf("Game Over!\n");
    return 0;
}
