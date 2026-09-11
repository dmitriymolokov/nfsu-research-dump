/* spd-match: far pct=12.71 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/eagl_p2/batches/20260724T153947Z_w0_tc0 */
#include "ghidra_compat.h"

typedef unsigned char MSG;
typedef MSG *LPMSG;
typedef unsigned char *LPBYTE;
typedef unsigned int MMRESULT;
void *DefWindowProcA_exref;
void *DestroyWindow;
void *_StartAddress;

int __cdecl FUN_00628eb0();
extern unsigned char *DAT_0070d364;
extern unsigned char *PTR_FUN_006a7e08;

extern int iRam00000000;






int * FUN_00627cd0(short *param_1)

{
  short sVar1;
  int *piVar2;
  
  sVar1 = *param_1;
  if (sVar1 == 0xf) {
    piVar2 = (int *)(**(code **)(*DAT_0070d364 + 0x1c))(0xf);
    if (piVar2 != (int *)0x0) {
      FUN_00628eb0();
      *piVar2 = (int)&PTR_FUN_006a7e08;
      piVar2[4] = 0;
      *(undefined1 *)(piVar2 + 5) = 0;
      *(undefined1 *)((int)piVar2 + 0x15) = 0;
      piVar2[2] = 0xf;
      (**(code **)(*piVar2 + 0x3c))(param_1);
      return piVar2;
    }
    (**(code **)(iRam00000000 + 0x3c))(param_1);
    return (int *)0x0;
  }
  if (sVar1 != 0x16) {
    if (sVar1 != 0x17) {
      return (int *)0x0;
    }
    (**(code **)(*(int *)(param_1 + -0xc) + 0x3c))(param_1);
    return (int *)(param_1 + -0xc);
  }
  (**(code **)(*(int *)(param_1 + -0xc) + 0x3c))(param_1);
  return (int *)(param_1 + -0xc);
}
