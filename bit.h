#ifndef BIT_H
#define BIT_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

int print_bit(char c, int o);

int packing (char a, char b, char c, char d);
int unpacking(int i,char *msg);
double packIn2Double(int x, int y);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* BIT_H */
