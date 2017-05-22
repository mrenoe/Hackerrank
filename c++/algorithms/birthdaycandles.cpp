/*
Input Format
The first line contains a single integer, n, denoting the number of candles on the cake. 
The second line contains n space-separated integers, where each integer i describes the height of candle .

Constraints
1<=n<=10^5
1<=height_i<=10^7

Output Format
Print the number of candles Colleen blows out on a new line.

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


int main(){
    int n;
    cin >> n;
    vector<int> height(n);
    int tallestInt = 0;
    int count = 0;
    int newInt = 0;
    for(int height_i = 0;height_i < n;height_i++){
       cin >> newInt;
/*Begin User generated Code */
       if (height_i==0){
          tallestInt = newInt;
          count++;
       }else{
            if (newInt > tallestInt){
                tallestInt = newInt;
            } else if (tallestInt == newInt){
                count++;
            }
        }
            
       newInt = height[height_i];
    }
    cout << count <<endl;
/*end user generated code*/
    return 0;
}

