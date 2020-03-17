#include <stdio.h>
#include <time.h>

int main(void)
{
    char format[128];
    time_t temps;
    struct tm date;

    // On récupère la date et l'heure actuelles.
    time(&temps);
    date=*localtime(&temps);

    // On remplit la chaîne avec le format choisi, puis on l'affiche.
    strftime(format, 128, "%a %x\n%X %Z\n", &date);
    puts(format);

    return 0;
}
