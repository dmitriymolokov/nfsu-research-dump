/* spd-match: far pct=15.13 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/residual_misc_p1/batches/20260724T142958Z_w0_tp1 */
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
extern unsigned char s_VISUAL_PART_MUFFLERTIP_006c1500[];
typedef WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;
unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_0044e2b0(...);
extern int DAT_0073ad34;
extern int _DAT_006b760c;
extern void *PTR_FUN_006c9324;
int unaff_ESI;

struct ThisCallBox {
  void FUN_0044f750(undefined4 param_2, undefined4 param_3, float param_4, undefined1 param_5, undefined1 param_6);
};
void ThisCallBox::FUN_0044f750(undefined4 param_2, undefined4 param_3, float param_4, undefined1 param_5, undefined1 param_6) {
  float fVar1;
  undefined4 *unaff_ESI;
  
  FUN_0044e2b0(1,((undefined4)this),param_2);
  fVar1 = ((int)(_DAT_006b760c)) + param_4;
  *(void **)(unaff_ESI) = (void **)(unsigned int)(&PTR_FUN_006c9324);
  unaff_ESI[0x83] = 0;
  unaff_ESI[0x84] = 0;
  unaff_ESI[0x85] = fVar1;
  unaff_ESI[0x80] = param_3;
  unaff_ESI[0x81] = param_4;
  *(undefined1 *)(unaff_ESI + 0x82) = param_5;
  *(undefined1 *)(unaff_ESI + 0x86) = param_6;
  unaff_ESI[0x83] = DAT_0073ad34;
  unaff_ESI[0x84] = DAT_0073ad34;
  return;
}
