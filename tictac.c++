/*
    Tic Tac Toe Game
    Credits: Muhammed Nazim
    This is a simple implementation of the Tic Tac Toe game in C++.
    Players take turns to place their marks (X or O) on a 3x3 grid.
    The game continues until one player wins or all spaces are filled.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Tic Tac Toe\n\n";

    char space[3][3];
    int count=1;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            space[i][j] = ' ';
        }
    }

    cout<<"      |         |         \n";
    cout<<"   " << space[0][0] <<"  |    " << space[0][1] << "    |    " << space[0][2] << "\n";
    cout<<"______|_________|_________\n";
    cout<<"      |         |         \n";
    cout<<"   " << space[1][0] <<"  |    " << space[1][1] << "    |    " << space[1][2] << "\n";
    cout<<"______|_________|_________\n";
    cout<<"      |         |         \n";
    cout<<"   " << space[2][0] <<"  |    " << space[2][1] << "    |    " << space[2][2] << "\n";
    cout<<"      |         |         \n";

    int playerOption1, playerOption2, turn=1;

    while(true)
    {
        if(turn==1)
        {
            cout<<"Player 1: ";
            cin>>playerOption1;
            
            if(playerOption1<1 || playerOption1>9)
                cout<<"Invalid input! Please enter a number between 1 and 9.\n";

            else if(space[(playerOption1-1)/3][(playerOption1-1)%3] != ' ')
                cout<<"This space is already taken! Please choose another number.\n";

            if(space[(playerOption1-1)/3][(playerOption1-1)%3] == ' ')
            {
                space[(playerOption1-1)/3][(playerOption1-1)%3] = 'X';
                turn = 2;
            }
            
            cout<<"      |         |         \n";
            cout<<"   " << space[0][0] <<"  |    " << space[0][1] << "    |    " << space[0][2] << "\n";
            cout<<"______|_________|_________\n";
            cout<<"      |         |         \n";
            cout<<"   " << space[1][0] <<"  |    " << space[1][1] << "    |    " << space[1][2] << "\n";
            cout<<"______|_________|_________\n";
            cout<<"      |         |         \n";
            cout<<"   " << space[2][0] <<"  |    " << space[2][1] << "    |    " << space[2][2] << "\n";
            cout<<"      |         |         \n";

            for(int i=0; i<3; i++)
            {
                if((space[i][0] == 'X' && space[i][1] == 'X' && space[i][2] == 'X')||
                   (space[0][i] == 'X' && space[1][i] == 'X' && space[2][i] == 'X'))
                {
                    cout<<"Player 1 wins!\n";
                    return 0;
                }
            }

        }
        else
        {
            cout<<"Player 2: ";
            cin>>playerOption2;
            if(playerOption2<1 || playerOption2>9)
                cout<<"Invalid input! Please enter a number between 1 and 9. \n";

            else if(space[(playerOption2-1)/3][(playerOption2-1)%3] != ' ')
                cout<<"This space is already taken! Please choose another number.\n";
            
            if(space[(playerOption2-1)/3][(playerOption2-1)%3] == ' ')
            {
                space[(playerOption2-1)/3][(playerOption2-1)%3] = 'O';
                turn = 1;
            }

            cout<<"      |         |         \n";
            cout<<"   " << space[0][0] <<"  |    " << space[0][1] << "    |    " << space[0][2] << "\n";
            cout<<"______|_________|_________\n";
            cout<<"      |         |         \n";
            cout<<"   " << space[1][0] <<"  |    " << space[1][1] << "    |    " << space[1][2] << "\n";
            cout<<"______|_________|_________\n";
            cout<<"      |         |         \n";
            cout<<"   " << space[2][0] <<"  |    " << space[2][1] << "    |    " << space[2][2] << "\n";
            cout<<"      |         |         \n";

            for(int i=0; i<3; i++)
            {
                if((space[i][0] == 'X' && space[i][1] == 'X' && space[i][2] == 'X')||
                   (space[0][i] == 'X' && space[1][i] == 'X' && space[2][i] == 'X'))
                {
                    cout<<"Player 2 wins!\n";
                    return 0;
                }
            }
        }
    }
    
    return 0;
}