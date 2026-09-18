#include <stdio.h>
#include <string.h>
typedef struct{
    int id;
    int pin;
    int age;
    char initial;
    char name[30];
}user;
int main(){
    int a[] = {1,2,3,4,5};
    int b[] = {5,4,3,2,1};
    a[0] = b[0];
    typedef int numero;
    numero k;
    user user1;
    user1.id=22;
    user1.pin=324;
    user1.age=22;
    user1.initial='l';
    strcpy(user1.name,"luyanda");
    printf("User 1 age is %d\n",user1.age);
    printf("User 1 pin is %d\n", user1.pin);
    printf("The user's name is %s\n", user1.name);
    printf("The user's initial is %c\n", user1.initial);
    return 0;

}
