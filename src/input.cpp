#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "arbol.h"
#include "input.h"
#include "nominaInput.h"
#include "independienteInput.h"
#include "OutOfBoundsException.h"
#include "FileCouldntBeFoundException.h"
using namespace std;

Input::Input(){

}

void Input::Read() {

    std::ifstream ifs("Personas.txt", std::ifstream::in);
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
    bool initial=true;

    while (std::getline(ifs, line)) {

        try
        {
            std::istringstream stream(line);

            //variables where read values will be stored and then printed 
            int id {0};
            char name[16]={' '};
            char lastname[16]={' '};
            char email[51]={' '};
            int type{0};
            int svID {0};

            //string to store string values temporarily 
            string temp;

            
            //id in text file is stored in int id
            stream >> id;

            //name in text file is stored in string temp
            stream >> temp;

            //if temp string is longer that 15 characters, only the first 15 are stored in name 
            if (temp.size()>15){
                for (int i = 0; i < 15; i++)
                {
                    name[i]=temp.at(i);
                    
                }
            }
            else{
                for (int i = 0; i < temp.size(); i++)
                {
                    name[i]=temp.at(i);
                }
            }


            //lastname in text file is stored in string temp
            stream >> temp;

            //if temp string is longer that 15 characters, only the first 15 are stored in lastname 
            if (temp.size()>15){
                for (int i = 0; i < 15; i++)
                {
                    lastname[i]=temp.at(i);
            
                }
            }
            else{
                for (int i = 0; i < temp.size(); i++)
                {
                    lastname[i]=temp.at(i);
                }
            }
            
            //email in text file is stored in string temp
            stream >> temp;
            
            //if temp string is longer that 50 characters, only the first 50 are stored in email 
            if (temp.size()>50){
                for (int i = 0; i < 50; i++)
                {
                    email[i]=temp.at(i);
            
                }
            }
            else{
                for (int i = 0; i < temp.size(); i++)
                {
                    email[i]=temp.at(i);
                }
            }

            //storing type in variable
            stream >> type;

            //storing Supervisor ID in variable 
            stream >> svID;

            //

            switch (type)
            {
            case 1:
                NominaInput *in = new NominaInput(id);
                int salary=in->Read();
                EmpleadoNomina* emp = new EmpleadoNomina(id, name, lastname, email, type, svID, salary);  
                break;
            
            default:
                IndependienteInput *in = new IndependienteInput(id);
                int payperhour[2]=in->Read();
                EmpleadoIndependiente* emp = new EmpleadoIndependiente(id, name, lastname, email, type, svID, payperhour[0], payperhour[1]);
                break;
            }

            //Checks that the arbol exists, if not, creates one.
            if (initial)
            {
                Arbol *arbol = new Arbol(id, emp);
                initial=false;
            }
            else{
                arbol->AgregarNodo(id, emp, svID);
            }
            

        }
        catch (string &excepcion)
        {
            cerr << excepcion << endl;
        }
    }
    
    ifs.close();
}