#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Tic Tac Toe\n\n";

    int space[3][3];
    int count=1;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            space[i][j] = count++;

    cout<<"      |         |         \n";
    cout<<"   " << space[0][0] <<"  |    " << space[0][1] << "    |    " << space[0][2] << "\n";
    cout<<"______|_________|_________\n";
    cout<<"      |         |         \n";
    cout<<"   " << space[0][0] <<"  |    " << space[0][1] << "    |    " << space[0][2] << "\n";
    cout<<"______|_________|_________\n";
    cout<<"      |         |         \n";
    cout<<"   " << space[0][0] <<"  |    " << space[0][1] << "    |    " << space[0][2] << "\n";
    cout<<"      |         |         \n";
}