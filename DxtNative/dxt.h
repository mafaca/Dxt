#ifndef DXT_H
#define DXT_H

#include <stdint.h>

void decode_dxt1(const uint64_t*, const int, const int, uint32_t*);
void decode_dxt3(const uint64_t*, const int, const int, uint32_t*);
void decode_dxt5(const uint64_t*, const int, const int, uint32_t*);

#endif /* end of include guard: DXT_H */