#ifndef DOG_H
#define DOG_H
/**
 *struct dog - store basic dog info
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner
 *Return:nothing
 *Description: longer version
 */
typedef struct dog
{
        char *name;
        float age;
        char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
