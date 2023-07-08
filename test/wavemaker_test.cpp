#include "gtest/gtest.h"

#include "wavemaker.h"

TEST(SawtoothTests, ZeroAmplitude) {
    uint32_t buffer[100] = {0};
    uint32_t wave_length = 100;
    const uint32_t center = 100;
    const uint32_t frequency = 100;
    const uint32_t sample_rate = 1000;

    waveProperties_t sawtooth = {
        .type = WAVE_SAWTOOTH,
        .frequency = frequency,
        .amplitude = 0,
        .center = center,
        .sample_rate = sample_rate,
    };

    bool success = generateSawtoothWave(buffer, 100U, &sawtooth, &wave_length);
    ASSERT_TRUE(success);

    for(uint32_t i=0; i<wave_length; i++) {
        ASSERT_EQ(buffer[i], center);
    }
}


TEST(SawtoothTests, ZeroAmplitudeAtZero) {
    uint32_t buffer[100] = {0};
    uint32_t wave_length = 100;
    const uint32_t center = 0;
    const uint32_t frequency = 100;
    const uint32_t sample_rate = 1000;

    waveProperties_t sawtooth = {
        .type = WAVE_SAWTOOTH,
        .frequency = frequency,
        .amplitude = 0,
        .center = center,
        .sample_rate = sample_rate,
    };

    bool success = generateSawtoothWave(buffer, 100U, &sawtooth, &wave_length);
    ASSERT_TRUE(success);

    for(uint32_t i=0; i<wave_length; i++) {
        ASSERT_EQ(buffer[i], center);
    }
}