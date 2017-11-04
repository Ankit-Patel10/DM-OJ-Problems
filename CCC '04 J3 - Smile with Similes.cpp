#include <bits/stdc++.h>

using namespace std;

int main() {
    int numadj, numnouns;
    cin >> numadj;
    cin >> numnouns;
    string adj[numadj];
    string nouns[numnouns];
    for(int i = 0; i < numadj; i++) {
        cin >> adj[i];
}
    for(int j = 0; j < numnouns; j++) {
        cin >> nouns[j];
    }
    
    for(int i = 0; i < numadj; i++) {
        for (int j = 0; j < numnouns; j++) {
        cout << adj[i] << " as " << nouns[j] << "\n";
        }
    }
    return 0;
}