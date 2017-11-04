#include <bits/stdc++.h>

using namespace std;

int main() {
    int dmin, emin, wmin;
    cin >> dmin;
    cin >> emin;
    cin >> wmin;
    
    double Adcost = 0, Bdcost = 0;
    
    //Daytime cost
    if (dmin > 100) {
        Adcost += 0.25*(dmin-100);
    }
    if (dmin > 250) {
        Bdcost += 0.45*(dmin-250);
    }
    
    //Evening Cost
    Adcost += 0.15*emin;
    Bdcost += 0.35*emin;
    
    //Weekend Cost
    Adcost += 0.20*wmin;
    Bdcost += 0.25*wmin;
    
    cout << "Plan A costs " << Adcost << "\n";
    cout << "Plan B costs " << Bdcost << "\n";
    if (Adcost > Bdcost) {
        cout << "Plan B is cheapest.";
    }
    else if (Bdcost > Adcost) {
        cout << "Plan A is cheapest.";
    }
    else {
        cout << "Plan A and B are the same price.";
    }
    
    return 0;
}