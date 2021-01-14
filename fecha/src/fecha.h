#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <string>

/**
* @file cripto.cc
* @brief El programa ordena las fechas pasadas por el usuario en formato DD/MM/YY y las vuelca
         en un fichero fechas_ordenadas.txt
* @bug No hay bugs conocidos
* @file fechas.cc
* @brief Fichero donde están todas las definiciones de funciones a utilizar.
* @bug No hay bugs conocidos
* @file fecha.h
* @brief Fichero header donde están las declaraciones de las funciones  y la documentación del programa.
* @bug No hay bugs conocidos
* @author F.Javier Viña Rodríguez alu0101217536@ull.edu.es
* @date 14 Jan 2021
*/

class fecha{
  private:
    static int dia, mes, year;

    public:
    static int getDay(std::string date){
    int day = 10*(date[0] - '0') + date[1] - '0';
    return day;
      
    }
    static int getMonth(std::string date){
    int month = 10*(date[3] - '0') + date[4] - '0';
    return month;

      
    }

    static int getYear(std::string date){
    int Year = 10*(date[6] - '0') + date[7] - '0';
    return Year;
      
    }
};

void fechas_sorter(std::string text_to_getline, std::string texto_salida); ///Funcion para ordenar las fechas. Se cogen los dias, fechas y horas de los strings pasados por el usuario
  ///se ordenan y después se comparan con las fechas que pasa el usuario. Cuando coincidan se añaden a otro vector (fechas_finished) que será el que se vuelque en el
  ///archivo de texto que da el usuario. Hay una serie de condiciones para ver que si los años son iguales de varias fechas se ordenan por meses, y si los meses también
  ///son iguales, se ordenan por días.

void usage(int argc, char* argv[]); ///manual para la ejecución del programa.
std::string char_pointer_to_string(char* caracter, std::string to_store_string); ///función para pasar de char pointer a string.


