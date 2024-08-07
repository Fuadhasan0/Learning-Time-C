#include<stdio.h>
#include<string.h>

struct nametype{
       char firstname[40];
       char midname[40];
       char lastname[40];
};

struct student{
       int id;
       struct nametype name;
};

int main(){

       struct student one;
       int n; 
       one.name.midname[0] = '\0';

       printf("Student Id\n~");
       scanf("%d", &one.id);
       printf("Student First name\n~");
       scanf("%s", one.name.firstname);

       printf("Any mid name?\n1.Yes\n2.No\n~");
       scanf("%d", &n);
       if(n == 1){
              printf("Student Mid name\n~");
              scanf("%s", one.name.midname);
       }

       printf("Student last name\n~");
       scanf("%s", one.name.lastname);

       printf("Id: %d\t Name: %s %s %s.\n", one.id, one.name.firstname,one.name.midname, one.name.lastname);
}