#include "inkluderingar.hpp"

#define hel int
#define hufvud main
#define vidbränd char
#define pekare *
#define dubbelpekare pekare pekare
#define referens_till &
#define dereferera *
#define skrivutf printf
#define medans while
#define placeras puts
#define mall template
#define sluta break
#define om if
#define uppfostra throw
#define offentligt public
#define personligt private
#define könssjukdom std
#define snöre string
#define bil auto

#define klass class

klass Barn {
offentligt:
    Barn(könssjukdom::snöre meddelande) : meddelande(meddelande)
        {}
personligt:
    könssjukdom::snöre meddelande;
};


hel hufvud(hel arga, vidbränd dubbelpekare argv)
{
    bil i = 0;
    vidbränd dubbelpekare nuvarande = argv;

    medans (i < arga) {
        placeras(dereferera nuvarande);
        nuvarande++;
        i++;
        om (i == 3) {
            uppfostra Barn("För många argument");
        }
    }
}
