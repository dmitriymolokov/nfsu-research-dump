/* spd-match: far pct=9.73 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C2440_void_casts/batches/20260724T141852Z_w0_tp1 */
#include "ghidra_compat.h"

void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);
int __cdecl lstrcmpiA(LPCSTR, LPCSTR);
int __cdecl __ftol(void);

int __cdecl FUN_004c9650(...);
int __cdecl FUN_004ca670(...);
int __cdecl FUN_004dc6e0(...);
int __cdecl FUN_004f65d0(...);
int __cdecl FUN_00565ce0(...);
extern int DAT_00735dbd;
extern void LAB_004ca8f0(...);

struct ThisCallBox {
  void FUN_004ca790(int param_2);
};
void ThisCallBox::FUN_004ca790(int param_2) {
  void *pvVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)(((int)this) + 0x48) == '\0') {
    if (param_2 == 0x12312300) {
      iVar2 = FUN_004f65d0();
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x1c) = 0xff;
      }
      pvVar1 = *(void **)(((int)this) + 0xac);
      if (pvVar1 != (void *)0x0) {
        if (*(int *)((int)pvVar1 + 0xc) != 0) {
          FUN_00565ce0();
        }
        _free(pvVar1);
      }
      *(undefined4 *)(((int)this) + 0xac) = 0;
      *(code **)(((int)this) + 0x40) = FUN_004ca670;
      *(undefined1 *)(((int)this) + 0x48) = 1;
    }
    else if (param_2 == 0x12312311) {
      iVar2 = FUN_004f65d0();
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x1c) = 0xff;
      }
      pvVar1 = *(void **)(((int)this) + 0xac);
      if (pvVar1 != (void *)0x0) {
        if (*(int *)((int)pvVar1 + 0xc) != 0) {
          FUN_00565ce0();
        }
        _free(pvVar1);
      }
      *(undefined4 *)(((int)this) + 0xac) = 0;
      if (*(char *)(((int)this) + 0xb9) != '\0') {
        DAT_00735dbd = *(char *)(((int)this) + 0xb9);
      }
      FUN_004c9650();
      return;
    }
  }
  else if (param_2 == -0x367ca946) {
    *(undefined1 *)(((int)this) + 0x48) = 0;
    if (*(int *)(*(int *)(((int)this) + 0xac) + 8) != 0) {
      *(undefined1 **)(((int)this) + 0x40) = (unsigned char *)(unsigned int)&LAB_004ca8f0;
      *(undefined1 *)(((int)this) + 0x48) = 1;
      return;
    }
    local_8 = 0;
    local_4 = 0;
    local_24 = 0xab1f0e92;
    local_20 = 0x39df715;
    local_1c = 0x12312300;
    local_18 = 0x541389e5;
    local_14 = 0x12312311;
    local_10 = 0;
    local_c = 0xb8a7c6cd;
    FUN_004dc6e0(&local_24,"GenericDialog.fng",*(undefined4 *)(((int)this) + 0xc));
    return;
  }
  return;
}
