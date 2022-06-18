// proactor pattern implemented using linux io_uring or custom thread pool
#ifdef __linux__
#define BACKEND_IOURING
#include <liburing.h>
#endif // __linux__
