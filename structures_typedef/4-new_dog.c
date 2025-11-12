#include <stdio.h>
#include "dog.h"
#include "main.h"

int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
dog_t *new_dog(char *name, float age, char *owner);

/**
* _strlen - lenght of a string
* @s: string to check
* Return: lenght of @s
*/
int _strlen(char *s)
{
int count = 0;

for (; *s != '\0'; s++)
{
count++;
}
return (count);
}

/**
* _strcpy - Copy a string
* @dest: Destination de la string
* @src: Source de la string
* Return: La string
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}

/**
* new_dog - Create a new dog
* @name: Name of the new dog
* @age: Age of the new dog
* @owner: Owner of the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pug;

	pug = malloc(sizeof(dog_t));
		if (pug == NULL)
			return (NULL);

	pug->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (pug->name == NULL)
		{
			free(pug);
			return (NULL);
		}

	pug->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (pug->owner == NULL)
		{
			free(pug->name);
			free(pug);
			return (NULL);
		}



	return (pug);
}