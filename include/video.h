#ifndef VIDEO_H
#define VIDEO_H

int repl_getSizeX();
int repl_getSizeY();
bool patchVideoInit(bool customRes);
bool patchFOV(float projH, float projV);
bool patchDOFResolution(int32_t res);
bool patchDisableDOF();
bool patchCutscenesBorder();
bool patchShadows(float res);
bool patchTexInit();
bool patchPreviewRes(int32_t sz);
bool patchPixelation(float resX, float resY);
int repl_isFullscreen();
int repl_setSizeXY(int, int);
int repl_getResX();
int repl_getResY();
int repl_416ba0(int unk0);
int repl_41b2c0();
int repl_41b250_1();
int repl_41b250_2();
int repl_setRefreshRate(int rate);

#endif
