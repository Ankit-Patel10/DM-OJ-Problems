#include <bits/stdc++.h>

using namespace std;

int main() {
    int width, length;
    cin >> width >> length;
    int squaretile;
    cin >> squaretile;
    int widthamount = floor(width/squaretile);
    if (width < squaretile) {
        widthamount = 0;
    }
    int lengthamount = floor(length/squaretile);
    if (length < squaretile) {
        lengthamount = 0;
    }
    int amountofsquares = widthamount*lengthamount;
    cout << amountofsquares;
    return 0;
}