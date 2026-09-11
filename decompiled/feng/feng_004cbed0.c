/* spd-match: far pct=5.92 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_004dc6e0(...);
int __cdecl FUN_004f65d0(...);
extern int DAT_00735e4c;
extern int DAT_007677b0;
extern void LAB_004cafd0(...);
extern void LAB_004cbfd0(...);

struct ThisCallBox {
  void FUN_004cbed0(int param_2);
};
void ThisCallBox::FUN_004cbed0(int param_2) {
  int iVar1;
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
    if (param_2 != 0x12312300) {
      if (param_2 == 0x12312311) {
        DAT_00735e4c = 0;
      }
      else {
        if (param_2 != 0x12312322) {
          return;
        }
        DAT_00735e4c = 1;
      }
      iVar1 = FUN_004f65d0();
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x1c) = 0xff;
      }
      DAT_007677b0 = 0;
      *(undefined1 **)(((int)this) + 0x40) = (unsigned char *)(unsigned int)&LAB_004cbfd0;
      *(undefined1 *)(((int)this) + 0x48) = 1;
      return;
    }
    DAT_00735e4c = 0;
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x1c) = 0xff;
    }
    *(undefined1 **)(((int)this) + 0x40) = (unsigned char *)(unsigned int)&LAB_004cafd0;
    *(undefined1 *)(((int)this) + 0x48) = 1;
  }
  else if (param_2 == -0x367ca946) {
    *(undefined1 *)(((int)this) + 0x48) = 0;
    local_8 = 0;
    local_4 = 0;
    local_24 = 0x8f1436a4;
    local_20 = 0xf770;
    local_1c = 0x12312300;
    local_18 = 0x61c;
    local_14 = 0x12312311;
    local_10 = 0x12312322;
    local_c = 0xb8a7c6cd;
    FUN_004dc6e0(&local_24,"GenericDialog.fng",*(undefined4 *)(((int)this) + 0xc));
    return;
  }
  return;
}
