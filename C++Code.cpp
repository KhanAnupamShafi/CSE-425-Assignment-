#include <iostream>
#include <fstream>
#include<stdio.h>
#include<sstream>
#include <string.h>
#include <vector>
#include <sstream>

using namespace std;
string choice()
{

       string op;
    cout << "Enter you choice: ";
    getline(cin, op);
    cout << endl;

    if (op[op.length()-1] == '\n')
        op.erase(op.length()-1);

    return op;
}

int main(){

  ifstream ip("air_quality_Nov2017.csv");

  if(!ip.is_open()) std::cout << "ERROR: File Open" << '\n';
string Station;
string Air_Quality;
string Longitude;
string Latitude;
string O3_Hour;
string O3_Quality;
string O3_Value;
string NO2_Hour;
string NO2_Quality;
string NO2_Value;
string PM10_Hour;
string PM10_Quality;
string PM10_Value;
string Generated;
string Date_Time;
string query;

  cout<<
  "You can search by any of the following queries.. \n \n  1. Station name \n  2. Air Quality \n  3. Longitude \n  4. Latitude \n  5. O3 Quality \n  6. O3 Value \n  7. NO2 Quality \n  8. NO2 Value \n  9. PM10 Quality \n  10. PM10 Value \n  11. Date Generated  \n  12. Date Time>> \n\n";

string option = choice();

if(option == "1")
        {
           cout << "Provide Station name: ";}

        else if(option == "2")
        {
              cout << "Provide Air Quality Type: ";}

            else if(option == "3")
        {
               cout << "Provide Longitude: ";
               }
               else if(option == "4")
        {
                cout << "Provide Latitude ";
        }
          else if(option == "5")
        {
            string para;
            cout << "Provide O3 Quality Type: ";}
            else if(option == "6")
        {
            string para;
            cout << "Provide O3 Value: ";}
            else if(option == "6")
        {
            string para;
            cout << "Provide No2 Quality Type: ";}
            else if(option == "7")
        {
            string para;
            cout << "Provide NO2 Value: ";}
            else if(option == "8")
        {
            string para;
            cout << "Provide PM10 Quality Type: ";}
            else if(option == "9")
        {
            string para;
            cout << "Provide PM10 Value: ";}
            else if(option == "10")
        {
            string para;
            cout << "Provide Date and Time Generated on: ";}
            else if(option == "11")
        {
            string para;
            cout << "Provide Date Time: ";
        }




  cin>>query;



  while(ip.good()){
    getline(ip,Station,',');
    getline(ip,Air_Quality,',');
    getline(ip,Longitude,',');
    getline(ip,Latitude,',');
	getline(ip,O3_Hour,',');
	getline(ip,O3_Quality,',');
	getline(ip,O3_Value,',');
	getline(ip,NO2_Hour,',');
    getline(ip,NO2_Quality,',');
	getline(ip,NO2_Value,',');
	getline(ip,PM10_Hour,',');
	getline(ip,PM10_Quality,',');
	getline(ip,PM10_Value,',');
	getline(ip,Generated,',');
	getline(ip,Date_Time,'\n');



if(Station.find(query) != std::string::npos ||
   Air_Quality.find(query) != std::string::npos ||
    Longitude.find(query) != std::string::npos ||
    Latitude.find(query) != std::string::npos ||
    O3_Hour.find(query) != std::string::npos||
    O3_Quality.find(query) != std::string::npos ||
    O3_Value.find(query) != std::string::npos ||
    NO2_Hour.find(query) != std::string::npos ||
    NO2_Quality.find(query) != std::string::npos ||
    NO2_Value.find(query) != std::string::npos ||
    PM10_Hour.find(query) != std::string::npos ||
    PM10_Quality.find(query) != std::string::npos ||
    PM10_Value.find(query) != std::string::npos ||
    Generated.find(query) != std::string::npos ||
    Date_Time.find(query) != std::string::npos){


    std::cout << "Station Name: "<<Station<< '\n';
    std::cout << "Air Quality: "<<Air_Quality<< '\n';
    std::cout << "Longitude: "<<Longitude<< '\n';
    std::cout << "Latitude: "<<Latitude<< '\n';
    std::cout << "O3_Hour: "<<O3_Hour<< '\n';
	std::cout << "O3_Quality: "<<O3_Quality<< '\n';
	std::cout << "O3_Value: "<<O3_Value<< '\n';
	std::cout << "NO2_Hour: "<<NO2_Hour<< '\n';
	std::cout << "NO2_Quality: "<<NO2_Quality<< '\n';
	std::cout << "NO2_Value: "<<NO2_Value<< '\n';
	std::cout << "PM10_Hour: "<<PM10_Hour<< '\n';
	std::cout << "PM10_Quality: "<<PM10_Quality<< '\n';
	std::cout << "PM10_Value: "<<PM10_Value<< '\n';
	std::cout << "Generated: "<<Generated<< '\n';
	std::cout << "Date_Time: "<<Date_Time<< '\n';


        cout<<"-----------------------------\n";

}

  }

  ip.close();

}

