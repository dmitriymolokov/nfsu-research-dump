/* spd-match: far pct=10.42 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00418D10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006abe04;
extern int DAT_006abe08;
extern int DAT_006abe0c;
extern int DAT_006abe10;
extern int DAT_0071d888;
extern int DAT_0071d88c;
extern int DAT_0071d890;
extern int DAT_0071d898;
extern int DAT_0071d89c;
extern int DAT_0071dac8;
extern int DAT_0071dacc;
extern int DAT_0071dad0;
extern int DAT_0071dad4;
void __fastcall FUN_00418d10(int obj, int param_1)

{

  (&DAT_0071dac8)[obj * 4] = DAT_006abe04;
  (&DAT_0071dacc)[obj * 4] = DAT_006abe08;
  (&DAT_0071dad0)[obj * 4] = DAT_006abe0c;
  (&DAT_0071dad4)[obj * 4] = DAT_006abe10;
  (&DAT_0071d89c)[obj] = 0;
  *(undefined1 *)(obj + 0x220 + param_1) = 0;
  (&DAT_0071d888)[obj] = 0;
  (&DAT_0071d88c)[obj] = 0;
  (&DAT_0071d898)[obj] = 0;
  (&DAT_0071d890)[obj] = 0;
  return;
}
