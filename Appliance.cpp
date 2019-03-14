#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <sstream>
#include <map>
#include <string>
#include "Appliance.h"
#include "AppliancePtr.h"
#include<bits/stdc++.h>
using namespace std;

Appliance::Appliance()
{
    id=NULL;
}

Appliance::~Appliance()
{
}

int Appliance::Create()
    {

  cout<<"Enter the Appliance ID\n";
            cin>>id;
            cin.ignore();
            if(id<0 || id>9)
            {
                cout<<"The ID enter is invalid! Enter ID between 0 to 9\n";
                return 0;
            }
             
            stringstream inputStream;
            inputStream<<id;

            appliance = inputStream.str()+".txt";
            cout<<appliance<<endl;
            cout<<"Enter the Manufacturer of the Appliance:\n";
            cin>>manufacturer;
            cin.ignore();
            cout<<"Enter the price of the Appliance:\n";
            cin>>price;
            cin.ignore();
            cout<<"Enter Type of the Appliance\n0 for Laundry_Machine\n1 for Dish_Washer\n2 for Dryer:\n";
            cin>>num;
            cin.ignore();

            cout<<"Enter paths for Images:\n";
            for(int i = 0; i < 4; i++)
            {
                       cout<<"Enter path for Image "<<(i+1)<<" of Appliance:\n";
                       cin>>StringArray[i];
                       cin.ignore();

            }

            
             ofstream outfile;
             outfile.open(this->appliance);

             outfile<<id<<endl;
             outfile<<manufacturer<<endl;

             outfile<<this->price<<endl;
             if(num==0)
                outfile<<"Laundry_Machine"<<endl;
            else if(num==1)
                outfile<<"Dish_Washer"<<endl;
            else
            {
                outfile<<"Dryer"<<endl;
            }
            for(int i = 0; i < 4; i++)
            {

                       outfile << StringArray[i] << endl;
            }

                outfile.close();
                return id;

            }
    

void Appliance::Edit(double price)
   {

       this->price=price;
       return;
   }
   
void Appliance::File(string file)
      {

            string data;
            ifstream inputFile;
            inputFile.open(file);



   ifstream myfile(file);
   this->appliance=file;
   inputFile >> data;
   
   string::size_type sz;

  this->id = std::stoi (data,&sz);
  
    inputFile >> data;
    this->manufacturer=data;

    inputFile>>data;    

    this->price= atof(data.c_str());

    inputFile >> data;

   if(data=="Laundry_Machine")
   {
       num=0;
   }
   else if(data=="Dish_Washer")
   {
       num=1;

   }
   else if(data=="Dryer")
   {
       num=2;
   }
    
    inputFile >> data;
    StringArray[0]=data;
    inputFile >> data;
    StringArray[1]=data;
    inputFile >> data;
    StringArray[2]=data;
    inputFile >> data;
    StringArray[3]=data;

   inputFile.close();
return;
}

   

void Appliance::Save()
    {

        std::ofstream outfile;
        outfile.open(this->appliance);

        outfile<<id<<endl;
        outfile<<manufacturer<<endl;

        outfile<<this->price<<endl;
        if(num==0)
            outfile<<"Laundry_Machine"<<endl;
        else if(num==1)
            outfile<<"Dish_Washer"<<endl;
        else{
            outfile<<"Dryer"<<endl;
        }
        for(int i = 0; i < 4; i++)
            {
            outfile << StringArray[i] << endl;
            }
            outfile.close();
            return;
}




