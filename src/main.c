#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]) {
    if (argc == 4) {
        char* op = argv[1];
        char* a = argv[2];
        char* b = argv[3];
        double r = 0;

        if (strcmp(op, "add") == 0) {
            r = _add(atof(a), atof(b));
        } else if (strcmp(op, "sub") == 0) {
            r = _sub(atof(a), atof(b));
        } else if (strcmp(op, "mul") == 0) {
            r = _mul(atof(a), atof(b));
        } else if (strcmp(op, "div") == 0) {
            r = _div(atof(a), atof(b));
        } else {
            printf("Erreur : opération inconnue\n");
            return 1;
        }
        printf("%lf\n", r);

    } else if (argc == 3) {
        char* op = argv[1];
        char* a = argv[2];
        double r = 0;

        if (strcmp(op, "square") == 0) {
            r = _car(atof(a));
        } else {
            printf("Erreur : opération inconnue\n");
            return 1;
        }
        printf("%lf\n", r);
    } else {
        printf("Erreur de paramètres\n");
        return 1;
    }

    return 0;
}