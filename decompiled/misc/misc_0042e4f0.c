/* spd-match: far pct=11.37 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042E4F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00414a10();
int __cdecl FUN_005919b0();
extern int DAT_006f03d4;
extern int DAT_006f03e8;
extern int DAT_006f03f0;
extern int DAT_006f0888;
extern int DAT_00701084;
extern int DAT_007361a8;
extern int DAT_007361c4;
extern int DAT_0078a344;
extern int DAT_0078a368;
extern int DAT_0078a3f6;
extern int DAT_0078a3f7;
extern int DAT_0078a3f8;
extern void LAB_0042e52d(void);
extern void LAB_0042e5ec(void);
int unaff_ESI;
void __fastcall FUN_0042e4f0(int val)

{

  int iVar1;
  int unaff_ESI;
  
  if ((val == 1) && (DAT_00701084 == 0)) {
    val = 3;
  }
  if (DAT_0078a368 == 0) {
    if (DAT_007361c4 == 2) {
      if (*(int *)(unaff_ESI + 0x10) < 1) {
        if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
          iVar1 = FUN_005919b0();
          if (iVar1 == -1) {
            val = DAT_006f03e8;
          }
        }
        else {
          FUN_00414a10();
          FUN_00414a10();
          val = 6;
        }
      }
      else {
        val = 6;
      }
      if (DAT_0078a3f7 != val) {
        DAT_0078a3f7 = (char)val;
        *(undefined4 *)(unaff_ESI + 0x538) = DAT_006f0888;
      }
    }
    else {
      iVar1 = 0;
      do {
        if ((&DAT_006f03d4)[iVar1] == val) {
          if (iVar1 != -1) goto LAB_0042e5ec;
          break;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 5);
      val = DAT_006f03d4;
LAB_0042e5ec:
      if (DAT_0078a3f6 != val) {
        DAT_0078a3f6 = (char)val;
        *(undefined4 *)(unaff_ESI + 0x538) = DAT_006f0888;
      }
    }
  }
  else {
    iVar1 = 0;
    do {
      if ((&DAT_006f03f0)[iVar1] == val) {
        if (iVar1 != -1) goto LAB_0042e52d;
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    val = DAT_006f03f0;
LAB_0042e52d:
    if (DAT_0078a3f8 != val) {
      DAT_0078a3f8 = (char)val;
      *(undefined4 *)(unaff_ESI + 0x538) = DAT_006f0888;
    }
  }
  if (*(int *)(unaff_ESI + 0x534) != 0) {
    *(int *)(*(int *)(unaff_ESI + 0x534) + 0xc0) = val;
  }
  return;
}
