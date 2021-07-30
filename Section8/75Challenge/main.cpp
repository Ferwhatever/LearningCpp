#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int cents{}, dollars{},quarters{},dimes{};
    cout<<"Enter the amount of cents:";
    cin>>cents;
    if(cents>99){
        dollars=cents/100;
        cents%=100;
    }
    if(cents>24){
        quarters=cents/25;
     cents%=25;
    }  
    if(cents>9){
        dimes=cents/10;
     cents%=10;
    }
    cout<<"Dollars :"<<dollars <<endl;
    cout<<"Quarters :"<<quarters <<endl;
    cout<<"Dimes :"<<dimes <<endl;
    cout<<"Pennies :"<<cents <<endl;
    return 0;
}
