int main(void)
{
	list_t *head = NULL;

	add_node_end(&head, "Hello");
	add_node_end(&head, "World");
	print_list(head);

	return 0;
}
