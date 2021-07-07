
// CPP program to illustrate pair STL
#include <iostream>
#include <iomanip>
#include <utility>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    pair<int, char> PAIR1;

    PAIR1.first = 100;
    PAIR1.second = 'G';

    cout << "First element of Pair: "<<PAIR1.first << "\n";
    cout << "Second element of Pair: "<<PAIR1.second << endl;

    // Different ways to initialize pair:
    pair<int, char>  g1;         //default
    pair<int, char>  g2(1, 'a');  //initialized,  different data type
    pair<int, int>  g3(1, 10);   //initialized,  same data type
    pair<int, int>  g4(g3);    //copy of g3

    // Another way to initialize a pair is by using the make_pair() function.
    g2 = make_pair(1, 'a');

    // pair relational operators
    pair<int,char> foo (10,'z');
    pair<int,char> bar (90,'a');

    if (foo==bar)
        cout << "foo and bar are equal\n";
    if (foo!=bar)
        cout << "foo and bar are not equal\n";
    if (foo< bar)
        cout << "foo is less than bar\n";
    if (foo> bar)
        cout << "foo is greater than bar\n";
    if (foo<=bar)
        cout << "foo is less than or equal to bar\n";
    if (foo>=bar)
        cout << "foo is greater than or equal to bar\n";


    // vector pair combination
    vector<pair<int, string>> v = { {2, "baz"},
        {2, "bar"},
        {1, "foo"}
    };
    sort(v.begin(), v.end());

    for(auto p: v)
    {
        cout << "{" << p.first << ", " << quoted(p.second) << "}\n";
    }
    return 0;
}
