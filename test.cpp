#include <iostream>

using namespace std;

int minvalue(int n, int a[]) {
    int min = a[0];
    int position = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min) {
            min = a[i];
            position = i;
        }
    }
    return position;
}

int remove(int n,int a[]) {
    int pos = minvalue(n,a);
    for (int i = pos; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    int count = 0;
    n--;
    for (int i = 0; i < n; i++)
    {
        count += i;
    }
    
    return count;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << remove(n,a) << endl;
    return 0;
}