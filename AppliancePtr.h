#pragma once

#include "Appliance.h"

class AppliancePtr
{
protected:

     Appliance *AppPtr;
     AppliancePtr(const AppliancePtr&);
     AppliancePtr& operator=(const AppliancePtr&); 

public:

     AppliancePtr(Appliance *appliance);
     ~AppliancePtr();
     Appliance& operator* () ;
     Appliance* operator-> () ;

};

