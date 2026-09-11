/* spd-match: close pct=83.33 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_11/attempt2_tc */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_005ac68f();
int __cdecl FUN_005abda2();

typedef void _func_4879(void);

typedef void _func_4879(void);
typedef int _onexit_t;
_onexit_t __cdecl __onexit(_onexit_t _Func);



int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}
