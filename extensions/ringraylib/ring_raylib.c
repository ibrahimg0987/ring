/* Copyright (c) 2019 Mahmoud Fayed <msfclipper@yahoo.com> */

#define RING_EXTENSION	// Don't call : windows.h (Avoid conflict with raylib.h)
#include <ring.h>

#include <raylib.h>


RING_FUNC(ring_InitWindow)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	InitWindow( (int ) RING_API_GETNUMBER(1), (int ) RING_API_GETNUMBER(2),RING_API_GETSTRING(3));
}


RING_FUNC(ring_WindowShouldClose)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_RETNUMBER(WindowShouldClose());
}


RING_FUNC(ring_CloseWindow)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	CloseWindow();
}


RING_FUNC(ring_IsWindowReady)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_RETNUMBER(IsWindowReady());
}


RING_FUNC(ring_IsWindowMinimized)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_RETNUMBER(IsWindowMinimized());
}


RING_FUNC(ring_IsWindowResized)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_RETNUMBER(IsWindowResized());
}


RING_FUNC(ring_IsWindowHidden)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_RETNUMBER(IsWindowHidden());
}


RING_FUNC(ring_ToggleFullscreen)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	ToggleFullscreen();
}


RING_FUNC(ring_UnhideWindow)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	UnhideWindow();
}


RING_FUNC(ring_HideWindow)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	HideWindow();
}


RING_FUNC(ring_SetWindowIcon)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	SetWindowIcon(* (Image  *) RING_API_GETCPOINTER(1,"Image"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"Image"));
}


RING_FUNC(ring_SetWindowTitle)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetWindowTitle(RING_API_GETSTRING(1));
}


RING_FUNC(ring_SetWindowPosition)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetWindowPosition( (int ) RING_API_GETNUMBER(1), (int ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_SetWindowMonitor)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetWindowMonitor( (int ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_SetWindowMinSize)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetWindowMinSize( (int ) RING_API_GETNUMBER(1), (int ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_SetWindowSize)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetWindowSize( (int ) RING_API_GETNUMBER(1), (int ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_GetWindowHandle)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_RETCPOINTER(GetWindowHandle(),"void");
}


RING_FUNC(ring_GetScreenWidth)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_RETNUMBER(GetScreenWidth());
}


RING_FUNC(ring_GetScreenHeight)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_RETNUMBER(GetScreenHeight());
}


RING_FUNC(ring_GetMonitorCount)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_RETNUMBER(GetMonitorCount());
}


RING_FUNC(ring_GetMonitorWidth)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(GetMonitorWidth( (int ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_GetMonitorHeight)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(GetMonitorHeight( (int ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_GetMonitorPhysicalWidth)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(GetMonitorPhysicalWidth( (int ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_GetMonitorPhysicalHeight)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(GetMonitorPhysicalHeight( (int ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_GetMonitorName)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETSTRING(GetMonitorName( (int ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_GetClipboardText)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_RETSTRING(GetClipboardText());
}


RING_FUNC(ring_SetClipboardText)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetClipboardText(RING_API_GETSTRING(1));
}


RING_FUNC(ring_ShowCursor)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	ShowCursor();
}


RING_FUNC(ring_HideCursor)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	HideCursor();
}


RING_FUNC(ring_IsCursorHidden)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_RETNUMBER(IsCursorHidden());
}


RING_FUNC(ring_EnableCursor)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	EnableCursor();
}


RING_FUNC(ring_DisableCursor)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	DisableCursor();
}


RING_FUNC(ring_ClearBackground)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	ClearBackground(* (Color  *) RING_API_GETCPOINTER(1,"Color"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"Color"));
}


RING_FUNC(ring_BeginDrawing)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	BeginDrawing();
}


RING_FUNC(ring_EndDrawing)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	EndDrawing();
}


RING_FUNC(ring_BeginMode2D)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	BeginMode2D(* (Camera2D  *) RING_API_GETCPOINTER(1,"Camera2D"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"Camera2D"));
}


RING_FUNC(ring_EndMode2D)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	EndMode2D();
}


RING_FUNC(ring_BeginMode3D)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	BeginMode3D(* (Camera3D  *) RING_API_GETCPOINTER(1,"Camera3D"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"Camera3D"));
}


RING_FUNC(ring_EndMode3D)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	EndMode3D();
}


RING_FUNC(ring_BeginTextureMode)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	BeginTextureMode(* (RenderTexture2D  *) RING_API_GETCPOINTER(1,"RenderTexture2D"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"RenderTexture2D"));
}


RING_FUNC(ring_EndTextureMode)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	EndTextureMode();
}


RING_FUNC(ring_GetMouseRay)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	{
		Ray *pValue ; 
		pValue = (Ray *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(Ray)) ;
		*pValue = GetMouseRay(* (Vector2  *) RING_API_GETCPOINTER(1,"Vector2"),* (Camera  *) RING_API_GETCPOINTER(2,"Camera"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"Vector2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(2,"Camera"));
		RING_API_RETMANAGEDCPOINTER(pValue,"Ray",ring_state_free);
	}
}


RING_FUNC(ring_GetWorldToScreen)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	{
		Vector2 *pValue ; 
		pValue = (Vector2 *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(Vector2)) ;
		*pValue = GetWorldToScreen(* (Vector3  *) RING_API_GETCPOINTER(1,"Vector3"),* (Camera  *) RING_API_GETCPOINTER(2,"Camera"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"Vector3"));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(2,"Camera"));
		RING_API_RETMANAGEDCPOINTER(pValue,"Vector2",ring_state_free);
	}
}


