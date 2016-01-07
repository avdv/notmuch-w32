#include <config.h>

/* Silence gcc warnings about unused results.  These warnings exist
 * for a reason; any use of this needs to be justified. */
#ifdef __GNUC__
#define IGNORE_RESULT(x) ({ __typeof__(x) __z = (x); (void)(__z = __z); })
#else /* !__GNUC__ */
#define IGNORE_RESULT(x) x
#endif /* __GNUC__ */

