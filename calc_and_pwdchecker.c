#include <stdio.h>
#include <string.h>
#include <ctype.h>


void calc(float a, float b, char op)
{
  if (op == '+')
  {
   float sum = a + b;
  printf("%.2f is your result\n", sum);
  } else if (op == '-')
  {
    float sub = a - b;
    printf("%.2f is your result\n", sub);
  } else if (op == '*')
  {
    float product = a * b;
    printf("%.2f is your result\n", product);
  } else if (op == '/')
  {
    float quo = a / b;
    printf("%.2f is your result\n", quo);
  }
    else
    printf("invalid input\n");
}


int main()
{
float x, y;
char sym;


char input[10];
printf("welcome to something\n");
       
while (strcmp(input, "exit") != 0)
  {  
  printf("theres nothing much you can do but heres some options\nexit to exit\ncalculator -> c\npassword checker -> p\n ->");
  scanf("%s", input);
    
      if (strcmp(input, "exit") == 0)
  {
      printf("a d i o s\n");
      break;
  }

  if (strcmp(input, "c") == 0)
  {
    printf("enter a math equation\n-> ");
    scanf("%f %c %f", &x, &sym, &y);

    calc(x, y, sym);
  }

  if (strcmp(input, "p") == 0)
  {
  
    int has_letter = 0, has_number = 0, has_symbol = 0;
    char pwd[30];

    printf("lemme check your password type it in\n -> ");
    scanf("%s", pwd);

    int length = strlen(pwd);

    for (int i = 0; i < length; i++)
    {
      if (isalpha(pwd[i]))
        has_letter = 1;
      if (isdigit(pwd[i]))
        has_number = 1;
      if (ispunct(pwd[i]))
        has_symbol = 1;
    }

    if (has_letter && has_number && has_symbol)
      printf("good password\n");
    else
      printf("weak password\n");
    }

  }

return 0;
  
}

