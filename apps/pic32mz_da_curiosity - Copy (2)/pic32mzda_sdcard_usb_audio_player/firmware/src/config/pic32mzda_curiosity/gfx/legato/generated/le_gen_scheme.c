#include "gfx/legato/generated/le_gen_scheme.h"

const leScheme ListWheelScheme = 
{
    {
        { { 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x0, 0x8B, 0x0, 0xFF, 0xFF, 0x6A, 0x0, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0xFF, 0xFF, 0xFF, 0xFF, 0x49, 0x0, 0x93, 0x0, 0xFF, 0xFF, 0x6D, 0x0, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x4208, 0x0, 0x841F, 0x0, 0xFFFF, 0xFFFF, 0x6B4D, 0x0, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x4211, 0x1, 0x843F, 0x1, 0xFFFF, 0xFFFF, 0x6B5B, 0x1, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x404040, 0x0, 0x8482FF, 0x0, 0xFFFFFF, 0xFFFFFF, 0x6B696B, 0x0, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x404040FF, 0xFF, 0x8482FFFF, 0xFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x6B696BFF, 0xFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFF404040, 0xFF000000, 0xFF8482FF, 0xFF000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFF6B696B, 0xFF000000, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0xF, 0xF, 0xF, 0xF, 0xED, 0x0, 0x68, 0x0, 0xF, 0xF, 0xF0, 0x0, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
    },
};
const leScheme defaultScheme = 
{
    {
        { { 0x0, 0xB0, 0xB0, 0xB0, 0xB0, 0x0, 0xB0, 0xB0, 0xED, 0xED, 0xED, 0xFF, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0x0, 0xB4, 0xB4, 0xB4, 0xB4, 0x0, 0xB4, 0xB4, 0xFC, 0xFC, 0xFC, 0xFF, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0x0, 0xBDE0, 0xBDE0, 0xBDE0, 0xBDE0, 0x0, 0xBDE0, 0xBDE0, 0xFFE0, 0xFFE0, 0xFFE0, 0xFFFF, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0x1, 0xBDC1, 0xBDC1, 0xBDC1, 0xBDC1, 0x1, 0xBDC1, 0xBDC1, 0xFFC1, 0xFFC1, 0xFFC1, 0xFFFF, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0x0, 0xBDBE00, 0xBDBE00, 0xBDBE00, 0xBDBE00, 0x0, 0xBDBE00, 0xBDBE00, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0xFFFFFF, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xFF, 0xBDBE00FF, 0xBDBE00FF, 0xBDBE00FF, 0xBDBE00FF, 0xFF, 0xBDBE00FF, 0xBDBE00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFFFFFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFF000000, 0xFFBDBE00, 0xFFBDBE00, 0xFFBDBE00, 0xFFBDBE00, 0xFF000000, 0xFFBDBE00, 0xFFBDBE00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFFFF, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0x0, 0x8D, 0x8D, 0x8D, 0x8D, 0x0, 0x8D, 0x8D, 0xB, 0xB, 0xB, 0xF, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
    },
};
const leScheme ProgressScheme = 
{
    {
        { { 0xDE, 0xCF, 0xFF, 0x80, 0x40, 0x0, 0xDE, 0x80, 0xFF, 0xE1, 0xCF, 0x0, 0xD, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0xDB, 0xBA, 0xFF, 0x92, 0x49, 0x0, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0x0, 0x2, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0xDEFB, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0x0, 0xDEFB, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0x0, 0x16, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0xDEF7, 0xC675, 0xFFFF, 0x8421, 0x4211, 0x1, 0xDEF7, 0x8421, 0xFFFF, 0xD739, 0xC675, 0x1, 0x2D, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xDEDFDE, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0x0, 0xDEDFDE, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0x0, 0xB5, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xDEDFDEFF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFF, 0xDEDFDEFF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFF, 0xB5FF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFFDEDFDE, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF000000, 0xFFDEDFDE, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF000000, 0xFF0000B5, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0xFD, 0xFC, 0xF, 0x8, 0xED, 0x0, 0xFD, 0x8, 0xF, 0xFE, 0xFC, 0x0, 0x12, 0xF, 0xFE, 0xF6 } }, // INDEX_8
    },
};
const leScheme whiteScheme = 
{
    {
        { { 0xFF, 0xCF, 0xFF, 0x80, 0x40, 0x0, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0xFF, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0xFF, 0xBA, 0xFF, 0x92, 0x49, 0x0, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0xFF, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0xFFFF, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0x0, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0xFFFF, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0xFFFF, 0xC675, 0xFFFF, 0x8421, 0x4211, 0x1, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0xFFFF, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xFFFFFF, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0x0, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0xFFFFFF, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xFFFFFFFF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFFFFFFFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFFFFFFFF, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF000000, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0xF, 0xFC, 0xF, 0x8, 0xED, 0x0, 0xFE, 0x8, 0xF, 0xFE, 0xFC, 0xF, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
    },
};
const leScheme volumeScheme = 
{
    {
        { { 0x28, 0x0, 0xFF, 0x0, 0x40, 0x0, 0x0, 0x0, 0xFF, 0xE1, 0x0, 0x0, 0x0, 0xFF, 0xE1, 0x0 } }, // GS_8
        { { 0xA0, 0x0, 0xFF, 0x0, 0x49, 0x0, 0x0, 0x0, 0xFF, 0xDB, 0x0, 0x0, 0x0, 0xFF, 0xDB, 0x0 } }, // RGB_332
        { { 0xB800, 0x0, 0xFFFF, 0x0, 0x4208, 0x0, 0x0, 0x0, 0xFFFF, 0xD71C, 0x0, 0x0, 0x0, 0xFFFF, 0xD71C, 0x0 } }, // RGB_565
        { { 0xB801, 0x1, 0xFFFF, 0x1, 0x4211, 0x1, 0x1, 0x1, 0xFFFF, 0xD739, 0x1, 0x1, 0x1, 0xFFFF, 0xD739, 0x1 } }, // RGBA_5551
        { { 0xBD0000, 0x0, 0xFFFFFF, 0x0, 0x404040, 0x0, 0x0, 0x0, 0xFFFFFF, 0xD6E3E7, 0x0, 0x0, 0x0, 0xFFFFFF, 0xD6E3E7, 0x0 } }, // RGB_888
        { { 0xBD0000FF, 0xFF, 0xFFFFFFFF, 0xFF, 0x404040FF, 0xFF, 0xFF, 0xFF, 0xFFFFFFFF, 0xD6E3E7FF, 0xFF, 0xFF, 0xFF, 0xFFFFFFFF, 0xD6E3E7FF, 0xFF } }, // RGBA_8888
        { { 0xFFBD0000, 0xFF000000, 0xFFFFFFFF, 0xFF000000, 0xFF404040, 0xFF000000, 0xFF000000, 0xFF000000, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF000000, 0xFF000000, 0xFF000000, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF000000 } }, // ARGB_8888
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0x7B, 0x0, 0xF, 0x0, 0xED, 0x0, 0x0, 0x0, 0xF, 0xFE, 0x0, 0x0, 0x0, 0xF, 0xFE, 0x0 } }, // INDEX_8
    },
};
const leScheme gradientScheme = 
{
    {
        { { 0xDE, 0xCF, 0xFF, 0x80, 0x40, 0x36, 0x0, 0x0, 0xFF, 0xE1, 0xCF, 0x0, 0x0, 0xFF, 0x0, 0x0 } }, // GS_8
        { { 0xDB, 0xBA, 0xFF, 0x92, 0x49, 0xE0, 0x0, 0x0, 0xFF, 0xDB, 0xBA, 0x0, 0x0, 0xFF, 0x0, 0x0 } }, // RGB_332
        { { 0xDEFB, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0xF800, 0x0, 0x0, 0xFFFF, 0xD71C, 0xC67A, 0x0, 0x0, 0xFFFF, 0x0, 0x0 } }, // RGB_565
        { { 0xDEF7, 0xC675, 0xFFFF, 0x8421, 0x4211, 0xF801, 0x1, 0x1, 0xFFFF, 0xD739, 0xC675, 0x1, 0x1, 0xFFFF, 0x1, 0x1 } }, // RGBA_5551
        { { 0xDEDFDE, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0xFF0000, 0x0, 0x0, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0x0, 0x0, 0xFFFFFF, 0x0, 0x0 } }, // RGB_888
        { { 0xDEDFDEFF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFF0000FF, 0xFF, 0xFF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFF, 0xFF, 0xFFFFFFFF, 0xFF, 0xFF } }, // RGBA_8888
        { { 0xFFDEDFDE, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFFFF0000, 0xFF000000, 0xFF000000, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF000000, 0xFF000000, 0xFFFFFFFF, 0xFF000000, 0xFF000000 } }, // ARGB_8888
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0xFD, 0xFC, 0xF, 0x8, 0xED, 0x9, 0x0, 0x0, 0xF, 0xFE, 0xFC, 0x0, 0x0, 0xF, 0x0, 0x0 } }, // INDEX_8
    },
};
const leScheme NewScheme = 
{
    {
        { { 0xC9, 0xC9, 0xFF, 0x80, 0x40, 0x0, 0x8B, 0x80, 0xFF, 0x8B, 0x12, 0x0, 0x0, 0x0, 0x12, 0x12 } }, // GS_8
        { { 0x1F, 0x1F, 0xFF, 0x92, 0x49, 0x0, 0x93, 0x92, 0xFF, 0x93, 0x3, 0x0, 0x0, 0x0, 0x3, 0x3 } }, // RGB_332
        { { 0x7FF, 0x7FF, 0xFFFF, 0x8410, 0x4208, 0x0, 0x841F, 0x8410, 0xFFFF, 0x841F, 0x1F, 0x0, 0x0, 0x0, 0x1F, 0x1F } }, // RGB_565
        { { 0x7FF, 0x7FF, 0xFFFF, 0x8421, 0x4211, 0x1, 0x843F, 0x8421, 0xFFFF, 0x843F, 0x3F, 0x1, 0x1, 0x1, 0x3F, 0x3F } }, // RGBA_5551
        { { 0xFFFF, 0xFFFF, 0xFFFFFF, 0x808080, 0x404040, 0x0, 0x8482FF, 0x808080, 0xFFFFFF, 0x8482FF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF } }, // RGB_888
        { { 0xFFFFFF, 0xFFFFFF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFF, 0x8482FFFF, 0x808080FF, 0xFFFFFFFF, 0x8482FFFF, 0xFFFF, 0xFF, 0xFF, 0xFF, 0xFFFF, 0xFFFF } }, // RGBA_8888
        { { 0xFF00FFFF, 0xFF00FFFF, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF000000, 0xFF8482FF, 0xFF808080, 0xFFFFFFFF, 0xFF8482FF, 0xFF0000FF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF0000FF, 0xFF0000FF } }, // ARGB_8888
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0xE, 0xE, 0xF, 0x8, 0xED, 0x0, 0x68, 0x8, 0xF, 0x68, 0xC, 0x0, 0x0, 0x0, 0xC, 0xC } }, // INDEX_8
    },
};
const leScheme Backgroundgradientscheme = 
{
    {
        { { 0x0, 0xCF, 0xFF, 0x80, 0x40, 0x8E, 0x5, 0x80, 0x6, 0xE1, 0xCF, 0x0, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0x0, 0xBA, 0xFF, 0x92, 0x49, 0x33, 0x1, 0x92, 0x1, 0xDB, 0xBA, 0x0, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0x0, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0x34FF, 0x8, 0x8410, 0xA, 0xD71C, 0xC67A, 0x0, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0x1, 0xC675, 0xFFFF, 0x8421, 0x4211, 0x34FF, 0x11, 0x8421, 0x15, 0xD739, 0xC675, 0x1, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0x0, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0x319EFF, 0x42, 0x808080, 0x52, 0xD6E3E7, 0xC8D0D4, 0x0, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xFF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0x319EFFFF, 0x42FF, 0x808080FF, 0x52FF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFF000000, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF319EFF, 0xFF000042, 0xFF808080, 0xFF000052, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF000000, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0x0, 0xFC, 0xF, 0x8, 0xED, 0x4A, 0x10, 0x8, 0x10, 0xFE, 0xFC, 0x0, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
    },
};