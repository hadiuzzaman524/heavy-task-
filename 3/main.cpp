#include <bits/stdc++.h>

using namespace std;

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
