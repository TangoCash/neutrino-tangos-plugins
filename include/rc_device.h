#include <config.h>

#if HAVE_COOL_HARDWARE
#define RC_DEVICE "/dev/input/nevis_ir"
#define RC_DEVICE_FALLBACK "/dev/input/event0"

#elif HAVE_SPARK_HARDWARE
#define RC_DEVICE "/dev/input/nevis_ir"
#define RC_DEVICE_FALLBACK "/dev/input/event1"

#elif HAVE_DUCKBOX_HARDWARE
#define RC_DEVICE "/dev/input/event0"
#define RC_DEVICE_FALLBACK "/dev/input/event1"

#elif BOXMODEL_H7 || BOXMODEL_H9COMBO || BOXMODEL_H9
#define RC_DEVICE "/dev/input/event2"
#define RC_DEVICE_FALLBACK "/dev/input/event1"

#else
#define RC_DEVICE "/dev/input/event1"
#define RC_DEVICE_FALLBACK "/dev/input/event0"

#endif
