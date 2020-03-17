#include <stdio.h>
int main() {
    int nbre_jour,seconde=60;
    int heure=3600;int heure_jour= 16 * heure;
    scanf("%d",&nbre_jour);
    printf("\n");
    int nbre_fois_prononce=nbre_jour * heure_jour;
    printf("%d",nbre_fois_prononce);
    return 0;

}
