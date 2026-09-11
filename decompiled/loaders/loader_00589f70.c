/* spd-match: far pct=12.16 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p2/batches/20260724T141726Z_w0_tc0 */
#include "ghidra_compat.h"

#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif
int __cdecl WideCharToMultiByte(void);
int __cdecl lstrcmpiA(const char *, const char *);
char *__cdecl _strncpy(char *, const char *, unsigned int);
long __cdecl __ftol(void);

int __cdecl FUN_005649f0();
int __cdecl FUN_00567160();
extern int DAT_007349b4;
int unaff_ESI;

extern int iRam00000000;
extern int piRam00000004;






void FUN_00589f70(int param_1)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  
  if (DAT_007349b4 == 0) {
    FUN_005649f0();
  }
  piVar2 = (int *)FUN_00567160();
  if (piVar2 != (int *)0x0) {
    piVar2[2] = param_1;
    iVar1 = *unaff_ESI;
    *unaff_ESI = (int)piVar2;
    *(int **)(iVar1 + 4) = piVar2;
    piVar2[1] = (int)unaff_ESI;
    *piVar2 = iVar1;
    return;
  }
  iRam00000000 = *unaff_ESI;
  *unaff_ESI = 0;
  *(undefined4 *)(iRam00000000 + 4) = 0;
  piRam00000004 = unaff_ESI;
  return;
}
