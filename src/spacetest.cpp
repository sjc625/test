#include <unistd.h>
#include <iostream>
#include <string>
#include "../include/spacehauc-i2c-dev.h"
#include "../include/spacehauc-i2c-mock.h"

using std::string;
using std::cerr;
using std::cout;
using std::endl;

using namespace spacehauc_i2c_mock;

int main(int argc, char* argv[])
{
  int i = 0;
  cout << "Testing Temperature Sensor" << endl;
  MCP9808 tempSensor(0x18);
  tempSensor.init();
  cout << "Temperature Sensor Initialized" << endl
  << "Reading Temperature Data..." << endl;
  for(i = 0; i<=100; i++)
  {
    cout << tempSensor.getName() << ": Temperature = ";
    cout << tempSensor.read() << endl;
  }
    return 0;
}
