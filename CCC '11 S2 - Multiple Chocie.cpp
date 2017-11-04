#include <bits/stdc++.h>

using namespace std;

int main() {
    int responses;
    cin >> responses;
    
    int questions = responses;
    char res[questions];
    char ans[questions];
    for(int i = 0; i < questions; i++) {
        cin >> res[i];
    }
    for(int j = 0; j < questions; j++) {
        cin >> ans[j];
    }
    int correct = 0;
    for(int k = 0; k < questions; k++) {
        if(res[k] == ans[k]) {
            correct++;
        }
    }
    
    cout << correct;
    return 0;
}