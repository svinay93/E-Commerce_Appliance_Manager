#include <iostream>
#include <fstream>
#include <string.h>
#include "LinkedList.h"
#include "Appliance.h"
#include "AppliancePtr.h"

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int editID,id;
    int i=0;
    int Track[3];
    int count=0;
    int temp;
    double priceAppliance;
    char choice;
    string App;
    string manufacturer;
    LinkedList *linklist=new LinkedList;
     
     
for(int mem=0;mem<3;mem++){
        Track[mem]=NULL;
     }

    cout<<"\t\t\t\t\tWELCOME TO APPLIANCE MANAGER:\n";

while(choice!='q')

{ cout<<"Select one of the available commands:\n";
    cout<<"l ---- LIST ALL APPLIANCES\n";
    cout<<"0 to 9 ---- ID OF APPLIANCE TO EDIT\n";
    cout<<"c ---- CREATE APPLIANCE\n";
    cout<<"p ----CHANGE PRICE OF APPLIANCE [Make sure to load the ID First and Save the updated price]\n";
    cout<<"s ----SAVE ALL THE APPLIANCE\n";
    cout<<"q ---- QUIT THE MANAGER\n";
    cin>>choice;
    
    
switch(choice)
    {
        
    case 'l':linklist->List();
                    break;

    case '0':editID=0;
                cout<<"Appliance "<<editID<<" loaded to memory press p to edit the price\n";
                break;
    
    case '1':editID=1;
                cout<<"Appliance "<<editID<<" loaded to memory press p to edit the price\n"; 
                break;

    case '2':editID=2;
                cout<<"Appliance "<<editID<<" loaded to memory press p to edit the price\n";
                break;

    case '3':editID=3;
                cout<<"Appliance "<<editID<<" loaded to memory press p to edit the price\n";
                break;
    
    case '4':editID=4;
                cout<<"Appliance "<<editID<<" loaded to memory press p to edit the price\n";
                break;
    
    case '5':editID=5;
                cout<<"Appliance "<<editID<<" loaded to memory press p to edit the price\n";
                break;
    
    case '6':editID=6;
                cout<<"Appliance "<<editID<<" loaded to memory press p to edit the price\n";
                break;
    
    case '7':editID=7;
                cout<<"Appliance "<<editID<<" loaded to memory press p to edit the price\n";
                break;
    
    case '8':editID=8;
                cout<<"Appliance "<<editID<<" loaded to memory press p to edit the price\n";
                break;
    
    case '9':editID=9;
                cout<<"Appliance "<<editID<<" loaded to memory press p to edit the price\n";
                break;

    case 'c':{
            if(i==3){
                i=0;
            }
             temp=Track[i];
             if(temp!=NULL)
            
            {
            Track[i]=NULL;
             }
            if(i==0){
             
            AppliancePtr inst1(new Appliance());
            Track[i]=inst1->Create();
            linklist->Create(Track[i]);
            AppliancePtr* inst1ptr=&inst1;
             i++;
             }else if (i==1){
                 
            AppliancePtr inst2(new Appliance());
            Track[i]=inst2->Create();
            linklist->Create(Track[i]);
            AppliancePtr* inst2ptr=&inst2;
            i++;}else if(i==2){
            
            AppliancePtr inst3(new Appliance());
            Track[i]=inst3->Create();
            linklist->Create(Track[i]);
            AppliancePtr* inst3ptr=&inst3;
             i++;}

    }




        break;
  
    case 'p':
        {
            stringstream stream;
            stream<<editID;

           App=stream.str()+".txt";
           if(i==3){
                i=0;
            }
            temp=Track[i];
             if(temp!=NULL)
             {

             Track[i]=editID;
             i++;
             }




  cout<<"Enter New price"<<endl;
  cin>>priceAppliance;
  cin.ignore();
  cout<<"Updated Price is"<<priceAppliance<<endl;



        }

        break;

    case 's':{
             AppliancePtr edit(new Appliance());
             edit->File(App);
             edit->Edit(priceAppliance);
             edit->Save();
   }
    break;
    
    case 'q': break;
    
    default: cout<<"Invalid choice"<<endl;
                break;

   }
}

   
    return 0;

}
