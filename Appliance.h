#pragma once

#include<string>
using namespace std;

class LinkedList;
class Appliance
{

public:
int id;
double price;
enum types
        {
            Laundry_Machine,
            Dish_Washer,
            Dryer
        };

int num;
string manufacturer;
string appliance="";

string StringArray[4];
    Appliance();
    ~Appliance();
    
    int Create();
    void File(string file);
    bool FindID(int id);
    void Edit(double price);
    void Save();
    void List();
    void display();

};