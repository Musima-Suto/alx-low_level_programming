#ifndef DOG_H
#define DOG_H
/**
 *struct dog - store basic dog info
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner
 *Return:nothing
 */
typedef struct dog
{
        char *name;
        float age;
        char *owner;
} dog_info;
/**
 * dog_info - typedef for struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
