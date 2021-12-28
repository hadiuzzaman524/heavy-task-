#include <bits/stdc++.h>

using namespace std;
/*
Suppose, there is a sequence of 5 numbers. Numbers are in random order, Write a program that will find
the missing number in the sequence.
Input:
9 18 6 3 12
Output:
15
*/


int findGCDOfTotalArray(vector<int> arr, int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = __gcd(arr[i], result);

        if(result == 1)
        {
            return 1;
        }
    }
    return result;
}

int main()
{
    vector<int> arr;
    int x;
    for(int i=0; i<5; i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());

    int dif=findGCDOfTotalArray(arr,5);

    int temp= arr[0];

    for(int i=1; i<arr.size(); i++)
    {
        if(arr[i]!=temp+dif)
        {
            //print missing number
            cout<<temp+dif<<endl;
            break;
        }
        temp= arr[i];

    }

    return 0;
}
