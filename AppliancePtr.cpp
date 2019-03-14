#include <iostream>
#include "Appliance.h"
#include "AppliancePtr.h"
#include <string.h>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include<bits/stdc++.h>
using namespace std;


AppliancePtr::AppliancePtr(Appliance *appliance){
            AppPtr=appliance;

}
AppliancePtr::~AppliancePtr()
{

    delete AppPtr;
}

     Appliance& AppliancePtr::operator*()
     {
          if(AppPtr==NULL)
            {
            }
          return *AppPtr;
     }

     Appliance* AppliancePtr::operator->()
     {
        if(AppPtr==NULL)
            {


            }
        return AppPtr;
     }


