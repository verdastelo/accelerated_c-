/*
    Ĉu la suba kodo estas ĝusta? Klarigu.
    
    const std::string saluton = "Saluton";
    const std::string mesagxo = saluton + ", mondo" + "!";

*/

#include <iostream> 
#include <string> 

int main()
{
    const std::string saluton = "Saluton";
    std::cout << saluton << std::endl;
    
    const std::string mesagxo = saluton + ", mondo" + "!";
    std::cout << mesagxo << std::endl; 
    
    return 0;
}

/*
    Klarigo: 
    En la 15-a linio, saluton estas variablo, kies valoro 
    estas signovico "Saluton." En la 17-a linio, mesagxo estas 
    signovica variablo, kies valoro estas saluton kaj du 
    literaloj de la tipo signovico, nome: "mondo" kaj "!."
*/
