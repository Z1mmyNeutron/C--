#include <iostream>

using namespace std;
class Entity{

    public: 
        Entity(){
            cout << "created entity" << endl;
        }Entity(){
            cout << "Deleted entity" << endl;
        }
};


int main(){
    {
        Entity e;
        
    }
    cin.get();
    return 0;
}