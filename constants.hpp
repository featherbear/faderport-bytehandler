#define FADERPORT_16

extern const char SysExHdr[5] = {0xf0, 0x00, 0x01, 0x06, 0x02};

extern const char SysEx_Mfr[3] = {0x00, 0x01, 0x06};
extern const char SysEx_FP16_ID = 0x16;
extern const char SysEx_FP8_ID = 0x02;

extern const char SysEx_KeepAlive[3] = {0xa0, 0x00, 0x00};

extern enum Fader {
    FADER_1 = 0x68,
    FADER_2 = 0x69,
    FADER_3 = 0x6A,
    FADER_4 = 0x6B,
    FADER_5 = 0x6C,
    FADER_6 = 0x6D,
    FADER_7 = 0x6E,
    FADER_8 = 0x6F,
    FADERPORT_16 FADER_9 = 0x70,
    FADERPORT_16 FADER_10 = 0x71,
    FADERPORT_16 FADER_11 = 0x72,
    FADERPORT_16 FADER_12 = 0x73,
    FADERPORT_16 FADER_13 = 0x74,
    FADERPORT_16 FADER_14 = 0x75,
    FADERPORT_16 FADER_15 = 0x76,
    FADERPORT_16 FADER_16 = 0x77,
};

extern enum Encoder {
    PAN_PARAM,
    SESSION_NAVIGATOR
};

extern enum Button {
    PAN_PARAM = 0x20,
    ARM = 0x00,
    SOLO_CLEAR = 0x01,
    MUTE_CLEAR = 0x02,
    BYPASS = 0x03,
    MACRO = 0x04,
    LINK = 0x05,
    SHIFT_LEFT = 0x46,

    SELECT_1 = 0x18,
    SELECT_2 = 0x19,
    SELECT_3 = 0x1A,
    SELECT_4 = 0x1B,
    SELECT_5 = 0x1C,
    SELECT_6 = 0x1D,
    SELECT_7 = 0x1E,
    SELECT_8 = 0x1F,
    FADERPORT_16 SELECT_9 = 0x07,
    FADERPORT_16 SELECT_10 = 0x21,
    FADERPORT_16 SELECT_11 = 0x22,
    FADERPORT_16 SELECT_12 = 0x23,
    FADERPORT_16 SELECT_13 = 0x24,
    FADERPORT_16 SELECT_14 = 0x25,
    FADERPORT_16 SELECT_15 = 0x26,
    FADERPORT_16 SELECT_16 = 0x27,

    SOLO_1 = 0x08,
    SOLO_2 = 0x09,
    SOLO_3 = 0x0A,
    SOLO_4 = 0x0B,
    SOLO_5 = 0x0C,
    SOLO_6 = 0x0D,
    SOLO_7 = 0x0E,
    SOLO_8 = 0x0F,
    FADERPORT_16 SOLO_9 = 0x50,
    FADERPORT_16 SOLO_10 = 0x51,
    FADERPORT_16 SOLO_11 = 0x52,
    FADERPORT_16 SOLO_12 = 0x53,
    FADERPORT_16 SOLO_13 = 0x54,
    FADERPORT_16 SOLO_14 = 0x55,
    FADERPORT_16 SOLO_15 = 0x56,
    FADERPORT_16 SOLO_16 = 0x57,

    MUTE_1 = 0x10,
    MUTE_2 = 0x11,
    MUTE_3 = 0x12,
    MUTE_4 = 0x13,
    MUTE_5 = 0x14,
    MUTE_6 = 0x15,
    MUTE_7 = 0x16,
    MUTE_8 = 0x17,
    FADERPORT_16 MUTE_9 = 0x78,
    FADERPORT_16 MUTE_10 = 0x79,
    FADERPORT_16 MUTE_11 = 0x7A,
    FADERPORT_16 MUTE_12 = 0x7B,
    FADERPORT_16 MUTE_13 = 0x7C,
    FADERPORT_16 MUTE_14 = 0x7D,
    FADERPORT_16 MUTE_15 = 0x7E,
    FADERPORT_16 MUTE_16 = 0x7F,

    TRACK = 0x28,
    EDIT_PLUGINS = 0x2B,
    SEND = 0x29,
    PAN = 0x2A,

    AUDIO = 0x3E,
    VI = 0x3F,
    BUS = 0x40,
    VCA = 0x41,
    ALL = 0x42,
    SHIFT_RIGHT = 06,

    LATCH = 0x4E,
    TRIM = 0x4C,
    OFF = 0xF4,
    TOUCH = 0x4D,
    WRITE = 0x4B,
    READ = 0x4A,

    PREV = 0x2E,
    NEXT = 0x2F,

    SESSION_NAVIGATOR = 0x53,

    CHANNEL = 0x36,
    ZOOM = 0x37,
    SCROLL = 0x38,
    BANK = 0x39,
    MASTER = 0x3A,
    CLICK = 0x3B,
    SECTION = 0x3C,
    MARKER = 0x3D,
    REWIND = 0x5B,
    FAST_FORWARD = 0x5C,
    STOP = 0x5D,
    RECORD = 0x5F,
    PLAY = 0x5E,

};

extern const char FOOTSWITCH_CODE = 0x66;

