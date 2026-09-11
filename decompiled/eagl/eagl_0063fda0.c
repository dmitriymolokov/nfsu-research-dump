/* spd-match: far pct=5.43 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/research_misc/batches/20260724T142527Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef unsigned int WPARAM;
typedef long LRESULT;
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
int __cdecl FUN_m375_thunk_helper(void);


extern int iRam0070fd84;
extern int iRam0070fd7c;
extern int iRam0070fd80;






void FUN_0063fda0(int param_1)

{
  int iStack_8;
  int iStack_4;
  
  SystemParametersInfoA(0x10,0,&iStack_4,0);
  SystemParametersInfoA(0x54,0,&iStack_8,0);
  if (iRam0070fd84 == 0) {
    iRam0070fd7c = iStack_4;
    iRam0070fd80 = iStack_8;
    iRam0070fd84 = 1;
  }
  if (iStack_4 != param_1) {
    SystemParametersInfoA(0x11,(uint)(iStack_4 == 0),(PVOID)0x0,2);
  }
  if (iStack_8 != param_1) {
    SystemParametersInfoA(0x56,(uint)(iStack_8 == 0),(PVOID)0x0,2);
  }
  return;
}
