
bool generateSawtoothWave(uint32_t* buffer, uint32_t buffer_size, uint32_t frequence, uint32_t amplitude, uint32_t center) {
    // assert(buffer);
    // assert(buffer_size > 0);

    // Period of the sawtooth wave
    int32_t period = bufferSize / frequency;

    for (int i = 0; i < bufferSize; i++) {
        // Compute the position within the period
        int32_t positionInPeriod = i % period;

        // Generate the sawtooth wave
        buffer[i] = center + (positionInPeriod * amplitude) / period;
    }
}
