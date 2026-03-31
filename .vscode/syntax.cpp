#include <iostream>
using namespace std;
// making a calculator using c++ should be fineee i think idk
int main()
{
    int x; 
    int y;
    string method;
    int output;

    // entering numbers 
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter another: ";
    cin >> y;

    cout << "----------------";
    
    // method
    cout << "\nWhat method would you want to use on these numbers?: (add,subtract,multiply,divide) ";
    cin >> method;
    // uhh idk
    
    if (method == "add"){
        cout << x+y;
    } 
    else if (method == "subtract") {
        cout << x-y;
    }
    else if (method == "multiply"){
        cout << x*y;
    }
    else if (method == "divide") {
        cout << x/y;
    }

    return 0;
}
