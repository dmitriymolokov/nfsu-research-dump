/* spd-match: far pct=20.48 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_00506DB0 */
#include <windows.h>
extern int __cdecl FUN_00506160(void);
void __fastcall FUN_00506db0(void* pObj) {
    int* pList = (int*)((char*)pObj + 0x44);
    int* pHead = (int*)((char*)pObj + 0x50);
    int* pIt = *(int**)((char*)pObj + 0x50);
    int* pCur = (int*)((char*)pObj + 0x44);
    char bFlag = (char)FUN_00506160();
    int* pFound = 0;
    if (pIt != pHead) {
        do {
            if (*(int*)((char*)pCur + 8) == *(int*)((char*)pIt + 8)) {
                pFound = pIt;
                break;
            }
            pIt = (int*)*pIt;
        } while (pIt != pHead);
    }
    if (pCur != pList) {
        do {
            int val = *(int*)((char*)pCur + 8);
            if (val >= 0 && val <= 2) {
                if (pFound) ((char*)pFound)[0x18] = (bFlag != 0);
            }
            pCur = (int*)*pCur;
            if (pFound) pFound = (int*)*pFound;
        } while (pCur != pList);
    }
}
