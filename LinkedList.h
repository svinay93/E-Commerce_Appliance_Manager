#pragma once

#include<iostream>
#include<string.h>
#include "AppliancePtr.h"
using namespace std;


class LinkedList{

public:

    struct Node {
        int ID;
        std::string file;
        Node *next;

  };

public:
      LinkedList();

      ~LinkedList();

  
bool FindID(string file);
void Create(int id);
void List();

  private:
    Node* head;
};
  
