#include<stdio.h>
#include<string.h>

//typedef char user[25];

typedef struct{
    char name[25];
    char password[12];
    long long int id;
} User;

int main(){
    //Typedef => A reserved keyword that gives an existing datatype a nickname
    //user user1 = "JJ";
    User user1 = {"Jlow", "password", 1189876534};
    User user2 = {"Cubondix", "passwordiwaa", 4844657890};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);

    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

    return 0;
}