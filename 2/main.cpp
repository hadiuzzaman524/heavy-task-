#include <bits/stdc++.h>
using namespace std;
/* Write a program that will reverse a string and remove all numeric characters (0-9) if it exists.
Input:
1791hsedalgnab
Output:
bangladesh
*/
int main()
{
    string s;
    getline(cin, s);

    string rev="";
    int len=s.size();

    for(int i=len; i>=0; i--)
    {
        rev+= s[i];
    }

    string result="";
    for(int i=0; i<rev.size(); i++)
    {
        if(isalpha(rev[i]))
        {
            result+= rev[i];
        }
    }
    cout<< result<<endl;


    return 0;
}
