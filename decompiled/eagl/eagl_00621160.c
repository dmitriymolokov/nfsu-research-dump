/* spd-match: far pct=12.97 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/eagl_p2/batches/20260724T153947Z_w0_tc0 */
#include "ghidra_compat.h"

typedef unsigned char MSG;
typedef MSG *LPMSG;
typedef unsigned char *LPBYTE;
typedef unsigned int MMRESULT;
void *DefWindowProcA_exref;
void *DestroyWindow;
void *_StartAddress;

int __cdecl FUN_006205b0();
int __cdecl FUN_00621e10();
int __cdecl FUN_00622380();
int __cdecl FUN_006227f0();
int __cdecl FUN_006228c0();
int __cdecl FUN_00623f40();
extern int DAT_006dfb4c;
extern int DAT_00709570;
extern int DAT_00709738;
extern unsigned char *DAT_00709d80;

void __fastcall FUN_00621160(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  BOOL BVar2;
  
  iVar1 = (**(code **)(*DAT_00709d80 + 0xc))(DAT_00709d80);
  while (iVar1 == -0x7789f798) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xc) + 0xe8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      (*UNRECOVERED_JUMPTABLE)();
    }
    BVar2 = PeekMessageA((LPMSG)&DAT_00709738,(HWND)0x0,0,0,1);
    if (BVar2 != 0) {
      TranslateMessage((MSG *)&DAT_00709738);
      DispatchMessageA((MSG *)&DAT_00709738);
    }
    iVar1 = (**(code **)(*DAT_00709d80 + 0xc))(DAT_00709d80);
  }
  if (iVar1 != 0) {
    DAT_006dfb4c = 0xffffffff;
    iVar1 = FUN_006205b0();
    if ((iVar1 < 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xc) + 0xf0),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      (*UNRECOVERED_JUMPTABLE)();
    }
    FUN_00621e10();
    FUN_00622380();
    FUN_006228c0();
    FUN_00623f40();
    FUN_006227f0();
    DAT_00709570 = 0;
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xc) + 0xec);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    
                    
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}
