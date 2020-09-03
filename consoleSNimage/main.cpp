#include <iostream>
#include <string>
#include "SNImage.h"
using namespace std;
main()//coucou
{   SNImage img;
    img.Charger("a.bmp");
    cout<<img.Hauteur()<<"x"<<img.Largeur()<<endl;
    img.Negatif();
    img.Sauvegarder("b.bmp");
    int d;string s;
}
