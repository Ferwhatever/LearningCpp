#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    cout << "Enter the width of the room ";
    int room_width{0};
    cin >> room_width;
    
    cout << "Enter the width of the room ";
    int room_lenght{0};
    cin >> room_lenght;
    cout << "The area of the room is: "<<room_width*room_lenght<<endl;
    return 0;
}