#include "Canvas.h"

using namespace std;

int main() {
    Canvas canvas(40, 20);

    canvas.DrawRect(2, 2, 20, 10, '#');
    canvas.Print();
    cout << "\n";

    canvas.FillRect(5, 5, 15, 8, '@');
    canvas.Print();
    cout << "\n";

    canvas.DrawCircle(30, 10, 5, 'O');
    canvas.Print();
    cout << "\n";

    canvas.FillCircle(30, 10, 3, '*');
    canvas.Print();
    cout << "\n";

    canvas.DrawLine(0, 0, 39, 19, '+');
    canvas.Print();
    cout << "\n";

    canvas.Clear();
    canvas.Print();
}