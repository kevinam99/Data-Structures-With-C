#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int item;
     vector<int> ss;
     cout<<"Enter values to be inserted: ";
      for(item=0;item<10;item++)
            cin>>item;

            ss.push_back(item);

    // Declaring first iterator
    vector<int>::iterator i1;

    // Declaring second iterator
    vector<int>::iterator i2;

    i1 = ss.begin();

    i2 = ss.end();

    if ( i1 < i2)
    {
        cout << "Yes";
    }

    int count = i2 - i1;

    cout << "\ncount = " << count;
    return 0;
}
