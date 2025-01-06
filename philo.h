#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>

typedef struct	s_thread_list {
	pthread_t				thread;
	struct s_thread_list	*next;
} t_thread_list;

typedef struct	s_data {
	t_thread_list	*threads;
	int				number_of_philosophers;
	tv_usec			time_to_die;
	tv_usec			time_to_sleep;
	tv_usec			time_to_sleep;
	int				number_of_times_each_philosopher_must_eat;

} t_data;

// Functions
t_thread_list	*create_node(void)
{
	t_thread_list	*new_node;
	new_node = malloc(sizeof(t_thread_list));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	return (new_node);
}