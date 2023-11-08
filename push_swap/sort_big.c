#include "push_swap.h"

static void	push_b(t_info tab)
{
	while (tab->b->top)
		pa(tab);
}

void	sort_big(t_info tab, t_deck deck)
{
	int	deck_iterator;
	int	deck_init_size;

	deck->max_bits = 0;
	while (tab->count)
	{
		deck->max_bits++;
		(tab->count) >>= 1;
	}
	while (tab->count < deck->max_bits)
	{
		deck_init_size = deck_size(deck);
		tab->current = deck->top->next;
		deck_iterator = 0;
		while (deck_iterator++ < deck_init_size)
		{
			if ((((tab->current->previous->order) >> tab->count) & 1) == 1)
				ra(tab);
			else
				pb(tab);
			tab->current = tab->current->next;
		}
		push_b(tab);
		tab->count++;
	}
}
