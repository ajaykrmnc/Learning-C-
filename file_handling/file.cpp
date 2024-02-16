#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin;
    fin.open("input.txt");
    char c;
    while(!fin.eof()){
        fin >> c;
        if(!fin.eof()){
            cout << c << " ";
        }
    }
    return 0;
}