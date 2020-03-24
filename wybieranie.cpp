#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    string(s) = "karol";

    for (int i=0; i<s.length()-1; i++)
        for (int j=0; j<s.length()-1; j++)
            if (s[j]>s[j+1])
                swap(s[j], s[j+1]);

    cout<<s;

    return 0;
}
