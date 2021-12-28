#include <bits/stdc++.h>

using namespace std;
/*
Suppose, you have to save user search history (a single word) of a mobile application on local storage. According
to the application requirements, you need to save only the last 5 search words. You can’t increase the memory on
local storage by saving all data. Write a functional program to save the last 5 keywords. Here are the last 5 saved
words: Xmas Gift Tree Light People (save these in an array or in a list first). Loop the program for 2 times and then
terminate.
Test1
Storage: Gift Tree Light People Test1
Test2
Storage: Tree Light People Test1 Test2
*/
int main()
{
    //string arr[]={"Xmas","Gift","Three","Light","People"};
    list<string> l;
    list<string> :: iterator it;

    l.push_back("Xmas");
    l.push_back("Gift");
    l.push_back("Three");
    l.push_back("Light");
    l.push_back("People");

    string x;
    for(int i=0; i<2; i++)
    {
        cin>> x;
        l.pop_front();
        l.push_back(x);

        //print output
        cout<< "Storage: ";
        for ( it = l.begin(); it !=
                l.end(); ++it)
            cout<< *it<< " ";
            cout<<endl;
    }



    return 0;
}
