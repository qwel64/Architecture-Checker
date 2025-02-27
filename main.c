#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void print_architecture() {
#if defined(__x86_64__)
    printf("Architecture: Intel x86_64\n");
#elif defined(__arm64__)
    printf("Architecture: Apple Silicon (ARM64)\n");
#else
    printf("Unknown architecture\n");
#endif
}

int main() {
    print_architecture();
    
    // Check pointer size (64-bit on both architectures)
    printf("Pointer size: %zu bits\n", sizeof(void*)*8);
    
    // Check endianness (Little-endian on both architectures)
    uint32_t test = 0x12345678;
    printf("Endianness: %s\n", 
           *(uint8_t*)&test == 0x78 ? "Little" : "Big");
    
    return 0;
}