#ifndef MAIN_H

#define MAIN_H


#include <stdio.h>

#include <stdarg.h>

#include <unistd.h>

#include <limits.h>


int _putchar(char character);

int characters(va_list args, int printed);

int strings(va_list args, int printed);

int integers(va_list args, int printed);

int selector(const char *format, va_list args, int printed);


#endif MAIN_H
