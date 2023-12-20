#include <locale>
#include <cstdlib>
#include <cstring>

using namespace std;

struct disk
{
    char title[50];
    char director[50];
    char genre[50];
    int duration;
    int year;
    char company[50];
    float indb;
};

int main()
{
    disk amount[3];
    int i, d, maxa = 0;
    char maxd[50];
    setlocale(LC_ALL, "rus");
    char gd[50] = "комедия";
    for (i = 0; i < 3; i++)
    {
        printf("Введите фильмvvvvvvvvv ");
        scanf("%s", amount[i].title);
        printf("Введите режиссера фильма ");
        scanf("%s", amount[i].director);
        printf("Введите жанр фильма ");
        scanf("%s", amount[i].genre);
        printf("Введите продлжительность фильма ");
        scanf("%d", &amount[i].duration);
        printf("Введите год выпуска фильма ");
        scanf("%d", &amount[i].year);
        printf("Введите Кинокомпанию, которую выпустила фильм ");
        scanf("%s", amount[i].company);
        printf("Введите  рейтинг INDB фильма ");
        scanf("%f", &amount[i].indb);
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        if (strcmp(gd, amount[i].genre) == 0)
        {
            if (amount[i].indb >= 8.0)
            {
                printf("Фильм: %s \n", amount[i].title);
                printf("Режиссер фильма: %s\n", amount[i].director);
                printf("Жанр фильма: %s \n", amount[i].genre);
                printf("Продолжительность фильма:%d \n", amount[i].duration);
                printf("Год выпуска фильма: %d \n", amount[i].year);
                printf("Кинокомпанию, которую выпустила фильм: %s \n", amount[i].company);
                printf("Введите  рейтинг INDB фильма: %f \n", amount[i].indb);
                printf("\n");
            }
        }
    }
    printf("ВВедите режиссера \n");
    scanf("%s", maxd);
    for (i = 0; i < 3; i++)
    {
        if (strcmp(maxd, amount[i].director) == 0)
        {
            if (maxa < amount[i].year)
            {
                maxa = amount[i].year;
                d = i;
            }
        }
    }
    printf("Фильм: %s \n", amount[d].title);
    printf("Режиссер фильма: %s\n", amount[d].director);
    printf("Жанр фильма: %s \n", amount[d].genre);
    printf("Продолжительность фильма:%d \n", amount[d].duration);
    printf("Год выпуска фильма: %d \n", amount[d].year);
    printf("Кинокомпанию, которую выпустила фильм: %s \n", amount[d].company);
    printf("Введите  рейтинг INDB фильма: %f \n", amount[d].indb);
    printf("\n");
    return 0;
}

