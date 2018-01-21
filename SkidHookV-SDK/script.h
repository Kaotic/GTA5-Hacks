#pragma once
extern DWORD wakeAt;
extern HANDLE mainFiber;

void WAIT(DWORD ms);

void script_main();