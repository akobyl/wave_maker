#include "wave_maker.h"
#include <stdbool.h>
#include <stdint.h>

bool generateSawtoothWave(uint32_t* buffer, uint32_t buffer_size, uint32_t frequency, uint32_t amplitude, uint32_t center) {
    // assert(buffer);
    // assert(buffer_size > 0);

    // Period of the sawtooth wave
    int32_t period = buffer_size / frequency;

    for (int i = 0; i < buffer_size; i++) {
        // Compute the position within the period
        int32_t positionInPeriod = i % period;

        // Generate the sawtooth wave
        buffer[i] = center + (positionInPeriod * amplitude) / period;
    }
    return true;
}
