#ifndef BYTE_H
#define BYTE_H

extern off_t byte_chr();
extern off_t byte_rchr();
extern void byte_copy();
extern void byte_copyr();
extern off_t byte_diff();
extern void byte_zero();

#define byte_equal(s,n,t) (!byte_diff((s),(n),(t)))

#endif
