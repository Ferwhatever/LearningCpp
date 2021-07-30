#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
int main(){
    vector <int> v1;
    vector <int> v2;
    v1.push_back(10);
    v1.push_back(20);
    cout<< v1.at(0)<<", "<<v1.at(1)<<endl;
    v2.push_back(100);
    v2.push_back(200);
    cout<< v2.at(0)<<", "<<v2.at(1)<<", size:"<<v2.size() <<endl;
    vector <vector <int>> vector2d;
    vector2d.push_back(v1);
    vector2d.push_back(v2);
    cout<<vector2d.at(0).at(0)<<","<<vector2d.at(0).at(1)<<endl;
    cout<<vector2d.at(1).at(0)<<","<<vector2d.at(1).at(1)<<endl;
    v1.at(0)=1000;
    cout<<vector2d.at(0).at(0)<<","<<vector2d.at(0).at(1)<<endl;
    cout<<vector2d.at(1).at(0)<<","<<vector2d.at(1).at(1)<<endl;
    cout<< v1.at(0)<<", "<<v1.at(1)<<endl;


    return 0;
}