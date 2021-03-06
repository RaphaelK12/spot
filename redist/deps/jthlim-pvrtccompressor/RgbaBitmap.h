#ifndef JTHLIM_RGBABITMAP_H
#define JTHLIM_RGBABITMAP_H

#include "ColorRgba.h"

namespace Javelin {

class RgbaBitmap : public Bitmap {
public:
    RgbaBitmap(int w, int h)
        : Bitmap(w, h, 4) {
    }

    const ColorRgba<unsigned char> *GetData() const { 
        return reinterpret_cast<ColorRgba<unsigned char> *>(data); 
    }

    ColorRgba<unsigned char> *GetData() { 
        return reinterpret_cast<ColorRgba<unsigned char> *>(data); 
    }
};

}

#endif
