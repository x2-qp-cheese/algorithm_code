#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    int count;
    struct Node *next;
    char title[51];
} book;

void search_add(book *st, char a[])
{
    book *sc = st;
    while (sc != NULL)
    {
        if (strcmp(a, sc->title) == 0)
            sc->count++;
        sc = sc->next;
    }
    if (sc == NULL)
    {
        book *tmp = (book *)malloc(sizeof(book));
        tmp->count++;
        strcpy(tmp->title, a);
        tmp->next = st->next;
        st->next = tmp;
    }
}

int main()
{
    book *start = NULL;
    int num;
    char tmptitle[51];
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%s", tmptitle);
        if (start == NULL)
        {
            book *tmp = (book *)malloc(sizeof(book));
            tmp->count++;
            tmp->next = NULL;
            strcpy(tmp->title, tmptitle);
            start = tmp;
        }
        else
            search_add(start, tmptitle);
    }
    book *result = start;
    int max = 0;
    while (result != NULL)
    {
        if (max < result->count)
        {
            strcpy(tmptitle, result->title);
            max = result->count;
        }
        else if (max == result->count)
        {
            if (strcmp(result->title, tmptitle) < 0)
            {
                strcpy(tmptitle, result->title);
            }
        }

        result = result->next;
    }
    printf("%s", tmptitle);
}
