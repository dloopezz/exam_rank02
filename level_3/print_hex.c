#include <unistd.h>

void    print_hex(int nb)
{
    char *base = "0123456789abcdef";
    
    if (nb >= 16)
        print_hex(nb / 16);
    write(1, &base[nb % 16], 1);
     
}

int main(int argc, char const *argv[])
{
    print_hex(8);
    return 0;
}
