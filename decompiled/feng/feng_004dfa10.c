/* spd-match: far pct=3.49 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004DFA10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004df6e0();
extern int DAT_006fa294;
extern int DAT_006fa2b0;
extern int DAT_0073400c;
extern int DAT_00734010;
extern int DAT_0075f1e8;
extern int DAT_0075f249;
extern int DAT_0075f24a;
extern int DAT_0076027e;
extern unsigned char *DAT_007677a8;
extern int DAT_0078eb0c;
void __fastcall FUN_004dfa10(int obj)

{

  undefined1 *puVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = &DAT_006fa2b0;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x24;
  } while ((int)puVar1 < 0x6fa5c8);
  if (*(int *)(obj + 8) == 3) {
    iVar4 = 0;
    piVar2 = &DAT_006fa294;
    do {
      if (*piVar2 == 3) {
        if (iVar4 * 0x24 != -0x6fa290) {
          (&DAT_006fa2b0)[iVar4 * 0x24] = 1;
        }
        break;
      }
      piVar2 = piVar2 + 9;
      iVar4 = iVar4 + 1;
    } while ((int)piVar2 < 0x6fa5ac);
    iVar4 = 0;
    piVar2 = &DAT_006fa294;
    do {
      if (*piVar2 == 0x14) {
        if (iVar4 * 0x24 != -0x6fa290) {
          (&DAT_006fa2b0)[iVar4 * 0x24] = 1;
        }
        break;
      }
      piVar2 = piVar2 + 9;
      iVar4 = iVar4 + 1;
    } while ((int)piVar2 < 0x6fa5ac);
  }
  if (*(int *)(obj + 8) == 1) {
    iVar4 = 0;
    piVar2 = &DAT_006fa294;
    do {
      if (*piVar2 == 4) {
        if (iVar4 * 0x24 != -0x6fa290) {
          (&DAT_006fa2b0)[iVar4 * 0x24] = 1;
        }
        break;
      }
      piVar2 = piVar2 + 9;
      iVar4 = iVar4 + 1;
    } while ((int)piVar2 < 0x6fa5ac);
    iVar4 = 0;
    piVar2 = &DAT_006fa294;
    do {
      if (*piVar2 == 0x14) {
        if (iVar4 * 0x24 != -0x6fa290) {
          (&DAT_006fa2b0)[iVar4 * 0x24] = 1;
        }
        break;
      }
      piVar2 = piVar2 + 9;
      iVar4 = iVar4 + 1;
    } while ((int)piVar2 < 0x6fa5ac);
  }
  if (*(int *)(obj + 4) == 2) {
    iVar4 = 0;
    piVar2 = &DAT_006fa294;
    do {
      if (*piVar2 == 6) {
        if (iVar4 * 0x24 != -0x6fa290) {
          (&DAT_006fa2b0)[iVar4 * 0x24] = 1;
        }
        break;
      }
      piVar2 = piVar2 + 9;
      iVar4 = iVar4 + 1;
    } while ((int)piVar2 < 0x6fa5ac);
  }
  if ((*(int *)(obj + 4) == 3) && (*(int *)(obj + 8) == 2)) {
    FUN_004df6e0();
  }
  if (*(int *)(obj + 8) == 5) {
    iVar4 = 0;
    piVar2 = &DAT_006fa294;
    do {
      if (*piVar2 == 7) {
        if (iVar4 * 0x24 != -0x6fa290) {
          (&DAT_006fa2b0)[iVar4 * 0x24] = 1;
        }
        break;
      }
      piVar2 = piVar2 + 9;
      iVar4 = iVar4 + 1;
    } while ((int)piVar2 < 0x6fa5ac);
  }
  if (*(int *)(obj + 4) == 1) {
    iVar4 = 0;
    piVar2 = &DAT_006fa294;
    do {
      if (*piVar2 == 9) {
        if (iVar4 * 0x24 != -0x6fa290) {
          (&DAT_006fa2b0)[iVar4 * 0x24] = 1;
        }
        break;
      }
      piVar2 = piVar2 + 9;
      iVar4 = iVar4 + 1;
    } while ((int)piVar2 < 0x6fa5ac);
  }
  iVar4 = DAT_007677a8;
  if ((DAT_00734010 == 0) &&
     (((DAT_007677a8 == 0 || ((int *)(DAT_007677a8 + 0x58a0) == (int *)0x0)) ||
      (*(int *)(DAT_007677a8 + 0x58a0) != 6)))) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = &DAT_0075f24a;
  }
  if (*pcVar3 == '\x02') {
    iVar5 = 0;
    piVar2 = &DAT_006fa294;
    do {
      if (*piVar2 == 0xb) {
        if (iVar5 * 0x24 != -0x6fa290) {
          (&DAT_006fa2b0)[iVar5 * 0x24] = 1;
        }
        break;
      }
      piVar2 = piVar2 + 9;
      iVar5 = iVar5 + 1;
    } while ((int)piVar2 < 0x6fa5ac);
  }
  if (DAT_0078eb0c < DAT_0075f1e8) {
    DAT_0078eb0c = DAT_0075f1e8;
    iVar5 = 0;
    piVar2 = &DAT_006fa294;
    do {
      if (*piVar2 == 8) {
        if (iVar5 * 0x24 != -0x6fa290) {
          (&DAT_006fa2b0)[iVar5 * 0x24] = 1;
        }
        break;
      }
      piVar2 = piVar2 + 9;
      iVar5 = iVar5 + 1;
    } while ((int)piVar2 < 0x6fa5ac);
  }
  iVar5 = 0;
  piVar2 = &DAT_006fa294;
  do {
    if (*piVar2 == 0xe) {
      if (iVar5 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar5 * 0x24] = 1;
      }
      break;
    }
    piVar2 = piVar2 + 9;
    iVar5 = iVar5 + 1;
  } while ((int)piVar2 < 0x6fa5ac);
  iVar5 = 0;
  piVar2 = &DAT_006fa294;
  do {
    if (*piVar2 == 0xf) {
      if (iVar5 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar5 * 0x24] = 1;
      }
      break;
    }
    piVar2 = piVar2 + 9;
    iVar5 = iVar5 + 1;
  } while ((int)piVar2 < 0x6fa5ac);
  iVar5 = 0;
  piVar2 = &DAT_006fa294;
  do {
    if (*piVar2 == 0x10) {
      if (iVar5 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar5 * 0x24] = 1;
      }
      break;
    }
    piVar2 = piVar2 + 9;
    iVar5 = iVar5 + 1;
  } while ((int)piVar2 < 0x6fa5ac);
  iVar5 = 0;
  piVar2 = &DAT_006fa294;
  do {
    if (*piVar2 == 0x11) {
      if (iVar5 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar5 * 0x24] = 1;
      }
      break;
    }
    piVar2 = piVar2 + 9;
    iVar5 = iVar5 + 1;
  } while ((int)piVar2 < 0x6fa5ac);
  iVar5 = 0;
  piVar2 = &DAT_006fa294;
  do {
    if (*piVar2 == 0x12) {
      if (iVar5 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar5 * 0x24] = 1;
      }
      break;
    }
    piVar2 = piVar2 + 9;
    iVar5 = iVar5 + 1;
  } while ((int)piVar2 < 0x6fa5ac);
  if ((DAT_0073400c == 0) &&
     (((iVar4 == 0 || (piVar2 = (int *)(iVar4 + 0x58a0), piVar2 == (int *)0x0)) || (*piVar2 != 5))))
  {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = &DAT_0075f249;
  }
  if ((*pcVar3 == '\x02') && (DAT_0076027e == '\0')) {
    FUN_004df6e0();
    return;
  }
  return;
}
