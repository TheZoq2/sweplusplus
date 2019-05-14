#include "inkluderingar.hufvudpp"
#include "nyckelord.hufvudpp"
#include "barn.hufvudpp"

hel hufvud(hel arga, vidbränd dubbelpekare argv)
{
    bil i = 0;
    vidbränd dubbelpekare nuvarande = argv;

    medans (i < arga) {
        placeras(dereferera nuvarande);
        nuvarande++;
        i ökas_med_ett;
        om (i == 3) {
            uppfostra Barn("För många argument");
        }
    }
}
