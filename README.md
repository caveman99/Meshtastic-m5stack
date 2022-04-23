# Meshtastic-m5stack
Variant files for partial m5stack Core support. No Core2 for now!

Drop them into /variants/m5stack_core directory in the Meshtastic firmware repository.
This will add partially working m5stack targets as private hardware.
This effort may be merged with the main firmware once it is fully working.

Supported: LORA868 Module (RA-02H based)
Not Supported: M5 LoRaWan or COMx Modules. Those communicate via UART and won't work with RadioLib
Moving Target: GPS ublox M8N Module
