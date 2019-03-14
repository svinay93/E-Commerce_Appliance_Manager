#include <iostream>
#include <fstream>
#include <string>
#include "LinkedList.h"
#include <bits/stdc++.h>
using namespace std;


LinkedList::LinkedList(){
    head=NULL;
}
LinkedList::~LinkedList(){  
}
    
void LinkedList::List(){

    Node *temp=head;
    int i=0;
    cout<<"List of all appliances:\n";
        while(temp!=NULL)
        {
            char list[500];
            ifstream input;
            stringstream stream;
            stream<<i;

        string App=stream.str()+".txt";
        input.open(temp->file);

        cout << "Appliance Number " <<i<<":\n";
        i++;
   
    input >> list;
    cout << "ID:"<<list << endl;
    input >> list;
    cout << "Name:"<<list << endl;
    input >> list;
    cout <<"Price:"<< list << endl;
    input >> list;
    cout << "Type:"<<list << endl;
    input >> list;
    cout << "Path:\n"<<list << endl;
    input >> list;
    cout << list << endl;
    input >> list;
    cout << list << endl;
    input >> list;
    cout << list << endl;

    input.close();
    temp=temp->next;
    }
}


  void LinkedList::Create(int id)
  {

        Node *ptr;
        Node *temp = new Node();   
        temp->ID = id;
        stringstream stream;
        stream<<id;

        string App=stream.str()+".txt";
        temp->file=App;
        
        temp->next = NULL;      
        if(head==NULL)
        {
            head=temp;
        }

        else
        {
            ptr=head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=temp;
        }
        temp=NULL;
              
              return; 
    }

    bool LinkedList::FindID(string file)
    {
        Node *temp=head;


        while(temp!=NULL)
        {

            if(temp->file==file)
            {

                 return true;
            }
            temp=temp->next;

        }
        return false;

    }







