#include <iostream>
using namespace std;

int main() {
    int x = 0, y = 0;
    char direction = 'N';
    char command;

    cout << "Enter commands (F/L/R), Q to quit: ";

    while (cin >> command && command != 'Q') {

        if (command == 'F') {
            if (direction == 'N')
                y++;
            else if (direction == 'E')
                x++;
            else if (direction == 'S')
                y--;
            else if (direction == 'W')
                x--;
        }
        else if (command == 'L') {
            if (direction == 'N') direction = 'W';
            else if (direction == 'W') direction = 'S';
            else if (direction == 'S') direction = 'E';
            else if (direction == 'E') direction = 'N';
        }
        else if (command == 'R') {
            if (direction == 'N') direction = 'E';
            else if (direction == 'E') direction = 'S';
            else if (direction == 'S') direction = 'W';
            else if (direction == 'W') direction = 'N';
        }
    }

    cout << "Final Position: (" << x << ", " << y << ")" << endl;
    cout << "Final Direction: " << direction << endl;

    return 0;
}