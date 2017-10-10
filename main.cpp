//Saif Alketbi
//CSCI 111
//x18

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    vector<vector<int> > v(12);

    for (int i=0;i<12;i++)
    {
        v[i].resize(12);
    }

    cout << "X  1     2     3     4     5     6     7     8     9     10    11    12" << endl;

    for (int i=0;i<12;i++)
    {
        cout << left;
        cout << setw(3);
        cout << (i+1);
        for (int j=0;j<12;j++)
        {
            v[i][j] = (i+1)*(j+1);
            cout << left;
            cout << setw(3);
            cout << v[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}
