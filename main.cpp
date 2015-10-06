#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int x;
    string i;
    bool y;
    while (y==false)
    {
        do
        {
            cout << "Input rock, scissors or  paper" << endl;
            cin >> i;
        } while ( (i!="rock") && (i!="scissors") && (i!="paper") );
        srand(time(0));
        cout << "Your choise - " << i << endl;
        x = rand()%3+1;
        if (x==1)
        {
            cout << "Computer choise - rock" << endl;
        }
        else if (x==2)
        {
            cout << "Computer choise - scissors" << endl;
        }
        else if (x==3)
        {
            cout << "Computer choise - paper" << endl;
        }
        //====================================================
        if (((i=="rock") && (x==1)) || ((i=="scissors") && (x==2)) ||((i=="paper") && (x==3)))
        {
            cout << "Draw" << endl;
        }
        if (((i=="rock") && (x==2)) || ((i=="scissors") && (x==3)) || ((i=="paper") && (x==1)))
        {
            cout << "You win" << endl;
        }
        if (((i=="scissors") && (x==1)) || ((i=="paper") && (x==2)) || ((i=="rock") && (x==3)))
        {
            cout << "Looser!!!" << endl;
        }
        cout << "==============================================" << endl;
        cout << "Input 0 for continue, input othet symbol for exit" << endl;
        cin >> y;
        cout << "==============================================" << endl;
    }
    return 0;
}

