#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describing a dog
 * @name: The name of the dog, type = char *
 * @age: The age of the dog, type = float
 * @owner: The owner of the dog, type = char *
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* Typedef for struct dog */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
