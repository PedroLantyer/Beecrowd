#include <iostream>

int GetNumberOfMoves(int X1, int Y1, int X2, int Y2)
{
    if((X1 == X2) && (Y1 == Y2)) //STARTS AND ENDS AT SAME POSITION
    {
        return 0;
    }

    if((X1 != X2) && (Y1 == Y2)) //HORIZONTAL MOVE
    {
        return 1;
    }
    if((X1 == X2) && (Y1 != Y2)) //VERTICAL MOVE
    {
        return 1;
    }

    int N;
    if(X2 > X1) //VALID FOR DIAGONAL 2 AND DIAGONAL 4
    {
        N = (X2-X1);
        if((X2 == (X1+N)) && (Y2 == (Y1+N))) //DIAGONAL 2
        {
            return 1;
        }
        if((X2 == (X1+N)) && (Y2 == (Y1-N))) //DIAGONAL 4
        {
            return 1;
        }
    }
    else if(X1 > X2) //VALID FOR DIAGONAL 1 AND DIAGONAL 3
    {
        N = (X1-X2);
        if((X2 == (X1-N)) && (Y2 == (Y1+N))) //DIAGONAL 1
        {
            return 1;
        }
        if((X2 == (X1-N)) && (Y2 == (Y1-N))) //DIAGONAL 3
        {
            return 1;
        }
    }

    return 2; //IF THE MOVE ISN'T ON ANY OF THE DIAGONALS, ISN'T VERTICAL AND ISN'T HORIZONTAL, THEN 2 MOVES MUST BE PERFORMED FOR THE QUEEN TO REACH THE POSITION

}

int main()
{
    int x_start, y_start, x_end, y_end; //X1, Y1, X2, Y2

    do
    {
        scanf("%d %d %d %d", &x_start, &y_start, &x_end, &y_end); //1 <= INPUT <= 8
        if((x_start == 0) && (x_start == y_start) && (x_start == x_end) && (x_start == y_end)) //
        {
            break;
        }

        std::cout << GetNumberOfMoves(x_start, y_start, x_end, y_end) << std::endl;

    }
    while(x_start != 0 || x_end != 0 || y_start != 0 || y_end != 0);
    
    return 0;
}

/* DIAGONAL ANGLES:
START: 5 4 (X,Y)
DIAGONAL 1: {4,5},{3,6},{2,7},{1,8} //DOWN LEFT
DIAGONAL 2: {6,5},{7,6},{8,7} //DOWN RIGHT
DIAGONAL 3: {4,3},{3,2},{2,1} //UP LEFT
DIAGONAL 4: {6,3},{7,2},{8,1} //UP RIGHT
*/

/* FORMULAS AND CONDITIONS:
DIAGONAL 1: X2 = (X1-N) && Y2 = (Y1+N) && X1 > X2; THE VALUE OF N IS (X1-X2)
DIAGONAL 2: X2 = (Y2+1) && X2 > X1;
DIAGONAL 3: X2 = (X1-N) && Y2 = (Y1-N) && X1 > X2;
DIAGONAL 4: X2 = (X1+N) && Y2 = (Y1-N) && X2 > X1; THE VALUE OF N IS (X2-X1)
*/