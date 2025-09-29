/****************************** FUNCTION DECLARATIONS ******************************/

// @brief Flashing led 
// @param ledPin Pin number where the LED is connected
void LedFlash(uint8_t ledPin);

// @brief Generate PWM signal
// @param pwmPin Pin number where the PWM signal is generated
// @param frequency Frequency of the PWM signal in Hz
// @note you can add or remove parameters as needed
void PwmGeneration(uint8_t pwmPin, uint32_t frequency);