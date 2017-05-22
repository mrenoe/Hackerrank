/*
Input Format
A single string containing a time in 12-hour clock format (i.e.: hh:mm:ssAM  or hh:mm:ssPM ), where 01<=hh<=12 and 00<=mm, ss<=59.

Output Format
Convert and print the given time in 24-hour format, where 00<=hh<=23.
*/

#include <cmath>
#include <cstdio>
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*Begin user generated code*/

string convertTime(string inTime)
    {
    string outTime;
    vector<int> time (3);
    string format;
    time[0] = atoi(inTime.substr(0,2).c_str());
    time[1] = atoi(inTime.substr(3,2).c_str());
    time[2] = atoi(inTime.substr(6,2).c_str());
    format = inTime.substr(8,2);
    if(strcmp(format.c_str(), "AM") == 0)
        if(time[0] == 12){
            time[0] -= 12;
            char buf[11];
            sprintf(buf, "%02d:%02d:%02d", time[0],time[1],time[2]);
             return string(buf);
        }
        else 
            return inTime.substr(0,8);
    else {
        char buf[11];
        if(time[0] == 12){
            sprintf(buf, "%02d:%02d:%02d", time[0],time[1],time[2]);
        } else {
            sprintf(buf, "%02d:%02d:%02d", time[0]+12,time[1],time[2]);
        }
        outTime=string(buf);
    }
    return outTime;
}
/*End user generated code */
int main(){
    string time;
    cin >> time;
    cout << convertTime(time) <<endl;
    return 0;
}
