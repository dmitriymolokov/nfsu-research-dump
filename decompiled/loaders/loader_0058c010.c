/* spd-match: far pct=6.15 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058C010 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004e2000();
int __cdecl FUN_0053e620();
extern int DAT_007344e8;
extern int DAT_00740420;
undefined4 __fastcall FUN_0058c010(unsigned char * obj)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;

  int iVar4;
  int iVar5;
  unsigned char *pcVar6;
  
  pcVar3 = DAT_007344e8;
  if (((obj[0xba1] != (unsigned char)0x2) || (obj[0xba2] != (unsigned char)0x2)) || (obj[0xba3] == (unsigned char)0x0)
     ) {
    return 0;
  }
  if (((DAT_007344e8 != (code *)0x0) && (DAT_007344e8 <= obj)) &&
     ((obj < ((unsigned char *)(void *)FUN_004e2000) + (int)DAT_007344e8 &&
      ((*(int *)(*(int *)(obj + 0xba4) + 0x54) != 0 &&
       (*(char *)(*(int *)(*(int *)(obj + 0xba4) + 0x54) + 0x8a) != '\0')))))) {
    iVar1 = *(int *)(obj + 0xbac);
    iVar5 = 0;
    if (0 < iVar1) {
      pcVar6 = obj + 0xbb0;
      do {
        if (*(char *)(*(int *)pcVar6 + 0xe) != '\x02') {
          return 0;
        }
        iVar4 = FUN_0053e620(&DAT_00740420,*(undefined4 *)(*(int *)pcVar6 + 8));
        if ((iVar4 != 0) && (pcVar2 = *(code **)(iVar4 + 0x10), pcVar2 != (code *)0x0)) {
          if (pcVar2 < pcVar3) {
            return 0;
          }
          if (((unsigned char *)(void *)FUN_004e2000) + (int)pcVar3 <= pcVar2) {
            return 0;
          }
        }
        iVar5 = iVar5 + 1;
        pcVar6 = pcVar6 + 4;
      } while (iVar5 < iVar1);
    }
    return 1;
  }
  return 0;
}
