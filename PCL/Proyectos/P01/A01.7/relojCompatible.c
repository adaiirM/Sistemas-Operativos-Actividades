// Reloj_compatible.c
// Cuenta unidades de tiempo
// Vale tanto para Windows como para Linux
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#ifdef WIN32
#include <windows.h>
#else
#include <unistd.h>
#define Sleep(x) usleep((x)*1000)
#endif

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
