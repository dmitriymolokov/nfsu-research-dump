/* spd-match: far pct=12.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C7150 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00417600();
int __cdecl FUN_004323f0();
int __cdecl FUN_004ac5a0();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2330();
int __cdecl FUN_0057f2b0();
extern unsigned char *DAT_006fad60;
extern int DAT_00745000;
extern int DAT_00748850;
extern int DAT_0075eef8;
extern int _DAT_0072cc80;
extern void LAB_004c7196(void);
void __fastcall FUN_004c7150(int obj)

{

  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_730 [52];
  undefined4 auStack_6fc [446];
  
  iVar2 = *(int *)(obj + 0x40);
  FUN_00417600();
  FUN_004ac5a0(&DAT_0075eef8,0,local_730);
  iVar3 = 0;
  piVar1 = &DAT_006fad60;
  do {
    if (*piVar1 == *(int *)(iVar2 + 8)) {
      puVar4 = &DAT_006fad60 + iVar3 * 4;
      goto LAB_004c7196;
    }
    piVar1 = piVar1 + 4;
    iVar3 = iVar3 + 1;
  } while ((int)piVar1 < 0x6fadf0);
  puVar4 = (undefined4 *)0x0;
LAB_004c7196:
  auStack_6fc[puVar4[1]] = 1;
  FUN_0057f2b0(1);
  FUN_004323f0(&DAT_00745000,local_730);
  iVar2 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,&DAT_00745000);
  _DAT_0072cc80 = 2;
  if (iVar2 != 0) {
    FUN_004b0e50(iVar2,&DAT_00748850,2);
  }
  return;
}
