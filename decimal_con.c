#include "main.h"
#include <stdio.h>
/**
 * ma_putchar - actual logic for %d, %i int conversions to decimal
 * @x: int to be convertedd to decimal
 * @count: printed character count
 * Return: converted int as decimal
 **/
int ma_putchar(int x, int count)
{
int c = x;

if (x < 0)
{
c = -x;
putinchar('-');
count = count + 1;
}

if (c / 10)
{
count = ma_putchar(c / 10, count);
}

/** count = count + 1; **/

putinchar(c % 10 + '0');

return (count + 1);
}


/******************************************/

/**
 * d - handles int to base10 conversion
 * @num: int parsed for convserion
 * Return: int conversin through ma_putchar
 **/
int d(int num)
{
return (ma_putchar (num, 0));
}


/**
 * i - handles int to hexadecimal and octal conversion
 * @num: int parsed for conversion
 * Return: int conversion through ma_putchar
 **/
int i(int num)
{
return (ma_putchar(num, 0));
}


/**
 * *decimal_con - major function for int to base10 conversion
 * @zd: character specifier between %d and %i
 * Return: address of proper function
 **/
int (*decimal_con(int zd))(int)
{
if (zd == 'd')
return (&d);

else if (zd == 'i')
return (&i);

return (NULL);
}


/******************************************
*
*int decimal_con(int x)
*{
*int arr[] = {1000,700};
*int k = 0;
*char ch = 'P';
*int i = 0;
*char val;
*int charcount;
*
**
* int tn = -15;
* int tcnt = 0;
* ma_putchar(tn, tcnt);
**
*
********************************************************
*
*
*
*char *format = "the 1st int is %d,\n 2nd int is %i,\n char is %c.\n";
*
*while (format[i] != '\0')//NULL also works as a string terminator
*{
*
*val = format[i];
*
*if(val == '%')
*{
*
*if (format[i + 1] != 'c')
*{
*
*charcount = charcount + (*selector( format[i + 1]))(arr[k]);
*k++;
*}
*
*else
*{
*charcount = charcount + (*selector( format[i + 1]))(ch);
*}
*
*i++;
*}
*else
*{
*charcount = charcount + write(1, &format[i], 1);
*}
*
*i++;
*}
*
*ma_putchar(charcount, 0);
*
*return (0);
*}
************************************************************/