extern const enum LED {
    ARM = Button::ARM,
    SOLO_CLEAR = Button::SOLO_CLEAR,
    MUTE_CLEAR = Button::MUTE_CLEAR,
    BYPASS_RGB = Button::BYPASS,
    MACRO_RGB = Button::MACRO,
    LINK_RGB = Button::LINK,
    SHIFT_LEFT = Button::SHIFT_LEFT,
    SHIFT_RIGHT = Button::SHIFT_RIGHT,

    TRACK = Button::TRACK,
    EDIT_PLUGINS = Button::EDIT_PLUGINS,
    SEND = Button::SEND,
    PAN = Button::PAN,

    CHANNEL = Button::CHANNEL,
    ZOOM = Button::ZOOM,
    SCROLL = Button::SCROLL,
    BANK = Button::BANK,
    MASTER = Button::MASTER,
    CLICK = Button::CLICK,
    SECTION = Button::SECTION,
    MARKER = Button::MARKER,
    REWIND = Button::REWIND,
    FAST_FORWARD = Button::FAST_FORWARD,
    STOP = Button::STOP,
    RECORD = Button::RECORD,
    PLAY = Button::PLAY,

    LATCH_RGB = Button::LATCH,
    TRIM_RGB = Button::TRIM,
    OFF_RGB = Button::OFF,
    TOUCH_RGB = Button::TOUCH,
    WRITE_RGB = Button::WRITE,
    READ_RGB = Button::READ,

    AUDIO_RGB = Button::AUDIO,
    VI_RGB = Button::VI,
    BUS_RGB = Button::BUS,
    VCA_RGB = Button::VCA,
    ALL_RGB = Button::ALL,

    SOLO_1 = Button::SOLO_1,
    SOLO_2 = Button::SOLO_2,
    SOLO_3 = Button::SOLO_3,
    SOLO_4 = Button::SOLO_4,
    SOLO_5 = Button::SOLO_5,
    SOLO_6 = Button::SOLO_6,
    SOLO_7 = Button::SOLO_7,
    SOLO_8 = Button::SOLO_8,
    FADERPORT_16 SOLO_9 = Button::SOLO_9,
    FADERPORT_16 SOLO_10 = Button::SOLO_10,
    FADERPORT_16 SOLO_11 = Button::SOLO_11,
    FADERPORT_16 SOLO_12 = Button::SOLO_12,
    FADERPORT_16 SOLO_13 = Button::SOLO_13,
    FADERPORT_16 SOLO_14 = Button::SOLO_14,
    FADERPORT_16 SOLO_15 = Button::SOLO_15,
    FADERPORT_16 SOLO_16 = Button::SOLO_16,

    MUTE_1 = Button::MUTE_1,
    MUTE_2 = Button::MUTE_2,
    MUTE_3 = Button::MUTE_3,
    MUTE_4 = Button::MUTE_4,
    MUTE_5 = Button::MUTE_5,
    MUTE_6 = Button::MUTE_6,
    MUTE_7 = Button::MUTE_7,
    MUTE_8 = Button::MUTE_8,
    FADERPORT_16 MUTE_9 = Button::MUTE_9,
    FADERPORT_16 MUTE_10 = Button::MUTE_10,
    FADERPORT_16 MUTE_11 = Button::MUTE_11,
    FADERPORT_16 MUTE_12 = Button::MUTE_12,
    FADERPORT_16 MUTE_13 = Button::MUTE_13,
    FADERPORT_16 MUTE_14 = Button::MUTE_14,
    FADERPORT_16 MUTE_15 = Button::MUTE_15,
    FADERPORT_16 MUTE_16 = Button::MUTE_16,

    SELECT_1_RGB = Button::SELECT_1,
    SELECT_2_RGB = Button::SELECT_2,
    SELECT_3_RGB = Button::SELECT_3,
    SELECT_4_RGB = Button::SELECT_4,
    SELECT_5_RGB = Button::SELECT_5,
    SELECT_6_RGB = Button::SELECT_6,
    SELECT_7_RGB = Button::SELECT_7,
    SELECT_8_RGB = Button::SELECT_8,
    FADERPORT_16 SELECT_9_RGB = Button::SELECT_9,
    FADERPORT_16 SELECT_10_RGB = Button::SELECT_10,
    FADERPORT_16 SELECT_11_RGB = Button::SELECT_11,
    FADERPORT_16 SELECT_12_RGB = Button::SELECT_12,
    FADERPORT_16 SELECT_13_RGB = Button::SELECT_13,
    FADERPORT_16 SELECT_14_RGB = Button::SELECT_14,
    FADERPORT_16 SELECT_15_RGB = Button::SELECT_15,
    FADERPORT_16 SELECT_16_RGB = Button::SELECT_16,
};

extern const enum VALUE_BAR_MODE {
    NORMAL = 0,
    BIPOLAR = 1,
    FILL = 2,
    SPREAD = 3,
    OFF = 4
};

extern const enum SCRIBBLE_STRIP_REDRAW_MODE {
    KEEP = 0,
    DISCARD = 1,
};

extern const enum SCRIBBLE_STRIP_MODE {
    DEFAULT = 0,
    ALTERNATIVE_DEFAULT = 1,
    SMALL_TEXT = 2,
    LARGE_TEXT = 3,
    LARGE_TEXT_METERING = 4,
    DEFAULT_TEXT_METERING = 5,
    MIXED_TEST = 6,
    ALTERNATIVE_TEXT_METERING = 7,
    MIXED_TEXT_METERING = 8,
    MENU = 9,
};

extern const enum STRING_FORMAT {
    CENTER = 0b000,
    LEFT = 0b001,
    RIGHT = 0b010,
    INVERT = 0b100
};
