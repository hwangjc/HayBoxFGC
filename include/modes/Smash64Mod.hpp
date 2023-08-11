#ifndef _MODES_SMASH64MOD_HPP
#define _MODES_SMASH64MOD_HPP

#include "core/ControllerMode.hpp"
#include "core/socd.hpp"
#include "core/state.hpp"

class Smash64Mod : public ControllerMode {
  public:
    Smash64Mod(socd::SocdType horizontal_socd, socd::SocdType vertical_socd);

  private:
    void UpdateDigitalOutputs(InputState &inputs, OutputState &outputs);
    void UpdateAnalogOutputs(InputState &inputs, OutputState &outputs);
};

#endif