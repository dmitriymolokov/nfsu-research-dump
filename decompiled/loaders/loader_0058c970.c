/* spd-match: far pct=4.70 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_misc_p2/batches/20260724T142512Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct m375_ov12 { undefined4 a,b,c; } m375_ov12;
typedef struct _m375_ptiddata {
  void *_initaddr; void *_initarg; void *_translator; void *_terminate;
  void *_unexpected; void *_purecall; void *_token; void *_tpxcptinfoptrs;
  void *_pxcptacttab; unsigned int _holdrand; int _tfpecode; int _terrno;
  int _tdoserrno; int _NLG_dwCode; int _maxcharsize; char _con_ch_buf[32];
  unsigned int _thandle; unsigned char _pad[64];
} *_ptiddata_m375;
#define _ptiddata _ptiddata_m375
unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_004e2000();
int __cdecl FUN_0053e620();
extern int DAT_007344e8;
extern int DAT_00743c20;

undefined4 __fastcall FUN_0058c970(undefined4 param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int local_4;
  
  pcVar3 = (unsigned int)(DAT_007344e8);
  if (*(char *)(param_2 + 0xd) == '\x02') {
    iVar7 = *(int *)(param_2 + 0x10);
    if (*(int *)(iVar7 + 0x50) == 0) {
      if (*(int *)(iVar7 + 0x54) == 0) {
        return 0;
      }
      cVar1 = *(char *)(iVar7 + 0x5b);
    }
    else {
      cVar1 = *(char *)(*(int *)(iVar7 + 0x50) + 0x8a);
    }
    if (cVar1 != '\0') {
      local_4 = 0;
      piVar5 = (int *)(param_2 + 0x14);
      do {
        iVar7 = 0;
        piVar6 = piVar5;
        do {
          if ((((*piVar6 != 0) && (iVar4 = FUN_0053e620(&DAT_00743c20,*piVar6), iVar4 != 0)) &&
              (pcVar2 = *(code **)(iVar4 + 0x10), pcVar2 != (code *)0x0)) &&
             (((pcVar3 == (code *)0x0 || (pcVar2 < pcVar3)) ||
              ((int)FUN_004e2000 + (int)pcVar3 <= pcVar2)))) {
            return 0;
          }
          iVar7 = iVar7 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar7 < 4);
        local_4 = local_4 + 1;
        piVar5 = piVar5 + 4;
        if (0x1d < (unsigned int)(local_4)) {
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}
