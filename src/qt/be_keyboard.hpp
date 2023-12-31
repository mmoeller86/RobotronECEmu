static std::unordered_map<uint8_t, uint16_t> be_keycodes = {
    {B_F1_KEY,            0x3b},
    {B_F2_KEY,            0x3c},
    {B_F3_KEY,            0x3d},
    {B_F4_KEY,            0x3e},
    {B_F5_KEY,            0x3f},
    {B_F6_KEY,            0x40},
    {B_F7_KEY,            0x41},
    {B_F8_KEY,            0x42},
    {B_F9_KEY,            0x43},
    {B_F10_KEY,           0x44},
    {B_F11_KEY,           0x57},
    {B_F12_KEY,           0x58},
    {B_PRINT_KEY,         0x137},
    {B_SCROLL_KEY,        0x46},
    {B_PAUSE_KEY,         0x145},
    {B_KATAKANA_HIRAGANA, 0x70},
    {B_HANKAKU_ZENKAKU,   0x76},

    {0x01, 0x01},  /* Escape */
    {0x11, 0x29},
    {0x12, 0x02},
    {0x13, 0x03},
    {0x14, 0x04},
    {0x15, 0x05},
    {0x16, 0x06},
    {0x17, 0x07},
    {0x18, 0x08},
    {0x19, 0x09},
    {0x1a, 0x0a},
    {0x1b, 0x0b},
    {0x1c, 0x0c},
    {0x1d, 0x0d},
    {0x1e, 0x0e},  /* Backspace */
    {0x1f, 0x152}, /* Insert */
    {0x20, 0x147}, /* Home */
    {0x21, 0x149}, /* Page Up */
    {0x22, 0x45},
    {0x23, 0x135},
    {0x24, 0x37},
    {0x25, 0x4a},
    {0x26, 0x0f}, /* Tab */
    {0x27, 0x10},
    {0x28, 0x11},
    {0x29, 0x12},
    {0x2a, 0x13},
    {0x2b, 0x14},
    {0x2c, 0x15},
    {0x2d, 0x16},
    {0x2e, 0x17},
    {0x2f, 0x18},
    {0x30, 0x19},
    {0x31, 0x1a},
    {0x32, 0x1b},
    {0x33, 0x2b},
    {0x34, 0x153}, /* Delete */
    {0x35, 0x14f}, /* End */
    {0x36, 0x151}, /* Page Down */
    {0x37, 0x47},
    {0x38, 0x48},
    {0x39, 0x49},
    {0x3a, 0x4e},
    {0x3b, 0x3a},
    {0x3c, 0x1e},
    {0x3d, 0x1f},
    {0x3e, 0x20},
    {0x3f, 0x21},
    {0x40, 0x22},
    {0x41, 0x23},
    {0x42, 0x24},
    {0x43, 0x25},
    {0x44, 0x26},
    {0x45, 0x27},
    {0x46, 0x28},
    {0x47, 0x1c},  /* Enter */
    {0x48, 0x4b},
    {0x49, 0x4c},
    {0x4a, 0x4d},
    {0x4b, 0x2a},
    {0x4c, 0x2c},
    {0x4d, 0x2d},
    {0x4e, 0x2e},
    {0x4f, 0x2f},
    {0x50, 0x30},
    {0x51, 0x31},
    {0x52, 0x32},
    {0x53, 0x33},
    {0x54, 0x34},
    {0x55, 0x35},
    {0x56, 0x36},
    {0x57, 0x148}, /* up arrow */
    {0x58, 0x51},
    {0x59, 0x50},
    {0x5a, 0x4f},
    {0x5b, 0x11c},
    {0x5c, 0x1d},
    {0x5d, 0x38},
    {0x5e, 0x39},  /* space bar */
    {0x5f, 0x138},
    {0x60, 0x11d},
    {0x61, 0x14b}, /* left arrow */
    {0x62, 0x150}, /* down arrow */
    {0x63, 0x14d}, /* right arrow */
    {0x64, 0x52},
    {0x65, 0x53},
    {0x66, 0x15b},
    {0x67, 0x15c},
    {0x68, 0x15d},
    {0x69, 0x56},
    {0x7e, 0x137}, /* System Request */
    {0x7f, 0x145}, /* Break */
};
