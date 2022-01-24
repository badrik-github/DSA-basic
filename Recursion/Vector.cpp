
// C++ program to illustrate the
// capacity function in vector
#include <iostream>
#include <vector>

using namespace std;

void fun(vector<int> g1)
{
    for (int i = 0; i < g1.size(); i++)
        cout << g1[i] << " ";
}

int main()
{
    vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    fun(g1);

    return 0;
}