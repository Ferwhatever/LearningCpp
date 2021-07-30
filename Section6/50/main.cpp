#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    const double price_per_room{30};
    const double sales_tax{.06};
    const int estimate_expiry{30};//days
    cout<<"Hello welcome to Carpet CleanServ"<<endl;
    cout<<"\nHow many rooms would you like cleaned? ";
    int number_of_rooms{0};
    cin>>number_of_rooms;
    cout<<"\nEstimate for carpet cleaning service"<<endl;
    cout<<"Number of rooms: "<<number_of_rooms<<endl;
    cout<<"Price per room $"<<price_per_room<<endl;
    cout<<"Cost :$"<<price_per_room*number_of_rooms<<endl;
    cout<<"Tax $" <<price_per_room*number_of_rooms*sales_tax<<endl;
    cout<<"Total estimate $"<<(price_per_room*number_of_rooms)+(price_per_room*number_of_rooms*sales_tax)<<endl;
    cout<<"This estimate is valid for "<<estimate_expiry<<" days"<<endl;

    return 0;
}