#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "nominaInput.h"
#include "OutOfBoundsException.h"
#include "FileCouldntBeFoundException.h"
using namespace std;

NominaInput::NominaInput(){

}

int NominaInput::Read(int targetID) {

    std::ifstream ifs("Nomina.txt", std::ifstream::in);
    if (!ifs.is_open())
    {
        throw FileCouldntBeFoundException();
        exit(1);
    }

    string line {""};

    //Reads the first 3 characters because they are not part of the file's content
    ifs.get();
    ifs.get();
    ifs.get();
    bool initial=false;

    while (std::getline(ifs, line)) {

        try
        {
            std::istringstream stream(line);

            //variables where read values will be stored and then printed 
            int id {0};
            int salary {0};

            //string to store string values temporarily 
            string temp;

            
            //id in text file is stored in int id
            stream >> id;

            //name in text file is stored in string temp
            stream >> salary;
            if (id==targetID)
            {
                return salary;
            }
            
            
        }
        catch (string &excepcion)
        {
            cerr << excepcion << endl;
        }
    }
    
    ifs.close();
    return 0;
}