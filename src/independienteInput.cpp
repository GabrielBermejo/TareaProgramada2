#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "independienteInput.h"
#include "OutOfBoundsException.h"
#include "FileCouldntBeFoundException.h"
using namespace std;

IndependienteInput::IndependienteInput(){

}

void IndependienteInput::Read(int targetID) {

    std::ifstream ifs("HorasTrabajadas.txt", std::ifstream::in);
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
            int payperhour[2];

            //string to store string values temporarily 
            string temp;

            
            //id in text file is stored in int id
            stream >> id;

            //name in text file is stored in string temp
            stream >> payperhour[0];

            stream >> payperhour[1];
            if (id==targetID)
            {
                return payperhour;
            }
            
            
        }
        catch (string &excepcion)
        {
            cerr << excepcion << endl;
        }
    }
    
    ifs.close();
}