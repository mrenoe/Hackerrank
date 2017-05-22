/*
Input Format
The first line contains a single string, a. 
The second line contains a single string, b.

Constraints
1<=abs(a), abs(b)<=10^4
It is guaranteed that  and  consist of lowercase English alphabetic letters (i.e., a through z).

Output Format
Print a single integer denoting the number of characters you must delete to make the two strings anagrams of each other.
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
/** User generated code begins here: */
int number_needed(string a, string b) {
    
    vector <int> freq(26, 0);
    for (auto c : a){
        freq[c - 'a']++;
    }
    for (auto c : b){
        freq[c - 'a']--;
    }
    int count = 0;
    for (auto val : freq)
        {
        count += abs(val);
        //count += val;
    }
    
    return count; 
}
/** User generated code ends */

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
