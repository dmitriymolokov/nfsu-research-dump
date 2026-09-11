/* spd-match: far pct=10.08 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p2/batches/20260724T141853Z_w0_tc0 */
#include "ghidra_compat.h"

#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif
int __cdecl WideCharToMultiByte(void);
int __cdecl lstrcmpiA(const char *, const char *);
char *__cdecl _strncpy(char *, const char *, unsigned int);
long __cdecl __ftol(void);

int __cdecl FUN_0063a310();
int __cdecl FUN_0063db00();
int __cdecl FUN_00641a90();
int __cdecl FUN_00641e00();
int __cdecl FUN_00641fb0();
int __cdecl FUN_00642450();
extern int DAT_0070f36c;
extern int DAT_0070f3c8;

extern unsigned char UNK_00639130[];






undefined4 FUN_0063aa40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00641fb0(&DAT_0070f3c8,&UNK_00639130,param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0063db00(*(undefined4 *)(iVar1 + 0xc));
    iVar3 = FUN_0063a310(10,param_2,param_3,uVar2);
    iVar4 = DAT_0070f36c;
    *(int *)(iVar3 + 0x2c) = iVar1;
    iVar4 = (*(uint *)(iVar3 + 4) & 0x1f) * 0xac + iVar4;
    if (iVar4 == 0) {
      FUN_00642450("FILE_queueop - ATTEMPT TO QUEUE FILEOP ON NON-EXISTANT DEVICE.\n");
    }
    FUN_00641e00(iVar4 + 0x14,iVar3);
    FUN_00641a90(iVar4 + 0x7c);
    return *(undefined4 *)(iVar3 + 4);
  }
  return 0;
}
