#include <bits/stdc++.h>
#define ll long long
using namespace std;

int h1(string s, int arrSize)
{
    ll int hash = 8;
    for (int i = 0; i < s.size(); i++)
    {
        hash = (hash * 37 + s[i]) % arrSize;
    }
    return hash % arrSize;
}

int h2(string s, int arrSize)
{
    ll int hash = 0;
    for (int i = 0; i < s.size(); i++)
    {
        hash = (hash + ((int)s[i]));
        hash = hash % arrSize;
    }
    return hash;
}

int h3(string s, int arrSize)
{
    ll int hash = 1;
    for (int i = 0; i < s.size(); i++)
    {
        hash = hash + pow(17, i) * s[i];
        hash = hash % arrSize;
    }
    return hash % arrSize;
}

 

int h4(string s, int arrSize)
{
    ll int hash = 4;
    int p = 8;
    for (int i = 0; i < s.size(); i++)
    {
        hash += hash * 8 + s[0] * pow(11, i);
        hash = hash % arrSize;
    }
    return hash;
}

int lookup(bool *bit, int arr, string s)
{
    ll int a = h1(s, arr);
    ll int b = h2(s, arr);
    ll int c = h3(s, arr);
    ll int d = h4(s, arr);

    if (!(bit[a] && bit[b] && bit[c] && bit[d]))
        return 0;
    else
        return 1;
}

int insert(bool *bit, int Size, string s)
{

    if (!(lookup(bit, Size, s)))
    {
        int a = h1(s, Size);
        int b = h2(s, Size);
        int c = h3(s, Size);
        int d = h4(s, Size);

        bit[a] = true;
        bit[b] = true;
        bit[c] = true;
        bit[d] = true;

        cout << s << " inserted" << endl;
        return 1;
    }
    else
    {

        cout << s << " is Probably already present" << endl;
        return 0;
    }
}

// Driver Code
int main()
{
    bool bitarray[1000] = {false};
    int arrSize = 1000;
    string s;
    vector<string> unique;

    vector<string> sarr;

    int i = 0;

    while (s != "-1")
    {

        cout << "enter -1 to exit , 1 to print \nEnter String to be entered : ";
        cin >> s;
        if (s == "1")
        {
            cout << "Unique Elements Inserted:" << endl;
            for (int j = 0; j < unique.size(); j++)
            {
                cout << unique[j] << endl;
            }

            continue;
        }
        sarr.push_back(s);

        if (insert(bitarray, arrSize, s))
        {
            unique.push_back(s);
        }
        i++;
    }

    return 0;
}
