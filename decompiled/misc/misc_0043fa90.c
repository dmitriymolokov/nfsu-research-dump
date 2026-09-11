/* spd-match: far pct=7.49 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2110 */
#include "ghidra_compat.h"

int __cdecl FUN_00436230();
extern unsigned char *DAT_0073619c;
extern int DAT_0078a320;
extern int DAT_0078a324;
extern int DAT_0078a328;
extern int DAT_0078a32c;
extern int _DAT_006b786c;
extern int _DAT_006b7870;
extern int _DAT_006b7874;
extern int _DAT_006b7878;
extern int _DAT_006cca38;
int unaff_ESI;

void FUN_0043fa90(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = *(int *)(*unaff_ESI + 4);
  if (((((DAT_0073619c != (int *)0x0) && (*DAT_0073619c == 4)) &&
       (1 < ((int)DAT_0078a328) + ((int)DAT_0078a32c) + ((int)DAT_0078a324) + (int)DAT_0078a320)) &&
      ((_DAT_006b786c < (float)DAT_0073619c[5] * _DAT_006cca38 &&
       ((float)DAT_0073619c[5] * _DAT_006cca38 < _DAT_006b7870)))) &&
     ((*(char *)(*(int *)(iVar1 + 0x1c) + 10) == '\x01' &&
      (*(char *)(*(int *)(unaff_ESI[1] + 0x70) + 0x14) != '\0')))) {
    FUN_00436230(0x3f800000);
  }
  if (((_DAT_006b7874 < *(float *)(iVar1 + 0x3d4)) && (_DAT_006b7878 < *(float *)(iVar1 + 0x47c)))
     && (*(char *)(*(int *)(unaff_ESI[1] + 0x68) + 0x14) != '\0')) {
    FUN_00436230(*(undefined4 *)(iVar1 + 0x47c));
  }
  return;
}
