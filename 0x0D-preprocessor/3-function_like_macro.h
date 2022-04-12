#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#if (x < 0)
	#define ABS(x) ((x) * (-1))
#else
	#define ABS(x) (x)
#endif /* ABS(x) */
#endif /* FUNCTION_LIKE_MACRO_H */
