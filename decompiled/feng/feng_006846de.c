/* spd-match: far pct=7.64 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_17/attempt3_feng_console */
#include "ghidra_compat.h"

typedef struct _INPUT_RECORD {
  WORD EventType;
  BYTE pad[0x10];
} INPUT_RECORD, *PINPUT_RECORD;
BOOL __stdcall ReadConsoleInputA(HANDLE, PINPUT_RECORD, DWORD, DWORD *);

extern int DAT_006ee180;
extern int DAT_006ee18c;
extern char stack0xffffffbc;
extern char stack0xffffffc0;
extern char stack0xffffffc4;

undefined4 FUN_006846de(void)

{
  uint uVar1;
  uint uVar2;
  BOOL BVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  int aiStackY_50 [2];
  undefined *puStackY_48;
  uint uStack_30;
  undefined1 *puStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined *puStack_c;
  undefined *puStack_8;
  
  puStack_8 = ((char *)0x006b5490);
  puStack_c = ((char *)0x006846ea);
  iStack_20 = 0;
  uStack_24 = 0;
  if (DAT_006ee180 != -1) {
    return 1;
  }
  if (DAT_006ee18c == (HANDLE)0xfffffffe) {
    ___initconin();
  }
  if (DAT_006ee18c != (HANDLE)0xffffffff) {
    puStackY_48 = ((char *)0x0068472a);
    BVar3 = GetNumberOfConsoleInputEvents(DAT_006ee18c,&uStack_28);
    uVar1 = uStack_28;
    if ((BVar3 != 0) && (uStack_28 != 0)) {
      iVar5 = uStack_28 * -0x14;
      psVar4 = (short *)(&stack0xffffffc4 + iVar5);
      puStack_1c = &stack0xffffffc4 + iVar5;
      puStack_2c = &stack0xffffffc4 + iVar5;
      puStack_8 = (undefined *)0xffffffff;
      if (&stack0xffffffc4 == (undefined1 *)(uStack_28 * 0x14)) {
        *(uint *)(&stack0xffffffc0 + iVar5) = uStack_28 * 0x14;
        *(undefined **)(&stack0xffffffbc + iVar5) = ((char *)0x00684784);
        psVar4 = _malloc(*(size_t *)(&stack0xffffffc0 + iVar5));
        if (psVar4 == (short *)0x0) {
          return 0;
        }
        iStack_20 = 1;
      }
      uVar2 = uStack_28;
      *(uint **)(&stack0xffffffc0 + iVar5) = &uStack_30;
      *(uint *)(&stack0xffffffbc + iVar5) = uVar2;
      (&puStackY_48)[uVar1 * -5] = (undefined *)psVar4;
      aiStackY_50[uVar1 * -5 + 1] = (int)DAT_006ee18c;
      piVar6 = aiStackY_50 + uVar1 * -5;
      aiStackY_50[uVar1 * -5] = (int)((char *)0x006847ab);
      BVar3 = PeekConsoleInputA((HANDLE)aiStackY_50[uVar1 * -5 + 1],
                                (PINPUT_RECORD)(&puStackY_48)[uVar1 * -5],
                                *(DWORD *)(&stack0xffffffbc + iVar5),
                                *(LPDWORD *)(&stack0xffffffc0 + iVar5));
      if (((BVar3 != 0) && (uStack_30 != 0)) && (uStack_30 <= uStack_28)) {
        while (uVar1 = uStack_30, uStack_30 != 0) {
          if ((*psVar4 == 1) && (*(int *)(psVar4 + 2) != 0)) {
            if ((char)psVar4[7] == '\0') {
              *(short **)((int)piVar6 + -4) = psVar4 + 2;
              *(undefined **)((int)piVar6 + -8) = ((char *)0x006847d6);
              iVar5 = __getextendedkeycode();
              if (iVar5 == 0) goto code_r0x006847de;
            }
            uStack_24 = 1;
          }
code_r0x006847de:
          psVar4 = psVar4 + 10;
          uStack_30 = uVar1 - 1;
        }
      }
      if (iStack_20 != 0) {
        *(short **)((int)piVar6 + -4) = psVar4;
        *(undefined **)((int)piVar6 + -8) = ((char *)0x006847f5);
        _free(*(void **)((int)piVar6 + -4));
        return uStack_24;
      }
      return uStack_24;
    }
  }
  return 0;
}
