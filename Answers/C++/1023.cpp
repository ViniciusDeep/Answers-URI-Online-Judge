//reads input cities and their water consumption.

#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

int main()
{
  //read in the first line of the city
  ifstream fin();
  stringstream sstr();
  int n = 0;
  string hold = "";
  int residents, consumption;

  while (fin >> hold)
  {
    //loop through each city
    sstr(hold);
    sstr >> n;

    for (int k = 0; k < n; k++)
    {
      //this will look at the lines that correspond to this city
    }
    cout << "City#: " << n << endl;
    cout << residents << endl;
    cout << "Consumption: " << consumption << endl;
    cout << endl;
  }

  return 0;
}
