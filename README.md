# Wave Maker

The purpose of this library is to generate simple waveforms for sounds.  The main target is for embedded microcontrollers with DAC or I2S outputs.

## How it works

The application must provide a buffer and a buffer length.  The waveform generation will return a wave length, which is how many samples are used by the wave (will likely be less than the total available space, since it only needs to fill in one cycle).

## Building

Meson is used for building.  

First time setup:

- clone this repository!
- `meson setup builddir`
- `cd builddir`
- `ninja`


To run tests:

- `ninja test`