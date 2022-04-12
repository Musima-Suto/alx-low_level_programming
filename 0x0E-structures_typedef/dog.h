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
#endif
