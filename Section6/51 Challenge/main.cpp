#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    const double price_small_room{25};
    const double price_large_room{35};
    const double sales_tax{.06};
    const int estimate_expiry{30};//days
    cout<<"Hello welcome to Carpet CleanServ"<<endl;
    cout<<"\nHow many small rooms would you like cleaned? ";
    int number_of_smallrooms{0};
    cin>>number_of_smallrooms;
    cout<<"\nHow many large rooms would you like cleaned? ";
    int number_of_largerooms{0};
    cin>>number_of_largerooms;
    cout<<"\nEstimate for carpet cleaning service"<<endl;
    cout<<"Number of small rooms: "<<number_of_smallrooms<<endl;
    cout<<"Price per small room $"<<price_small_room<<endl;
    cout<<"Number of rooms: "<<number_of_largerooms<<endl;
    cout<<"Price per room $"<<price_large_room<<endl;
    int cost=(price_small_room*number_of_smallrooms)+(price_large_room*number_of_largerooms);
    cout<<"Cost :$"<<cost<<endl;
    int tax=cost*sales_tax;
    cout<<"Tax $" <<tax<<endl;
    cout<<"Total estimate $"<<cost+tax<<endl;
    cout<<"This estimate is valid for "<<estimate_expiry<<" days"<<endl;

    return 0;
}