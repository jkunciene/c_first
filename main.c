#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("My %s number is %d\n", "favorite", 9); //%d decimal
    printf("%f\n", 5.0 + 4.5); //iskart atieka matematinius veiksmus
    printf("%f\n", pow(2, 3)); //2 pakelia treciuoju
    printf("%f\n", sqrt(36));//istraukia sakni
    printf("%f\n", ceil(36.356));//suapvalina i didesniji sveika skaiciu
    printf("%f\n", floor(36.356));//suapvalina i mazesni sveikaji skaiciu

    /*mano komentaras
    variable */

    int age = 38;
    char name[] = "Jolita";

    printf("Hello, my name is %s !\n", name);
    printf("I'm %d years old!\n", age);

    age = 5;

    printf("Hello, my name is %s !\n", name);
    printf("I'm %d years old!\n", age);

    return 0;
}
