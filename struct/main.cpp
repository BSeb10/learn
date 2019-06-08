#include <mbed.h>
#include "storage.cpp"

int main() {

  storage *stor[4];

  for (int8_t i = 0; i < 4; i++)
  {
    stor[i] = new storage;
    stor[i]->id = i;
  }
  
  stor[0]->name = "bond_0";
  stor[1]->name = "bond_1";
  stor[2]->name = "bond_2";
  stor[3]->name = "bond_3";
  
    // put your setup code here, to run once:

  while(1) {
    
    // put your main code here, to run repeatedly:
  }
}

