/* spd-match: far pct=17.72 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_0054AC80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00664e00(...);
int __cdecl FUN_00667d70(...);
extern int DAT_0073d8d0;
extern int DAT_0073dafc;
extern int DAT_0073dcc0;
extern void LAB_0054cac0(...);

struct ThisCallBox {
  void FUN_0054ac80(int obj, undefined4 param_2);
};
void ThisCallBox::FUN_0054ac80(int obj, undefined4 param_2)

{

  undefined1 local_300 [256];
  undefined1 local_200 [512];
  
  *(undefined4 *)(obj + 0x540) = 10;
  *(undefined4 *)(obj + 0x544) = ((undefined4)this);
  local_300[0] = 0;
  FUN_00667d70(local_300,0x100,"GAME=%d PARAMS=%s",DAT_0073dafc,&DAT_0073dcc0);
  local_200[0] = 0;
  FUN_00667d70(local_200,0x200,"PRIV=%s ATTR=%f TEXT=%s",param_2,0x8000020,local_300);
  if (DAT_0073d8d0 != 0) {
    FUN_00664e00(DAT_0073d8d0,0x6d657367,local_200,&LAB_0054cac0,0);
  }
  return;
}
