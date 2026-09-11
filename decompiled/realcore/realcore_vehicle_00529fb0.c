/* spd-match: far pct=14.47 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00529FB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct {
  undefined4 _0_4_;
  undefined4 _4_4_;
  undefined4 _8_4_;
  undefined4 _12_4_;
  undefined2 _16_2_;
} m375_s_nfs_underground_006cb164;
extern m375_s_nfs_underground_006cb164 s__NFS_Underground__006cb164;
typedef WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;
unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

extern int DAT_006b6644;
extern int _DAT_006b6674;
extern void LAB_00529ff6(void);
uint __fastcall FUN_00529fb0(uint val, int param_1)

{
  float fVar1;
  float fVar2;

  undefined2 uVar3;
  
  if (*(int *)(param_1 + 0x18e8) != 3) {
    fVar1 = *(float *)(unsigned int)(param_1 + 0x1f1c);
    fVar2 = *(float *)(unsigned int)(&((int)(DAT_006b6644)) + *(int *)(param_1 + 0x1d18) * 4);
    uVar3 = (undefined2)((uint)*(int *)(param_1 + 0x1d18) >> 0x10);
    val = CONCAT22(uVar3,(ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10
                            | (ushort)(fVar1 == fVar2) << 0xe);
    if (fVar1 < fVar2) {
LAB_00529ff6:
      return CONCAT31((int3)(val >> 8),1);
    }
    val = CONCAT31((int3)(val >> 8),*(char *)(param_1 + 0x1f10));
    if (*(char *)(param_1 + 0x1f10) == '\0') {
      fVar2 = ((int)(_DAT_006b6674)) + *(float *)(unsigned int)(param_1 + 0x1f14);
      fVar1 = *(float *)(unsigned int)(param_1 + 0x240);
      val = CONCAT22(uVar3,(ushort)(fVar2 < fVar1) << 8 |
                              (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                              (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 < fVar1) goto LAB_00529ff6;
    }
  }
  return val & 0xffffff00;
}
