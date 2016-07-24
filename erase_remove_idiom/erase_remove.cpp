#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> foo{ 1, 2, 3, 4, 5 };

    cout << foo.size() << endl;

    auto remove_it = remove( foo.begin(), foo.end(), 3 );
    
    cout << foo.size() << endl;

    for( auto i : foo )
        cout << i;
    cout << endl;

    foo.erase( remove_it, foo.end() );

    cout << foo.size() << endl;

    for( auto i : foo )
        cout << i;
    cout << endl;

    return 0;
}
