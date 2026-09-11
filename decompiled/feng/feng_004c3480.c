/* spd-match: far pct=15.29 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C2440_void_casts/batches/20260724T141852Z_w0_tp1 */
#include "ghidra_compat.h"

void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);
int __cdecl lstrcmpiA(LPCSTR, LPCSTR);
int __cdecl __ftol(void);

int __cdecl FUN_004323f0(...);
int __cdecl FUN_004c2cf0(...);
int __cdecl FUN_004c3390(...);
int __cdecl FUN_004dcbe0(...);
int __cdecl FUN_004f6360(...);
int __cdecl FUN_004f7d30(...);
int __cdecl FUN_004f89d0(...);
int __cdecl FUN_00504320(...);
int __cdecl FUN_00504390(...);
int __cdecl FUN_00504890(...);
int __cdecl FUN_005824b0(...);
int __cdecl FUN_005a1520(...);
extern int DAT_006cc7a4;
extern int DAT_006f0fb8;
extern unsigned char *DAT_00735e6c;
extern int DAT_00745e4c;
extern int DAT_00748850;
extern int DAT_0075eef8;

struct ThisCallBox {
  void FUN_004c3480(uint param_2);
};
void ThisCallBox::FUN_004c3480(uint param_2) {
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  float10 extraout_ST0;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_2 < 0x9120409f) {
    if (param_2 != 0x9120409e) {
      if (param_2 != 0xc407210) {
        if (param_2 != 0x911ab364) {
          return;
        }
        _free(DAT_00735e6c);
        DAT_00735e6c = (unsigned char *)0;
        FUN_00504890(0);
        FUN_00504390();
        FUN_004f6360(*(undefined4 *)(((int)this) + 0xc));
        return;
      }
      if ((*(float *)(*(int *)(((int)this) + 0x48) + 0xe64) < DAT_006cc7a4) &&
         (iVar2 = FUN_005a1520(&DAT_0075eef8), (float10)iVar2 < extraout_ST0)) {
        local_10 = 0x639;
        local_14 = 0x444ad5e4;
        local_c = 0;
        FUN_004dcbe0(&local_14,"GenericOKDialog.fng",*(undefined4 *)(((int)this) + 0xc));
        return;
      }
      FUN_00504320(*(undefined4 *)(((int)this) + 0xc));
      uVar3 = FUN_004c2cf0(((int)this) + 0x90);
      pvVar1 = DAT_00735e6c;
      FUN_004323f0((int)DAT_00735e6c + 0x720,uVar3);
      FUN_004323f0(pvVar1,((int)this) + 0x90);
      DAT_00745e4c = 1;
      FUN_004f6360(*(undefined4 *)(((int)this) + 0xc));
      return;
    }
  }
  else if (param_2 != 0xb5971bf1) {
    if (param_2 != 0xc98356ba) {
      return;
    }
    if (-1 < DAT_006f0fb8) {
      DAT_006f0fb8 = -1;
      FUN_005824b0(&DAT_00748850);
    }
    FUN_004f89d0();
    FUN_004f7d30();
    return;
  }
  FUN_004c3390();
  return;
}
