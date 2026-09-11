/* spd-match: far pct=19.01 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

int __cdecl FUN_00668d10();
int __cdecl FUN_00668df0();
extern int DAT_007177f0;
extern int DAT_007177f4;
extern int DAT_007177f8;
extern int DAT_007177fc;
extern int DAT_007178f8;
extern int DAT_0071791c;

void FUN_00668e70(void)

{
  int iVar1;
  
  iVar1 = FUN_00668d10(&DAT_007178f8);
  if (iVar1 != 0) {
    iVar1 = 0;
    if (0 < DAT_0071791c) {
      do {
        if (((code *)(&DAT_007177f8)[iVar1 * 2] == (code *)0x0) || ((&DAT_007177fc)[iVar1 * 2] == 0)
           ) {
          (&DAT_007177f8)[iVar1 * 2] = *(undefined4 *)(((unsigned char *)&DAT_007177f0) + ((int)DAT_0071791c) * 8);
          (&DAT_007177fc)[iVar1 * 2] = *(undefined4 *)(((unsigned char *)&DAT_007177f4) + ((int)DAT_0071791c) * 8);
          *(undefined4 *)(((unsigned char *)&DAT_007177f0) + ((int)DAT_0071791c) * 8) = 0;
          *(undefined4 *)(((unsigned char *)&DAT_007177f4) + ((int)DAT_0071791c) * 8) = 0;
          DAT_0071791c = ((int)DAT_0071791c) + -1;
          iVar1 = iVar1 + -1;
        }
        else {
          (*(code *)(&DAT_007177f8)[iVar1 * 2])((&DAT_007177fc)[iVar1 * 2]);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_0071791c);
    }
    FUN_00668df0(&DAT_007178f8);
  }
  return;
}
