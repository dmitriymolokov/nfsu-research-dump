/* spd-match: far pct=11.24 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_10/attempt1_baseline */
#include "ghidra_compat.h"

int __cdecl FUN_004c9650();
int __cdecl FUN_004ca790();
int __cdecl FUN_004eb420();
int __cdecl FUN_004f65d0();
int __cdecl FUN_00565ce0();
extern int DAT_00735dbd;
extern int DAT_00735dc0;

void  FUN_004ca670(int param_1,int param_2)

{
  void *_Memory;
  undefined4 *puVar1;
  int iVar2;
  
  DAT_00735dbd = '\0';
  if (*(char *)(param_1 + 0x48) == '\0') {
    if (param_2 == 0x12312300) {
      iVar2 = FUN_004f65d0();
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x1c) = 0xff;
      }
      if (DAT_00735dc0 != 0) {
        _Memory = *(void **)(param_1 + 0xac);
        if (DAT_00735dc0 == 2) {
          if (_Memory != (void *)0x0) {
            if (*(int *)((int)_Memory + 0xc) != 0) {
              FUN_00565ce0();
            }
            _free(_Memory);
          }
          *(undefined4 *)(param_1 + 0xac) = 0;
          *(undefined1 *)(param_1 + 0xb9) = 1;
          *(code **)(param_1 + 0x40) = FUN_004ca670;
          *(undefined1 *)(param_1 + 0x48) = 1;
          return;
        }
        if (_Memory != (void *)0x0) {
          if (*(int *)((int)_Memory + 0xc) != 0) {
            FUN_00565ce0();
          }
          _free(_Memory);
        }
        *(undefined4 *)(param_1 + 0xac) = 0;
        if (*(char *)(param_1 + 0xb9) != '\0') {
          DAT_00735dbd = *(char *)(param_1 + 0xb9);
        }
        FUN_004c9650();
        return;
      }
      *(code **)(param_1 + 0x40) = FUN_004ca790;
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
  }
  else if (param_2 == -0x367ca946) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    puVar1 = _malloc(0x10);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0x20;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
    }
    *(undefined4 **)(param_1 + 0xac) = puVar1;
    FUN_004eb420(0x12312300,puVar1);
    return;
  }
  return;
}
