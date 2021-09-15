# -----
OLED_ENABLE = yes
OLED_DRIVER = SSD1306   # Enables the use of OLED displays
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow

ENCODER_ENABLE = yes       # Enables the use of one or more encoders

EXTRAKEY_ENABLE = yes

COMBO_ENABLE = 	no       # Enables combos
MOUSEKEY_ENABLE = yes	
TAP_DANCE_ENABLE = no

# -----
AUTO_SHIFT_ENABLE = no    # Enable auto shift
MAGIC_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
SRC += features/casemodes.c

# -----
BOOTMAGIC_ENABLE =no
STENO_ENABLE = no
TERMINAL_ENABLE = no
KEY_LOCK_ENABLE = no
AUDIO_ENABLE = no
CONSOLE_ENABLE = no
VELOCIKEY_ENABLE = no


