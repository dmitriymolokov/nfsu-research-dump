/* spd-match: far pct=7.75 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-arity/va_00483FB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00483160();
int __cdecl FUN_00593bc0();
extern int DAT_0073457c;
int unaff_EDI;
void __fastcall FUN_00483fb0(int obj, int param_1, float *param_2)

{
  int iVar1;

  int unaff_EDI;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_18;
  
  iVar1 = *(int *)(obj + 0x1c);
  local_2c = DAT_0073457c * *(float *)(iVar1 + 0x204) + *(float *)(iVar1 + 100);
  local_28 = DAT_0073457c * *(float *)(iVar1 + 0x208) + *(float *)(iVar1 + 0x68);
  local_30 = DAT_0073457c * *(float *)(iVar1 + 0x200) + *(float *)(iVar1 + 0x60);
  if (unaff_EDI != 0) {
    FUN_00483fb0(0, &local_30,&local_30);
  }
  FUN_00483160(local_30,local_2c,local_28);
  iVar1 = *(int *)(obj + 0x1c);
  fStack_40 = *(float *)(iVar1 + 0x200);
  fStack_3c = *(float *)(iVar1 + 0x204);
  fStack_18 = *(float *)(iVar1 + 0x208);
  if (param_2 != (float *)0x0) {
    fStack_40 = fStack_40 - *param_2;
    fStack_3c = fStack_3c - param_2[1];
    fStack_18 = fStack_18 - param_2[2];
  }
  fStack_38 = *(float *)(param_1 + 0x24);
  fStack_40 = fStack_40 * fStack_38;
  uStack_34 = 0;
  fStack_3c = fStack_3c * fStack_38;
  fStack_38 = fStack_18 * fStack_38;
  if (unaff_EDI != 0) {
    FUN_00483fb0(0, &fStack_40,&fStack_40);
  }
  FUN_00593bc0(fStack_40,fStack_3c,fStack_38);
  return;
}
