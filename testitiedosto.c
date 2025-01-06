#include "types.h"
#include "stat.h"
#include "user.h"

int main() {
    int alkuarvo = getreadcount(); // Alkuperäinen laskurin arvo
    printf(1, "Alustava lukukutsujen määrä: %d\n", alkuarvo);

    // Suoritetaan muutama lukuoperaatio
    char buffer[10];
    int fd = open("README", 0);
    read(fd, buffer, sizeof(buffer));
    close(fd);

    int lopullinen = getreadcount(); // Päivitetty laskurin arvo
    printf(1, "Lopullinen kutsujen määrä: %d\n", lopullinen);

    exit();
}

