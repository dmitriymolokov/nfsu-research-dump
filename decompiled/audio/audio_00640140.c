/* spd-match: far pct=8.04 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/research_misc/batches/20260724T142527Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef unsigned int WPARAM;
typedef long LRESULT;
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
int __cdecl FUN_m375_thunk_helper(void);

int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
int __cdecl func_0x00683ed0();

extern int iRam0070fd64;
extern int iRam0070f70c;
extern int iRam0070f700;






uint FUN_00640140(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  FUN_0063f190(0x70f6d4);
  iVar1 = iRam0070fd64;
  if (iRam0070fd64 != iRam0070f70c) {
    do {
      if (uVar2 != 0) break;
      iVar3 = *(int *)(iVar1 * 4 + 0x70fc20);
      uVar2 = iVar3 >> 0x10;
      iVar3 = (int)(char)iVar3;
      if ((uVar2 == 0) && (uVar2 = func_0x00683ed0(iVar3), iVar1 = iRam0070fd64, uVar2 == 0)) {
        iRam0070fd64 = (iRam0070fd64 + 1) % iRam0070f700;
        iVar1 = iRam0070fd64;
      }
    } while (iVar1 != iRam0070f70c);
  }
  FUN_0063f1a0(0x70f6d4);
  return iVar3 << 0x10 | uVar2;
}
