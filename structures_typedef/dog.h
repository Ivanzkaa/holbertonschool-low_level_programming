#ifndef DOG_H_FILE
#define DOG_H_FILE
/**
 * struct dog - creating the structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: basically describing the basic of a dog
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 **/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
