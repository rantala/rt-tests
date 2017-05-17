#ifndef __ERROR_H
#define __ERROR_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void err_exit(int err, const char *fmt, ...) __attribute__((noreturn)) __attribute__((format (printf, 2, 3)));
void err_msg(const char *fmt, ...)__attribute__((format (printf, 1, 2)));
void err_msg_n(int err, const char *fmt, ...) __attribute__((format (printf, 2, 3)));
void err_quit(const char *fmt, ...) __attribute__((noreturn)) __attribute__((format (printf, 1, 2)));
void debug(const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void info(const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void warn(const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void fatal(const char *fmt, ...) __attribute__((noreturn)) __attribute__((format (printf, 1, 2)));
void err_doit(int err, const char *fmt, va_list ap);

#endif	/* __ERROR_H */
