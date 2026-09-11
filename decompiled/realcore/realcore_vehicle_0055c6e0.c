/* spd-match: far pct=6.40 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0055C6E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041f4d0();
int __cdecl FUN_004ebcb0();
int __cdecl FUN_0054da00();
extern int DAT_0070108e;
extern unsigned char *DAT_00734f90;
extern void LAB_0055ce00(void);
void __fastcall FUN_0055c6e0(int obj, int param_1)

{
  int iVar1;
  char cVar2;

  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  *(undefined4 *)(obj + 0x50) = 0;
  do {
    if (*(int *)(obj + 0x40 + *(int *)(obj + 0x50) * 4) == param_1) break;
    iVar3 = *(int *)(obj + 0x50) + 1;
    *(int *)(obj + 0x50) = iVar3;
  } while (iVar3 < 4);
  pcVar4 = &DAT_00734f90 + *(int *)(obj + 0x50) * 0xd;
  iVar3 = 0;
  if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
    do {
      iVar1 = iVar3 + 1;
      iVar3 = iVar3 + 1;
    } while (pcVar4[iVar1] != '\0');
    if (iVar3 != 0) {
      FUN_004ebcb0();
      iVar3 = *(int *)(obj + 0x50);
      cVar2 = (&DAT_00734f90)[iVar3 * 0xd];
      pcVar4 = (char *)(obj + 0x54);
      *pcVar4 = cVar2;
      if (cVar2 != '\0') {
        pcVar5 = pcVar4;
        do {
          cVar2 = pcVar5[(int)(&DAT_00734f90 + iVar3 * 0xd + (1 - (int)pcVar4))];
          pcVar5 = pcVar5 + 1;
          *pcVar5 = cVar2;
        } while (cVar2 != '\0');
      }
      FUN_0054da00(pcVar4,&LAB_0055ce00);
      return;
    }
  }
  DAT_0070108e = 1;
  FUN_0041f4d0();
  return;
}