RING_FUNC(ring_GetCameraMatrix)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	{
		Matrix *pValue ; 
		pValue = (Matrix *) ring_state_malloc(((VM *) pPointer)->pRingState,sizeof(Matrix)) ;
		*pValue = GetCameraMatrix(* (Camera  *) RING_API_GETCPOINTER(1,"Camera"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"Camera"));
		RING_API_RETMANAGEDCPOINTER(pValue,"Matrix",ring_state_free);
	}
}


RING_FUNC(ring_SetTargetFPS)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetTargetFPS( (int ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_GetFPS)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_RETNUMBER(GetFPS());
}


RING_FUNC(ring_GetFrameTime)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_RETNUMBER(GetFrameTime());
}


RING_FUNC(ring_GetTime)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_RETNUMBER(GetTime());
}


RING_FUNC(ring_ColorToInt)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_RETNUMBER(ColorToInt(* (Color  *) RING_API_GETCPOINTER(1,"Color")));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		ring_state_free(((VM *) pPointer)->pRingState,RING_API_GETCPOINTER(1,"Color"));
}

RING_API void ringlib_init(RingState *pRingState)
{
	ring_vm_funcregister("initwindow",ring_InitWindow);
	ring_vm_funcregister("windowshouldclose",ring_WindowShouldClose);
	ring_vm_funcregister("closewindow",ring_CloseWindow);
	ring_vm_funcregister("iswindowready",ring_IsWindowReady);
	ring_vm_funcregister("iswindowminimized",ring_IsWindowMinimized);
	ring_vm_funcregister("iswindowresized",ring_IsWindowResized);
	ring_vm_funcregister("iswindowhidden",ring_IsWindowHidden);
	ring_vm_funcregister("togglefullscreen",ring_ToggleFullscreen);
	ring_vm_funcregister("unhidewindow",ring_UnhideWindow);
	ring_vm_funcregister("hidewindow",ring_HideWindow);
	ring_vm_funcregister("setwindowicon",ring_SetWindowIcon);
	ring_vm_funcregister("setwindowtitle",ring_SetWindowTitle);
	ring_vm_funcregister("setwindowposition",ring_SetWindowPosition);
	ring_vm_funcregister("setwindowmonitor",ring_SetWindowMonitor);
	ring_vm_funcregister("setwindowminsize",ring_SetWindowMinSize);
	ring_vm_funcregister("setwindowsize",ring_SetWindowSize);
	ring_vm_funcregister("getwindowhandle",ring_GetWindowHandle);
	ring_vm_funcregister("getscreenwidth",ring_GetScreenWidth);
	ring_vm_funcregister("getscreenheight",ring_GetScreenHeight);
	ring_vm_funcregister("getmonitorcount",ring_GetMonitorCount);
	ring_vm_funcregister("getmonitorwidth",ring_GetMonitorWidth);
	ring_vm_funcregister("getmonitorheight",ring_GetMonitorHeight);
	ring_vm_funcregister("getmonitorphysicalwidth",ring_GetMonitorPhysicalWidth);
	ring_vm_funcregister("getmonitorphysicalheight",ring_GetMonitorPhysicalHeight);
	ring_vm_funcregister("getmonitorname",ring_GetMonitorName);
	ring_vm_funcregister("getclipboardtext",ring_GetClipboardText);
	ring_vm_funcregister("setclipboardtext",ring_SetClipboardText);
	ring_vm_funcregister("showcursor",ring_ShowCursor);
	ring_vm_funcregister("hidecursor",ring_HideCursor);
	ring_vm_funcregister("iscursorhidden",ring_IsCursorHidden);
	ring_vm_funcregister("enablecursor",ring_EnableCursor);
	ring_vm_funcregister("disablecursor",ring_DisableCursor);
	ring_vm_funcregister("clearbackground",ring_ClearBackground);
	ring_vm_funcregister("begindrawing",ring_BeginDrawing);
	ring_vm_funcregister("enddrawing",ring_EndDrawing);
	ring_vm_funcregister("beginmode2d",ring_BeginMode2D);
	ring_vm_funcregister("endmode2d",ring_EndMode2D);
	ring_vm_funcregister("beginmode3d",ring_BeginMode3D);
	ring_vm_funcregister("endmode3d",ring_EndMode3D);
	ring_vm_funcregister("begintexturemode",ring_BeginTextureMode);
	ring_vm_funcregister("endtexturemode",ring_EndTextureMode);
	ring_vm_funcregister("getmouseray",ring_GetMouseRay);
	ring_vm_funcregister("getworldtoscreen",ring_GetWorldToScreen);
	ring_vm_funcregister("getcameramatrix",ring_GetCameraMatrix);
	ring_vm_funcregister("settargetfps",ring_SetTargetFPS);
	ring_vm_funcregister("getfps",ring_GetFPS);
	ring_vm_funcregister("getframetime",ring_GetFrameTime);
	ring_vm_funcregister("gettime",ring_GetTime);
	ring_vm_funcregister("colortoint",ring_ColorToInt);
}
