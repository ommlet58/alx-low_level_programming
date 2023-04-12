#include <stdlib.h>
#include "main.h"

/**
* * count_word -splits a string into words
* * @s: the string
* * Return: number of words
*/
int count_word(char *s)

{
int f, x, w;
f = 0;
w = 0;
for (x = 0; s[x] != '\0'; x++)
{
if (s[x] == ' ')
f = 0;
else if (f == 0)
{
f = 1;

w++;
}
}
return (w);
}

/**
* **strtow - splits a string into words
* @str: string
*
* Return: pointer to an array of strings (Success)
* or NULL (Error)
*/

char **strtow(char *str)
{

char **m, *tmp;
int i, k = 0, len = 0, words, c = 0, start, end;
while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);
m = (char **) malloc(sizeof(char *) * (words + 1));
if (m == NULL)
return (NULL);
for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
m[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}
m[k] = NULL;
return (m);
}
