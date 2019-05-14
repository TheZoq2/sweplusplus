#define hel int
#define hufvud main
#define teck char
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

#include <stdio.h>

hel hufvud(hel arga, teck dubbelpekare argv)
{
    hel i = 0;
    teck dubbelpekare nuvarande = argv;

    medans (i < arga) {
        placeras(dereferera nuvarande);
        nuvarande++;
        i++;
        om (i == 3) {
            sluta;
        }
    }
}
