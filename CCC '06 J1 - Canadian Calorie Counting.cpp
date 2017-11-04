#include <bits/stdc++.h>

using namespace std;

int main() {
    // burgers
    int burger[4];
    burger[0] = 461;
    burger[1] = 431;
    burger[2] = 420;
    burger[3] = 0;
    
    //Drinks
    int drink[4];
    drink[0] = 130;
    drink[1] = 160;
    drink[2] = 118;
    drink[3] = 0;
    
    //Sides
    int side[4];
    side[0] = 100;
    side[1] = 57;
    side[2] = 70;
    side[3] = 0;
    
    //Dessert
    int dessert[4];
    dessert[0] = 167;
    dessert[1] = 266;
    dessert[2] = 75;
    dessert[3] = 0;
    
    int b, dr, s, d;
    cin >> b;
    cin >> s;
    cin >> dr;
    cin >> d;
    
    int sum;
    sum = burger[b-1] + drink[dr-1] + side[s-1] + dessert[d-1];
    cout << "Your total Calorie count is " << sum << ".";
    return 0;
}