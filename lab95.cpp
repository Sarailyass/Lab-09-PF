#include<iostream>
using namespace std;
int main()
{
    char color;
    cout<< "Enter the traffic color";
    cin>>color;
    switch (color)
     {
        case 'R':
         cout << "Action: Stop"<<endl;
         break;
        case 'G':
        cout << " Action: Go"<<endl;
        break;
        case 'Y':
         cout << "Action: Slow down"<<endl;
        break;
        default:
       cout << "Invalid" ;
    }

    return 0;
}