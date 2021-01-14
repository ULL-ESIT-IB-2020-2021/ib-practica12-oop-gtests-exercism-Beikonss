#include "fecha.h"



int main(int argc, char* argv[]){
    
usage(argc, argv);

std::string text_file;
std::string fichero_entrada = char_pointer_to_string(argv[1], text_file);
std::string fichero_salida = char_pointer_to_string(argv[2], text_file);

fechas_sorter(fichero_entrada, fichero_salida);

return 0;

}

