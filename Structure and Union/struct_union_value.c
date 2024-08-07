#include<stdio.h>

union u{
       char ch;
       int x; 
       int y;
}uv;

struct s {
       char st;
       int x_s; 
       int y_s;
}st;

int main(){

       printf("Union Value\n~\n");
       uv.ch = 'A';
       printf("uv.ch = %c\n", uv.ch);

       uv.x = 17;
       printf("uv.x = %d.\n", uv.x);
       printf("uv.ch = %c.\n", uv.ch);

       uv.y = 18;
       printf("uv.y = %d.\n", uv.y);
       printf("uv.x = %d.\n", uv.x);
       printf("uv.ch = %c.\n", uv.ch);

       printf("\nStructure Value\n~\n");

       st.st = 'A';
       printf("st.st = %c\n", st.st);

       st.x_s = 17;
       printf("st.x_s = %d.\n", st.x_s);
       printf("st.st = %c.\n", st.st);

       st.y_s = 18;
       printf("st.y_s = %d.\n", st.y_s);
       printf("st.x_s = %d.\n", st.x_s);
       printf("st.st = %c.\n", st.st);

       return 0;
}