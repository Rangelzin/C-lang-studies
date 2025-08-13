#include <stdio.h>
#include <time.h>

void main() {
    time_t t;
    struct tm *data;

    time(&t);
    data = localtime(&t);

    int d = data->tm_mday; // dia do mes
    int m = data->tm_mon + 1; // mes (0-11, por isso +1)
    int a = data->tm_year + 1900; // ano (anos desde 1900)
    int wd = data->tm_wday; // dia da semana (0-6, 0=domingo)
    int yd = data->tm_yday; // dia do ano (0-365)
    int h = data->tm_hour; // hora (0-23)
    int min = data->tm_min; // minutos (0-59)
    int s = data->tm_sec; // segundos (0-59)

    printf("Data: %02d/%02d/%04d\n", d, m, a);
    printf("Dia da semana: %d\n", wd);
    printf("Dia do ano: %d\n", yd);
    printf("Hora: %02d:%02d:%02d\n", h, min, s);
    printf("Se beber, não dirija\n");
}