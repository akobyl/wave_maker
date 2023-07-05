#include "wave_maker.h"

#include <stdbool.h>
#include <stdint.h>

bool generateSawtoothWave(uint32_t* buffer, uint32_t buffer_size, waveProperties_t* wave_properties, uint32_t* wave_length) {
    // assert(buffer);
    // assert(buffer_size > 0);

    // The number of samples needed is the period
    uint32_t period =  wave_properties->sample_rate / wave_properties->frequency;

    if (period == 0 || period > buffer_size) {
        *wave_length = 0;
        return false;
    }
    
    *wave_length = period;

    for (uint32_t i = 0; i < buffer_size; i++) {
        // Compute the position within the period
        uint32_t positionInPeriod = i % period;

        // Generate the sawtooth wave
        buffer[i] = wave_properties->center + (positionInPeriod * wave_properties->amplitude) / period;
    }
    return true;
}
