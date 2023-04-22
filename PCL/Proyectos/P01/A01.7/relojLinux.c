// Reloj_2.c
// Cuenta unidades de tiempo
// Es especifico para Linux
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/time.h>

void fnula() {
}

unsigned esperar_tiempo (int s) {
    int t;

    if (s <= 0)
        return 0;
    else {
        t= alarm(s);
        pause();
        return(t);
    }
}

int main (int argc, const char * argv[]) {
    int i;

    signal(SIGALRM, fnula);

    if (argc != 2) {
        printf("Uso: %s unidad de tiempo\n", argv[0]);
        exit(1);
    }
    for (i=1; i<=10; i++) {
        esperar_tiempo(atoi(argv[1]));
        printf("%d\n", i);
    }
}
