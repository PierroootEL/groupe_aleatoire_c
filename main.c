#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    char *eleves[12];
    char *used_eleves[12] = {""};
    int valid = 1;
    int eleve1 = 0;
    int eleve2 = 0;

    eleves[0] = "Pierre";
    eleves[1] = "Louis";
    eleves[2] = "Evan";
    eleves[3] = "Thibault";
    eleves[4] = "Enzo";
    eleves[5] = "Jeremy C";
    eleves[6] = "Jeremy M";
    eleves[7] = "Julien"; 
    eleves[8] = "Estebane";
    eleves[9] = "Rayanne";
    eleves[10] = "Frederic";
    eleves[11] = "Theo";



    srand( time( NULL ) );

    while (valid == 1){

        eleve1 = rand() % 12;
        eleve2 = rand() % 12;

        while(used_eleves[eleve1] == eleves[eleve1]){
            eleve1 = rand() % 12;
        }

        while(used_eleves[eleve2] == eleves[eleve2]){
            eleve2 = rand() % 12;
        }

        used_eleves[eleve1] = eleves[eleve1];
        used_eleves[eleve2] = eleves[eleve2];

        printf("Eleve : %s avec l'eleve : %s\n", eleves[eleve1], eleves[eleve2]);

    }

    return (0);

}