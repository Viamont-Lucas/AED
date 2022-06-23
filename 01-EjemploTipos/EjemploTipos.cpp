#include <cassert> //Declaramos cassert ya que "assert" no esta incluido en la biblioteca estandar
#include <string>  //Declaramos string ya que "string" no esta incluido en la biblioteca estandar
using namespace std::string_literals; // Se utiliza para trabajar mas comodamente con el "string"

int main(){
    //bool
    assert (true);
    assert (false == false);
    assert (false != true);
    assert (false or true);
    assert (true and true);
    assert (not false);

    //char 
    //     (Al costado se colocan los valores en ASCII)
    assert ('A' == 'A');          // (65 = 65)
    assert ('B' != 'C');          // (66 != 67)
    assert ('D' <= 'E');          // (68 >= 69)
    assert ('G' >= 'F');          // (71 <= 70)
    assert ('+' + '%' == 'P');    // (43 + 37 = 80)
    assert ('z' - 'H' == '2');    // (122 - 72 = 50)
    assert ('d' * '<' == 6000);   // (100 * 60 = 6000)
    assert ('x' / '(' == 3);      // (120 / 40 = 3)
    assert ('y' % '(' == 1);      // (121 % 40 = 1)

    //unsigned
    //     (Se utiliza el sufijo 'u')
    assert (5u == 5u);
    assert (124u != 236u);
    assert (123u <= 123u);
    assert (456u >= 23u);
    assert (15u + 25u == 40u);
    assert (13u - 8u == 5u);
    assert (10u * 7u == 70u);
    assert (14u / 11u == 1u);
    assert (14u % 11u == 3u);

    //int
    assert (5 == 5);
    assert (124 != 236);
    assert (123 <= 123);
    assert (456 >= 23);
    assert (15 + 25 == 40);
    assert (13 - 8 == 5);
    assert (10 * 7 == 70);
    assert (14 / 11 == 1);
    assert (14 % 11 == 3);

    //double 
    //       (Se debe tener cuidado ya que la representacion de los puntos flotantes 
    //        NO es exacta para ciertos numeros, NO utilizar para temas contables)
    assert (2.0 == 2.0);
    assert (1.0 != 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
    assert (3.45 <= 4.66);
    assert (6.38 >= 6.37);
    assert (1.0 + 1.0 == 2.0);
    assert (2.0 - 1.0 == 1.0);
    assert (0.1 * 10.0 == 1.0);
    assert (10.0 / 5.0 == 2.0);
    //notacion cientifica
    assert (3e2 == 3e2);
    assert (3e2 == 300.0);     
    assert (3e2 != 300.1);
    assert (3e-2 <= 3e2);
    assert (4e-1 >= 4e-2);
    assert (12e6 + 12e6 == 24e6);
    assert (12e6 + 12e6 == 24'000'000);
    assert (7e3 - 5e3 == 2e3);
    assert (7e3 - 5e3 == 2000);
    assert (1e1 * 4e2  == 4e3);
    assert (1e1 * 4e2  == 4'000);
    assert (8e6 / 2e3 == 4e3);
    assert (8e6 / 2e3 == 4'000);

    //string
    //       (Al escribir using namespace std::string_literals utilizamos el sufijo 
    //        's' para asegurarnos que estamos trabajando con un string en C++)
    //       (En la MAYORIA de los contextos NO es nesesario usar la 's', pero para
    //       el caso de length SI lo es)
    assert ("Hola" == "Hola");
    assert ("Manzana" != "Pera");
    assert ("Baloncesto"s <= "Bateria"s); //Se realiza una comparacion lexicográfica 
    assert ("Bateria"s >= "Barco"s);      //Se realiza una comparacion lexicográfica 
    assert ("ab"s + "cd"s == "abcd"s);
    assert ("Sistemas"s.length() == 8);
}