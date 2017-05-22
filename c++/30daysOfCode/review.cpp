/*
Input format
The first line contains an integer, T (the number of test cases). 
Each line i of the T subsequent lines contain a String, S.

Constraints
1<=T<=10
2<=length of S <=10000

Output Format
For each String S_j (where 0<=j<=T-1 ), print S_j's even-indexed characters, followed by a space, followed by S_j's odd-indexed characters.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Fully user generated */
int main() {
    int n;
    cin >> n;
    string word;
        for (int i = 0; i < n; i++){
            cin >> word;
            string str1 = "";
            string str2 = "";
            for (int j = 0; j< word.size();j++){
                if (j%2 == 0){
                    str1 += word[j];
                } else{
                    str2 += word[j];
                }
            }
            cout << str1 <<" "<< str2 <<endl;
        } 
    
    return 0;
}

