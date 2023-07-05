#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    WAVE_SAWTOOTH,
    WAVE_COUNT,
} waveType_t;

// TODO: provide optional variable size for different platforms
typedef struct {
    waveType_t type;
    uint32_t frequency;
    uint32_t amplitude;
    uint32_t center;
    uint32_t sample_rate;
} waveProperties_t;

bool generateSawtoothWave(uint32_t* buffer, uint32_t buffer_size, waveProperties_t* wave_properties, uint32_t* wave_length);

#ifdef __cplusplus
}
#endif
