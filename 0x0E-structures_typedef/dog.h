#ifndef DOG
#define DOG
/**
 * struct dog - Holds info about the best of boyes
 * @name: Name of the gut boi
 * @age: Age of the best of boyes
 * @owner: Noone cares tho
 */
int _putchar(char c);
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif