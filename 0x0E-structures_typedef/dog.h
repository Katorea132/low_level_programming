#ifndef DOG
#define DOG
/**
 * struct dog - Holds info about the best of boyes
 * @name: Name of the gut boi
 * @age: Age of the best of boyes
 * @owner: Noone cares tho
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dot_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
