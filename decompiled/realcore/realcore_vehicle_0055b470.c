/* spd-match: far pct=3.45 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0055B470 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004eba00();
int __cdecl FUN_0054d4a0();
extern int DAT_0073d868;
extern void LAB_0055b4db(void);
void __fastcall FUN_0055b470(int val)

{

  if (val < 0x6d616e7a) {
    if (val == 0x6d616e79) goto LAB_0055b4db;
    if (val == 0) {
      return;
    }
    if ((val == 0x696d7374) || (val == 0x6d61696c)) goto LAB_0055b4db;
  }
  else if (((val == 0x6e656d6c) || (val == 0x74696d65)) || (val == 0x75757372))
  goto LAB_0055b4db;
  FUN_0054d4a0(&DAT_0073d868,val);
LAB_0055b4db:
  FUN_004eba00(0,0);
  return;
}
