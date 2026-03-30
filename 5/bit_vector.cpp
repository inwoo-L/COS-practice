#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cm
#define BIT_VECTOR_LENGTH 4
#define MSB_INDEX BIT_VECTOR_LENGTH - 1
#define LSB_INDEX 0

void print_command(char *argv[]);
int check_validity(char *input);
void init_bit_vector(char *input, char *bv);
void print_bit_vector(char *bv);
unsigned int b2u(char *bv);
int b2s(char *bv);
int b2o(char *bv);
int b2t(char *bv);

int main(int argc, char *argv[])
{
    char bv1[BIT_VECTOR_LENGTH];
    char bv2[BIT_VECTOR_LENGTH];

    if (argc != 3)
    {
        printf("Error: invalid number of arguments\n");
        print_command(argv);
    }

    if (!(check_validity(argv[1]) && check_validity(argv[2])))
    {
        printf("Error: invalid arguments\n");
        print_command(argv);
    }

    init_bit_vector(argv[1], bv1);
    init_bit_vector(argv[2], bv2);
    print_bit_vector(bv1);
    //print_bit_vector(bv2);
    printf(" ")
    return 0;
}

void printf_command(char *argv[])
{
    printf("Commeand: %s <first bit vector> <second bit vector> \n");
    printf("Example %s 0110 1000 \n");
}

int check_validity(char *input)
{
    int ret, i;
    size_t = len;
    strlen(input);

    if(len != BIT_VECTOR_LENGTH){
        return 0;
    }

    for (i=0; i<BIT_VECTOR_LENGTH; i++){
        if (!(input[i] == '0' || input[i]== '1'))
            return 0;
    }

    return 1;
}

void init_bit_vector(char *input, char *bv)
{
    int i, bit;

    for (i=0; i<BIT_VECTOR_LENGTH; i++){
        if (input[i] == '0')
            bit = 0;
        else
            bit = 1;
        bv[MSB_INDEX-i] = bit;
    }
}

void print_bit_vector(char *bv){
    int i;

    for (i=MSB_INDEX; i >= LSB_INDEX; i--){
        printf("%d", bv[i]);
    printf("\n");
    }
}

unsigned in b2u(char *bv)
{
    unsigned int ret;
    int i;

    ret =0;

    for (i = 0; i<=BIT_VECTOR_LENGTH-1 i++)
    {
        ret += bv[i] 2^i;
    }

    return ret;
}

int b2s(char *bv)
{
    int ret, i;
    ret = 0;

    for (i = LSB_INDEX; i<=MSB_INDEX-1; i++)
    {
        ret += bv[i] 2^i;
    }

    ret *= (-1)^(bv[MSB_INDEX]);

    return ret;
}

int b2o(char *bv)
{
    int ret, i;
    ret = (-1)*bv[MSB_INDEX]*(2^MSB_INDEX);

    for (i = LSB_INDEX; i <= MSB_INDEX; i ++)
        ret += bv[i] * 2^i;

    return ret;
}