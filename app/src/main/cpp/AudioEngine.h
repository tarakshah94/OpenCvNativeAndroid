//
// Created by Tarak on 09-10-2018.
//

#ifndef WAVEMAKER_AUDIOENGINE_H
#define WAVEMAKER_AUDIOENGINE_H
#include <aaudio/AAudio.h>
#include "Oscillator.h"

class AudioEngine {
    public:
        bool start();
        void stop();
        void restart();
        void setToneOn(bool isToneOn);

    private:
        Oscillator oscillator_;
        AAudioStream *stream_;
};


#endif //WAVEMAKER_AUDIOENGINE_H
