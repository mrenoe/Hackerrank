/*
Input Format

The first line contains an integer, n, denoting the number of cupcakes. 
The second line contains n space-separated integers describing the respective calorie counts of each cupcake,c_0, c_1, ...,c_n-1 .

Constraints
1<=n<=40
1<=c_i<=1000

Output Format

Print a long integer denoting the minimum number of miles Marc must walk to maintain his weight.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> calories(n);
    for(int calories_i = 0; calories_i < n; calories_i++){
       cin >> calories[calories_i];
    }
/*Begin user generated code*/
    sort(calories.begin(), calories.end(), greater<int>());
    long long int sum=0;
    for(int i = 0; i < calories.size(); i++)
        {
        sum += calories[i] * pow(2, i);
    }
    cout << sum << endl;
/*End user generated code */
    return 0;
}
