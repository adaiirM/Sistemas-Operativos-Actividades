// Reloj_windows.c
// Cuenta unidades de tiempo
// Version para Windows
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

unsigned esperar_tiempo (int s) {

        if (s <= 0)
                return 0;
        else {
                Sleep(s*1000);
                return(s);
        }
}

int main (int argc, const char * argv[]) {
        int i;

        if (argc != 2) {
                printf("Uso: %s unidad de tiempo\n", argv[0]);
                exit(1);
        }
    for (i=1; i<=10; i++) {
        esperar_tiempo(atoi(argv[1]));
        printf("%d\n", i);
    }
}
