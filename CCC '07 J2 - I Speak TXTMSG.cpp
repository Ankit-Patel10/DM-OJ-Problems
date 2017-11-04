#include <bits/stdc++.h>

using namespace std;

int main() {
  string line;
    do {
        getline(cin, line);
        if(line == "CU") {
            cout << "see you\n";
        }
        else if (line == ":-)") {
            cout << "I'm happy\n";
        }
        else if (line == ":-(") {
            cout << "I'm unhappy\n";
        }
        else if (line == ";-)") {
            cout << "wink\n";
        }
        else if (line == ":-P") {
            cout << "stick out my tongue\n";
        }
        else if (line == "(~.~)") {
            cout << "sleepy\n";
        }
        else if (line == "TA") {
            cout << "totally awesome\n";
        }
        else if (line == "CCC") {
            cout << "Canadian Computing Competition\n";
        }
        else if (line == "CUZ") {
            cout << "because\n";
        }
        else if (line == "TY") {
            cout << "thank-you\n";
        }
        else if (line == "YW") {
            cout << "you're welcome\n";
        }
        else if (line == "TTYL") {
            cout << "talk to you later\n";
        }
        else {
            cout << line << "\n";
        }
        
    }while(line != "TTYL");
    
    
    
    return 0;
}