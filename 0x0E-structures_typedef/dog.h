/**
 * struct dog - Dog struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description: A dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;
