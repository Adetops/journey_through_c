#include <unistd.h>

void print_char(char c)
{
	write(1, &c, 1);
}

void print_char_from(char c)
{
	if (c > 'z')
	{
		return;
	}
	print_char(c);
	print_char_from(c + 1);
}

void print_alphabet(void)
{
	print_char_from('a');
}

int main(void)
{
	print_alphabet();
	print_char('\n');
	return (0);
}
