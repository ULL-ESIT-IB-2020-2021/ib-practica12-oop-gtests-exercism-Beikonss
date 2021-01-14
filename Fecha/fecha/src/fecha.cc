  
  #include "fecha.h"
  
  std::string kHelpText = "Programa que ordena las fechas introducidas de mayor año a menor. Para usarlo ejecute ./fecha fichero_entrada.txt fichero_salida.txt";



  void fechas_sorter(std::string text_to_getline, std::string texto_salida){      

  std::string line;
  std::ifstream myfile (text_to_getline);
  std::vector<std::string> fechas{};
  std::ofstream user_file(texto_salida);

  std::vector<int> fechas_years{};
  std::vector<int> fechas_meses{};
  std::vector<int> fechas_dias{};

  std::vector<std::string> fechas_finished{};
  bool storer;
  int storer_var = 1;
  int month_var = 0;
  int day_var = 0;

  if (myfile.is_open())
  {
    while ( getline (myfile,line,' ') )
    {
      fechas.push_back(line);
    }
    myfile.close();
  }
  for (int i = 0; i<fechas.size(); i++){
    fechas_years.push_back(fecha::getYear(fechas[i]));              
  }

  std::sort(fechas_years.rbegin(), fechas_years.rend());

  for (int i = 0; i<fechas.size(); i++){
    fechas_dias.push_back(fecha::getDay(fechas[i]));
  }

  std::sort(fechas_dias.begin(), fechas_dias.end());

  for (int i = 0; i < fechas.size(); i++){
    fechas_meses.push_back(fecha::getMonth(fechas[i]));
  }

  std::sort(fechas_meses.begin(), fechas_meses.end());
  fechas_finished.push_back("Fechas:");

  for (int j = 0; j<fechas_years.size(); j++){
    for (int k = 0; k<fechas.size(); k++){
      storer_var = storer_var +1;
      if (storer_var == fechas.size()-1){
        storer_var = 0;
      }
      if (fecha::getYear(fechas[k]) == fechas_years[j] && fechas_years[j] != fechas_years[storer_var]){
        if (fechas_finished[j] != fechas[k] && fechas_finished[j] != fechas[k] && fechas_finished[k] != fechas[k] && fechas_finished[k] != fechas[j] ){  ///Comprobar que los años consecutivos son iguales, si no son igual se mete en el vector final
          fechas_finished.push_back(fechas[k]);
          break;
        }
      
      }
      if (fecha::getYear(fechas[k]) == fechas_years[j] && fechas_years[j] == fechas_years[storer_var]){
        for (int l = 0; l < fechas_meses.size(); l++){
          if(fecha::getMonth(fechas[k]) == fechas_meses[l] && fecha::getMonth(fechas[storer_var]) != fechas_meses[l]){          ///Si años iguales, se mete primero el del mes más reciente
            fechas_finished.push_back(fechas[k]);
            break;
          }
          
        }
      }
      if (fecha::getYear(fechas[k]) == fechas_years[j] && fechas_years[j] == fechas_years[storer_var] && fechas_dias[j]== fechas_dias[storer_var]){ ///Si meses iguales, se mete el del dia más reciente
        for (int l = 0; l < fechas_meses.size(); l++){
          if(fecha::getDay(fechas[k]) == fechas_dias[l] && fecha::getDay(fechas[storer_var]) != fechas_dias[l]){
            fechas_finished.push_back(fechas[k]);
            break;
          }
        }
      }
    }   
  }

  for (int k = 0; k<fechas_finished.size(); k++){
    user_file << fechas_finished[k];
  }
}




int to_int_converter(std::string user_string){
  std::stringstream conv_variable(user_string);
  int empty_variable = 0;
  conv_variable >> empty_variable;

  return empty_variable;
}

int to_int_converter(char user_char){
  char kUser_number = user_char;
  int number_to_store;
  int kUser_number_as_int = number_to_store - '0';
  return kUser_number_as_int;
}


std::string char_pointer_to_string(char* caracter, std::string to_store_string){
  char* pStr = caracter;
  to_store_string = pStr;

return to_store_string;

}


void usage(int argc, char* argv[]){
      if (argv[1]){
    std::string parameter{argv[1]};
    if (parameter == "--help") {
      std::cout << kHelpText << std::endl;
      exit(EXIT_SUCCESS);
    }
  }

  
  if (argc != 3 && argv[1] != "--help" || argc < 1) {
    std::cout << argv[0] << ": --Ordenador de fechas" << std::endl << "Modo de uso: ./fecha fichero_entrada fichero_salida" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
}