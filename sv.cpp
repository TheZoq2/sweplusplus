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

#define felspråk uppfostra Barn("Fel språk");
#define int felspråk
#define main felspråk
#define char felspråk
#define * felspråk
#define & felspråk
#define printf felspråk
#define while felspråk
#define puts felspråk
#define template felspråk
#define break felspråk
#define if felspråk
#define throw felspråk
#define public felspråk
#define private felspråk
#define std felspråk
#define string felspråk
#define auto felspråk
#define class felspråk
#define const felspråk
#define union felspråk
#define switch felspråk
#define case felspråk
#define inline felspråk
#define default felspråk
#define explicit felspråk
#define delete felspråk
#define do felspråk
#define const_cast felspråk
#define dynamic_cast felspråk
#define static_cast felspråk
#define free felspråk
#define else felspråk
#define enum felspråk
#define try felspråk
#define catch felspråk
#define finally felspråk
#define export felspråk
#define extern felspråk
#define namespace felspråk
#define operator felspråk
#define malloc felspråk
#define alloc felspråk
#define register felspråk
#define signed felspråk
#define this felsprån
#define swap felspråk
#define max felspråk


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
