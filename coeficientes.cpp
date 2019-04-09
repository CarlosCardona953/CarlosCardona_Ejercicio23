#include <fstream>
#include <iostream>
using namespace std;
 
void ejemplo_lee(string filename);
void ejemplo_escribe(string filename);

int contador = 0;

int main () {
  string filename;
  filename = "valores_x.txt";
  ejemplo_lee(filename);

  filename = "valores_y.txt";
  ejemplo_lee(filename);
    
 
  
  return 0;
}

void ejemplo_lee(string filename){
  ifstream infile; 
  string line;
  int contador = 0;
  double suma=0;
  infile.open(filename); 
  
  cout << "Leyendo de " << filename << endl; 
  getline(infile, line);
  while(infile){
    cout << line << endl;
    contador  =contador +1  ;
    suma = suma + atof(line.c_str());
    getline(infile, line);
      
  }
  cout << "La suma de estos "<< contador << " datos es: " << suma << endl;
  infile.close();
}



