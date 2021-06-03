#include <iostream>

#include <conio.h>

#include <windows.h>

using namespace std;

bool gameOver;

const int wid = 20;

const int hei = 20;

int x, y, fruitx, fruity, score;

int tailx [100], taily [100];

int ntail;

enum eDirecton { stop = 0,left , right , up , down};

eDirecton dir;


void setup ()

{
    gameOver = false;

    dir = stop;

    x = wid / 2;

    y = hei / 2;

    fruitx = rand() % wid;

    fruity = rand() % hei;

    score = 0;

}


void draw ()


{
    system  ("cls");

    for ( int i = 0; i < wid+2; i++)

        cout << "<";

    cout << endl;


    for (int i = 0; i < hei; i++)

    {
        for (int j = 0; j < wid; j++)

        {
            if (j == 0)

                cout << "^";

            if (i == y && j == x)

                cout << "O";

            else if (i == fruity && j == fruitx)

                cout << "F";
            else

            {
                bool print = false;

                for (int k = 0; k < ntail; k++)
                {
                    if (tailx[k] == j && taily[k] == i)

                    {

                        cout << "o";

                        print = true;

                    }
                }

                if (!print)

                    cout << " ";
            }


            if (j == wid - 1)

                cout << "^";
        }
        cout << endl;
    }


    for (int i = 0; i < wid+2; i++)

        cout << "<";

    cout << endl;

    cout << "Score:" << score << endl;
}






void input ()

{


}




void logic ()

{


}









int main()
{
    setup();

    while (!gameOver)

    {
        draw ();

        input ();

        logic ();

        //sleep (10); //sleep(10);
    }
    return 0;
}
