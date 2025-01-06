#include "philo.h"

void	philo_routine(void *arg)
{
	int	index;

	index = *(int *)*arg;
	printf("Philo %d is thinking...\n", index);
}

int	init_data(t_data *data)
{
	int				i;
	t_thread_list	*current;
	t_thread_list	*new_node;

	data->threads = malloc(sizeof(t_thread_list));
	if (!data->threads)
		return (0);
	i = 0;
	current = data->threads;
	while(i < data->number_of_philosophers)
	{
		new_node = create_node();
        if (!new_node)
            return (0);
        current->next = new_node;
        current = new_node;
		pthread_create(&current->thread, NULL, philo_routine, (void *)&(i + 1));
		current = current->next;
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_data	data;
	int		i;

	i = 0;
	if (ac == 5 || ac == 6)
	{
		data->number_of_philosophers = av[1];
		data->time_to_die = av[2];
		data->time_to_eat = av[3];
		data->time_to_sleep = av[4];
		if (ac == 6)
			data->number_of_times_each_philosopher_must_eat = av[5];
		if(!init_data(&data))
		{
			// free and then return
			return (0);
		}
	}
	return (0);
}